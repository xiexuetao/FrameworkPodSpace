//
//  sasaiSdk.h
//  sasaiSdk
//
//  Created by luke on 2019/9/5.
//  Copyright © 2019 luke. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GIGRetAuthCode.h"
#import "GIGAppInfo.h"
/*
 1.0.0 版本 2019年9月12日 功能:包括SASAI授权登录功能
 */
#define GIGSASAISDKVER @"1.0.0"
#define GIGSasaiOAuthDef [GIGSasaiOAuth defaultManager]

typedef void (^GIGSasaiOAuthDefBlock)(int sasaiAuthstate,GIGRetAuthCode*authProfiles);
@interface GIGSasaiOAuth : NSObject
@property (strong, nonatomic) NSString * appId;
@property (copy, nonatomic) GIGSasaiOAuthDefBlock retBlock;
// 单例
+ (instancetype)defaultManager;
// 给到第三方APP，就只有这一个接口
-(NSString*)authorization:(void (^)(int sasaiAuthstate,GIGRetAuthCode * authProfiles))block;
// 设置返回的数据
-(void)sendAuthorizationData:(NSString*)authInfo;
@end
