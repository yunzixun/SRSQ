//
//  QNTokenHelper.h
//  TestDemo
//
//  Created by 小菜 on 17/2/23.
//  Copyright © 2017年 蔡凌云. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface QNTokenHelper : NSObject

+ (instancetype)shared;
- (NSString *)token;
@end
