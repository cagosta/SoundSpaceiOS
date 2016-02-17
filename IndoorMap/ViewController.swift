//
//  ViewController.swift
//  IndoorMap
//

import UIKit

class ViewController: UIViewController, EILIndoorLocationManagerDelegate {

    let locationManager = EILIndoorLocationManager()

    var location: EILLocation!

    @IBOutlet weak var locationView: EILIndoorLocationView!

    override func viewDidLoad() {
        super.viewDidLoad()

        // You can get them by adding your app on https://cloud.estimote.com/#/apps
        ESTConfig.setupAppID("soundspace-o3k", andAppToken: "9f572ccb81ddc5ce01e6c8745466ffe0")

        self.locationManager.delegate = self

        let locationBuilder: EILLocationBuilder = EILLocationBuilder()
        locationBuilder.setLocationBoundaryPoints([
            EILPoint(x:0, y:0),
            EILPoint(x:0, y:5),
            EILPoint(x:5, y:5),
            EILPoint(x:5, y:0)
        ])
        
        let iceBeaconPosition = EILOrientedPoint(x: 0, y: 0);
        let blueberryBeaconPosition = EILOrientedPoint(x: 0, y: 5);
        let mintBeaconPosition = EILOrientedPoint(x: 5, y: 5);
        let iceTwoBeaconPosition = EILOrientedPoint(x: 5, y: 0);
        locationBuilder.addBeaconWithIdentifier("B9407F30-F5F8-466E-AFF9-25556B57FE6D", withPosition: iceBeaconPosition)
        locationBuilder.addBeaconWithIdentifier("B9407F30-F5F8-466E-AFF9-25556B57FE6D", withPosition: blueberryBeaconPosition)
        locationBuilder.addBeaconWithIdentifier("B9407F30-F5F8-466E-AFF9-25556B57FE6D", withPosition: mintBeaconPosition)
        locationBuilder.addBeaconWithIdentifier("B9407F30-F5F8-466E-AFF9-25556B57FE6D", withPosition: iceTwoBeaconPosition)
        
        self.location = locationBuilder.build()
        self.locationView.showTrace = true
        self.locationView.rotateOnPositionUpdate = false
        
        self.locationView.drawLocation(location)
        self.locationManager.startPositionUpdatesForLocation(self.location)
        //locationBuilder.locationOrientation = 0

        // You will find the identifier on https://cloud.estimote.com/#/locations
        /*
        let fetchLocationRequest = EILRequestFetchLocation(locationIdentifier: "<#my-location#>")
        fetchLocationRequest.sendRequestWithCompletion { (location, error) in
            if let location = location {
                self.location = location

                // You can configure the location view to your liking:
                self.locationView.showTrace = true
                self.locationView.rotateOnPositionUpdate = false
                // Consult the full list of properties on:
                // http://estimote.github.io/iOS-Indoor-SDK/Classes/EILIndoorLocationView.html

                self.locationView.drawLocation(location)
                self.locationManager.startPositionUpdatesForLocation(self.location)
            } else {
                print("can't fetch location: \(error)")
            }
        }
        */
    }

    func indoorLocationManager(manager: EILIndoorLocationManager!, didFailToUpdatePositionWithError error: NSError!) {
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

        self.locationView.updatePosition(position)
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }

}
