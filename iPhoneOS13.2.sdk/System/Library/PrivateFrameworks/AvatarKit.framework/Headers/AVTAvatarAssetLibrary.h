//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface AVTAvatarAssetLibrary : NSObject
{
    NSMutableArray *_assets[28];
    NSMutableDictionary *_assetsByName[28];
}

+ (id)sharedAvatarAssetLibrary;
- (id)assetWithType:(long long)arg1 identifier:(id)arg2;
- (id)assetsWithType:(long long)arg1;
- (void)reload;

@end

