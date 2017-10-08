//
//  EMMAConfiguration.h
//  eMMa
//
//  Created by Ivan Aguila Garrofe on 24/7/17.
//  Copyright © 2017 moddity. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EMMADefines.h"

@import UserNotifications;

@interface EMMAConfiguration : NSObject

@property (nonatomic, strong) NSString* sessionKey;
@property BOOL debugEnabled;
@property int queueTime;
@property (nonatomic, strong) NSString* urlBase;
@property (nonatomic, strong) NSDictionary* pushLaunchOptions;
@property (nonatomic, assign) id<EMMAPushDelegate> pushDelegate;
@property (nonatomic, assign) id<UNUserNotificationCenterDelegate> pushNotificationsDelegate;

-(id) initWithSessionKey:(NSString*) sessionKey;

@end
