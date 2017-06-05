//
//  YKOriginalModel.h
//  kLineDemo
//
//  Created by nethanhan on 2017/5/26.
//  Copyright © 2017年 nethanhan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YKKLineModel.h"

@interface YKOriginalModel : NSObject

@property (nonatomic, strong) NSArray <NSArray *>* Data;
@property (nonatomic, copy) NSString *Code;
@property (nonatomic, copy) NSString *Name;

+ (NSArray <YKKLineModel *>*)getKLineModelArr;

@end
