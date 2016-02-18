//
//  AudioPlayer.m
//  IndoorMap
//
//  Created by Cyril Agosta on 17/02/16.
//  Copyright © 2016 Estimote, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "AudioPlayer.h"
#import <AVFoundation/AVFoundation.h>
@implementation AudioPlayer : NSObject

- (void)start
{
    
    NSURL *url = [NSURL URLWithString:@"http://devimages.apple.com/iphone/samples/bipbop/bipbopall.m3u8"];
                  
                  // You may find a test stream at <http://devimages.apple.com/iphone/samples/bipbop/bipbopall.m3u8>.
                  
    //self.playerItem = [AVPlayerItem playerItemWithURL:url];
                  
                  //(optional) [playerItem addObserver:self forKeyPath:@"status" options:0 context:&ItemStatusContext];
                  
    //self.player = [AVPlayer playerWithPlayerItem:self.playerItem];
    
    
    self.player = [AVPlayer playerWithURL:url];
    [self.player play];
    //NSLog(@"Player created:%d", self.player.status);
    /*
    NSString *radioURL = @"http://devimages.apple.com/iphone/samples/bipbop/bipbopall.m3u8"; //this url must valid
    // http://192.168.1.45/hls-cdn/index.m3u8
    //
    AVPlayer *player = [[AVPlayer alloc]initWithURL:[NSURL URLWithString:radioURL]];


    self.songPlayer = player;    //self.songPlayer is a globle object of avplayer
    //[player addObserver:self forKeyPath:@"status" options:0 context:nil];
    
    NSLog(@"Player created:%d",[player currentItem].status);
    /*
    [[NSNotificationCenter defaultCenter] addObserver:self
                                             selector:@selector(playerItemDidReachEnd:)
                                                 name:AVPlayerItemDidPlayToEndTimeNotification
                                               object:[player currentItem]];
    [self.songPlayer addObserver:self forKeyPath:@"status" options:0 context:nil];
    

    [player play];
    
    NSLog(@"Player created:%d",player.status);
    //NSLog(@"Player created:%d",AVPlayerStatusFailed);
    //[player currentItem]
    /*
    while (player.status != AVPlayerStatusReadyToPlay) {
        
         NSLog(@" error => %@ ", [player.error userInfo] );
    }
     
    NSLog(@"ready");
   
    /*
     let streamURL = NSURL(string: "http://192.168.1.45/hls-cdn/index.m3u8");
     var audioPlayer = AVPlayer()
     audioPlayer = AVPlayer(URL: streamURL!)
     audioPlayer.play()
     NSNotificationCenter.defaultCenter().addObserver(self, selector: "playerItemDidReachEnd:", name: AVPlayerItemDidPlayToEndTimeNotification, object: audioPlayer.currentItem)
     audioPlayer.addObserver(self, forKeyPath: "status", options: NSKeyValueObservingOptions.New, context: nil)
    
    
    //NSLog(@"Hello, world, at %@", [NSCalendarDate calendarDate]);
     */
    
}



@end