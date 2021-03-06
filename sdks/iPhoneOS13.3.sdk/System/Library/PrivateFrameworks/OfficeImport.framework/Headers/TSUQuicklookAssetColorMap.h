//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface TSUQuicklookAssetColorMap : NSObject
{
    NSMutableDictionary *mAssetMap;
    NSString *mAppAssetPath;
}

+ (id)locatorForSageChartTextureSet:(id)arg1 image:(id)arg2;
+ (id)colorForResource:(id)arg1;
+ (BOOL)hasAppAssets;
+ (id)allocWithZone:(_NSZone )arg1;
+ (id)quicklookAssetMap;
@property(retain, nonatomic) NSString *appAssetPath; // @synthesize appAssetPath=mAppAssetPath;
@property(retain, nonatomic) NSMutableDictionary *assetMap; // @synthesize assetMap=mAssetMap;
- (id)autorelease;
- (oneway void)release;
- (NSUInteger)retainCount;
- (id)retain;
// - (id)copyWithZone:(_NSZone )arg1;

@end

