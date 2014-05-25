//
//  LKAssetsCollection.h
//  LKAssetsLibrary
//
//  Created by Hiroshi Hashiguchi on 2014/05/22.
//  Copyright (c) 2014年 lakesoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LKAssetsCollectionEntry.h"
#import "LKAssetsCollectionGrouping.h"
#import "LKAssetsCollectionFilter.h"
#import "LKAssetsCollectionSorter.h"

@class LKAssetsGroup;
@interface LKAssetsCollection : NSObject

@property (nonatomic, strong, readonly) NSArray* entries;   // <LKAssetsCollectionEntry>
@property (nonatomic, strong, readonly) LKAssetsCollectionGrouping* grouping;

@property (nonatomic, strong) LKAssetsCollectionFilter* filter;
@property (nonatomic, strong) LKAssetsCollectionSorter* sorter;

+ (instancetype)assetsCollectionWithGroup:(LKAssetsGroup*)group grouping:(LKAssetsCollectionGrouping*)grouping;

@end
