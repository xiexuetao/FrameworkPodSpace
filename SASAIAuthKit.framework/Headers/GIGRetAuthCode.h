//
//  GIGRetAuthCode.h
//  sasaiSdk
//
//  Created by luke on 2019/9/5.
//  Copyright © 2019 luke. All rights reserved.
//
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@interface GIGRetAuthCode : NSObject
@property (nonatomic, strong)  NSString * code;
@property (nonatomic, strong)  NSString* state;
@end

NS_ASSUME_NONNULL_END
