//
//  ShopPhotoModel.h
//  baobei
//
//  Created by 张源海 on 16/7/10.
//  Copyright © 2016年 he_shao_hu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVOSCloud/AVOSCloud.h>

@interface ShopPhotoModel : NSObject
@property (nonatomic, strong) AVObject *avObject;
@property (nonatomic, strong) NSString *objectIdl;
@property  (nonatomic, strong) NSString *Photos;

- (instancetype)initWithObject:(AVObject *)object;
@end
