//
//  EMMANativeAd.h
//  eMMa
//
//  Created by Ivan Aguila Garrofe on 4/7/17.
//  Copyright © 2017 moddity. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EMMACampaign.h"

@interface EMMANativeAd : EMMACampaign

@property BOOL openInSafari;
@property (nonatomic, strong) NSString * nativeAdTemplateId;
@property (nonatomic, strong) NSDictionary * nativeAdContent;

-(BOOL) parseResponseInfo: (NSDictionary*) responseDict;
-(NSString*) getField: (NSString *) fieldKey;

@end
