//
//  AlicloudUpdate.h
//  AlicloudUpdate
//
//  Created by 魏晓堃 on 2019/9/11.
//  Copyright © 2019 魏晓堃. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AlicloudUpdateCenter.h"

////! Project version number for AlicloudUpate.
//FOUNDATION_EXPORT double AlicloudUpateVersionNumber;
//
////! Project version string for AlicloudUpate.
//FOUNDATION_EXPORT const unsigned char AlicloudUpateVersionString[];
//
//// In this header, you should import all the public headers of your framework using statements like #import <AlicloudUpate/PublicHeader.h>
//
//

#define ALICLOUDUPDATE_VERSION @"1.0.0.2"

NS_ASSUME_NONNULL_BEGIN

@interface AlicloudUpdate : NSObject

+ (void)autoInit;

+ (void)checkAndUpdateNewVersion;

@end

NS_ASSUME_NONNULL_END
