//
//  DZWebOperation.h
//  DZWebImage
//
//  Created by 宋得中 on 15/9/21.
//  Copyright © 2015年 宋得中. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^finishBlock)(UIImage* image);
@interface DZWebOperation : NSOperation

@property (nonatomic, copy) NSString* url;
@property (nonatomic, copy) finishBlock block;

- (instancetype)initWithUrlStr:(NSString*)urlStr andBlock:(finishBlock)block;

@end
