//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PXAssetAnalyzer : NSObject
{
    NSMutableDictionary *_analyzerUUIDToRequest;
}

// - (void).cxx_destruct;
- (id)_keyForAssetUUID:(id)arg1 forWorkerType:(long long)arg2;
- (void)_handleResultForRequest:(id)arg1 success:(BOOL)arg2;
- (void)analyzeAsset:(id)arg1 forWorkerType:(long long)arg2;
- (BOOL)canAnalyzeAsset:(id)arg1 forWorkerType:(long long)arg2;
- (id)init;

@end

