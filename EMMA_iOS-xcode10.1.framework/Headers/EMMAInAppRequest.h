//
//  EMMAInAppRequest.h
//  eMMa
//
//  Created by Adrian Carrera on 3/7/17.
//  Copyright © 2017 moddity. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EMMAInAppRequest : NSObject

@property (nonatomic, strong) NSString *label;
@property (nonatomic, strong) NSString *inAppMessageId;

@property (nonatomic, strong) NSString *nativeAdTemplateId __deprecated_msg("Use EMMANativeAdRequest instead.");

@end
