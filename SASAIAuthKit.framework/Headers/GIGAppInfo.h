//
//  GIGAppInfo.h
//  sasaiSdk
//
//  Created by luke on 2019/9/5.
//  Copyright © 2019 luke. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface GIGAppInfo : NSObject
//DeviceUtils.h中定义
#pragma mark - About App Config Info Method
/**
 *  获取当前App的版本号信息
 */
+ (NSString *)getAppVersion;

/**
 *  获取当前App的build版本号信息
 */
+ (NSString *)getAppBuildVersion;

/**
 *  获取当前App的包名信息
 */
+ (NSString *)getAppBundleId;

/**
 *  获取当前App的名称信息
 */
+ (NSString *)getAppDisplayName;

/*
 * 获取URL返回的URLURLSchemes
 */

+(NSString*)getthirdURLSchemes;


// 获取Get参数
+ (NSString *)getParamByName:(NSString *)name URLString:(NSString *)url;

@end

NS_ASSUME_NONNULL_END
