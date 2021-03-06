//
//  PNBackgroundAppDelegate.h
//  pubnub
//
//  Created by Valentin Tuller on 9/24/13.
//  Copyright (c) 2013 PubNub Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

@interface PNBackgroundAppDelegate : UIResponder <UIApplicationDelegate, PNDelegate, CLLocationManagerDelegate> {
	CLLocationManager *locationManager;
	int currentInterval;
	int countNewMessage;
	BOOL isWillRestoreSubscriptionOnChannelsDelegate;
	BOOL isDidRestoreSubscriptionOnChannelsDelegate;
	int countSession;
	NSString *wiFiOnUrl;
	PNChannel *pnChannel;
	int countMessageSend;
	int countSubscribred;

	NSMutableArray *subscribedChannelNames;
	NSString *lastClientIdentifier;
}

#pragma mark Properties

@property (nonatomic, strong) UIWindow *window;
@property NSString *lastTimeToken;
@property NSString *lastClientIdentifier;

#pragma mark -


@end
