//
//  UBiXMGromoreAdapter.h
//  UBiXMGromoreAdapter
//
//  Created by guoqiang.zhu on 2024/7/4.
//  Copyright © 2024 UBiX. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UBiXMGromoreAdapter : NSObject

@property (nonatomic, strong) NSDictionary *configParam;

+ (instancetype)defaultAdapter;

@end

//! Project version number for UBiXMGromoreAdapter.
FOUNDATION_EXPORT double UBiXMGromoreAdapterVersionNumber;

//! Project version string for UBiXMGromoreAdapter.
FOUNDATION_EXPORT const unsigned char UBiXMGromoreAdapterVersionString[];

// In this header, you should import all the public headers of your framework using statements like


