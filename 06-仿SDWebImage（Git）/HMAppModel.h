//
//  HMAppModel.h
//  06-仿SDWebImage（Git）
//
//  Created by 宋得中 on 15/9/19.
//  Copyright © 2015年 宋得中. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HMAppModel : NSObject

@property (nonatomic, copy) NSString* icon;
@property (nonatomic, copy) NSString* name;
@property (nonatomic, copy) NSString* download;

- (instancetype)initWithDict:(NSDictionary*)dict;
+ (instancetype)modelWithDict:(NSDictionary*)dict;

+ (NSArray*)models;

@end
