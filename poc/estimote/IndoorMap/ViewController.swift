//
//  ViewController.swift
//  IndoorMap
//

import UIKit
import AVFoundation
import Alamofire

class ViewController: UIViewController, EILIndoorLocationManagerDelegate {

    let locationManager = EILIndoorLocationManager()
    let audioPlayer = AudioPlayer()
    
    var location: EILLocation!
    
    @IBOutlet weak var locationView: EILIndoorLocationView!

    override func viewDidLoad() {
        
        super.viewDidLoad()

        // You can get them by adding your app on https://cloud.estimote.com/#/apps
        // ESTConfig.setupAppID("soundspace-o3k", andAppToken: "9f572ccb81ddc5ce01e6c8745466ffe0")

        // Grab the path, make sure to add it to your project!
        //let coinSound = NSURL(fileURLWithPath: NSBundle.mainBundle().pathForResource("coin", ofType: "wav")!)


        self.audioPlayer.start();

        
        self.locationManager.delegate = self

        let locationBuilder: EILLocationBuilder = EILLocationBuilder()
        /*locationBuilder.setLocationBoundaryPoints([
            EILPoint(x:0, y:0),
            EILPoint(x:0, y:3.71),
            EILPoint(x:4.84, y:3.71),
            EILPoint(x:4.84, y:0)
        ])
        */
        
        //let ice_1_position = EILOrientedPoint(x: 2.75, y: 0);
        //ice 244d87bf-c9fa-4d7f-9b92-b71d9b26afe0 // E649946E-017B-43C1-A1CE-E8E1DDD4ADE7
        //let blueberry_1_position = EILOrientedPoint(x: 4.84, y: 2.08);
        // blue
        //let mint_1_position = EILOrientedPoint(x: 3.08, y: 3.71);
        //let blueberry_2_position = EILOrientedPoint(x: 0, y: 1.67);
       

        //locationBuilder.setLocationOrientation(60);
        
//        locationBuilder.setLocationBoundaryPoints([
//            EILPoint(x: 0, y: 0),
//            EILPoint(x: 4.84, y: 0),
//            EILPoint(x: 4.84, y: 3.71),
//            EILPoint(x: 0, y: 3.71)
//        ]);
        
        locationBuilder.setLocationBoundaryPoints([
            EILPoint(x: 0, y: 0),
            EILPoint(x: 0, y: 3.71),
            EILPoint(x: 4.84, y: 3.71),
            EILPoint(x: 4.84, y: 0)
        ]);
        
        
//        locationBuilder.addBeaconWithIdentifier("244d87bf-c9fa-4d7f-9b92-b71d9b26afe0",
//            atBoundarySegmentIndex: 0,
//            inDistance: 1.67,
//            fromSide: .LeftSide
//        )
//        locationBuilder.addBeaconWithIdentifier("062e73c6-450d-4183-a179-14bdb8a33572",
//            atBoundarySegmentIndex: 1,
//            inDistance: 3.08,
//            fromSide: .LeftSide
//        )
//        locationBuilder.addBeaconWithIdentifier("a6b7afb5-e91c-4ced-abe9-99afa2891dc7",
//            atBoundarySegmentIndex: 2,
//            inDistance: 2.08,
//            fromSide: .RightSide
//        )
//        locationBuilder.addBeaconWithIdentifier("7a4e3bda-d5a2-4479-ba15-f0c0558bda32",
//            atBoundarySegmentIndex: 3,
//            inDistance: 2.75,
//            fromSide: .LeftSide
//        )
        
        //BLUEBERRY 2
        locationBuilder.addBeaconIdentifiedByMac("EE:EB:10:31:16:B2",
            atBoundarySegmentIndex: 0,
            inDistance: 1.67,
            fromSide: .LeftSide
        )
        //MINT 1
        locationBuilder.addBeaconIdentifiedByMac("E3:B0:5D:F0:0C:70",
            atBoundarySegmentIndex: 1,
            inDistance: 3.08,
            fromSide: .LeftSide
        )
        //ICE 2
        locationBuilder.addBeaconIdentifiedByMac("C3:50:DF:E2:A6:06",
            atBoundarySegmentIndex: 1,
            inDistance: 0.88,
            fromSide: .LeftSide
        )
        //BLUEBERRY 1
        locationBuilder.addBeaconIdentifiedByMac("DA:40:B8:BC:0D:CC",
            atBoundarySegmentIndex: 2,
            inDistance: 2.08,
            fromSide: .RightSide
        )
        //ICE 1
        locationBuilder.addBeaconIdentifiedByMac("CD:12:F3:91:67:44",
            atBoundarySegmentIndex: 3,
            inDistance: 2.75,
            fromSide: .LeftSide
        )
        //MINT 2
        locationBuilder.addBeaconIdentifiedByMac("D6:AC:A1:C5:90:AA",
            atBoundarySegmentIndex: 3,
            inDistance: 1.38,
            fromSide: .LeftSide
        )
        

        locationBuilder.setLocationOrientation(30);
        
        self.location = locationBuilder.build()
        self.locationView.showTrace = true
        self.locationView.showWallLengthLabels = true
        self.locationView.rotateOnPositionUpdate = false
        
        self.locationView.drawLocation(location)
        self.locationManager.startPositionUpdatesForLocation(self.location)
        
        //NSLog("location: %@", self.location.toDictionary());
    }

    func indoorLocationManager(manager: EILIndoorLocationManager!, didFailToUpdatePositionWithError error: NSError!) {
        NSLog("location: %@", self.location.toDictionary());
        print("failed to update position: \(error)")
    }

    func indoorLocationManager(manager: EILIndoorLocationManager!, didUpdatePosition position: EILOrientedPoint!, withAccuracy positionAccuracy: EILPositionAccuracy, inLocation location: EILLocation!) {
        var accuracy: String!
        switch positionAccuracy {
        case .VeryHigh: accuracy = "+/- 1.00m"
        case .High:     accuracy = "+/- 1.62m"
        case .Medium:   accuracy = "+/- 2.62m"
        case .Low:      accuracy = "+/- 4.24m"
        case .VeryLow:  accuracy = "+/- ? :-("
            default: break
        }
        print(String(format: "x: %5.2f, y: %5.2f, orientation: %3.0f, accuracy: %@", position.x, position.y, position.orientation, accuracy))
        
        let parameters = [
            "x": position.x,
            "y": position.y,
            "orientation": position.orientation
        ]
        Alamofire.request(.GET, "http://192.168.1.11", parameters: parameters)

        self.locationView.updatePosition(position)
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }

}
