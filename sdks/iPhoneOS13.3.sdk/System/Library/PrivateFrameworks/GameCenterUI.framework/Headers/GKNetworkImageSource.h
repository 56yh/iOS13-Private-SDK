//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKImageSource.h>

@class NSMutableDictionary;

@interface GKNetworkImageSource : GKImageSource
{
    NSMutableDictionary *_loadingGroups;
}

@property(retain, nonatomic) NSMutableDictionary *loadingGroups; // @synthesize loadingGroups=_loadingGroups;
// - (void).cxx_destruct;
- (void)loadImageForURLString:(id)arg1 loader:(id /* CDUnknownBlockType */)arg2 reference:(id)arg3 queue:(id)arg4 handler:(id /* CDUnknownBlockType */)arg5;
- (void)loadAndCacheAvatarFromGamedForURLString:(id)arg1 useUIImage:(BOOL)arg2 cacheSubdirectory:(id)arg3 reference:(id)arg4 queue:(id)arg5 handler:(id /* CDUnknownBlockType */)arg6;
- (void)loadImageForURLString:(id)arg1 reference:(id)arg2 queue:(id)arg3 handler:(id /* CDUnknownBlockType */)arg4;
- (BOOL)imageNeedsRefresh:(id)arg1;

@end

