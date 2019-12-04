//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLSAssetsBeautifier, CLSSimilarStacker;

@interface PGKeyCurator : NSObject
{
    CLSAssetsBeautifier *_beautifier;
    CLSSimilarStacker *_similarStacker;
}

- (id)bestItemInItems:(id)arg1 options:(id)arg2 criteria:(id)arg3 minimumCriteriaScore:(double)arg4;
- (_Bool)cluster:(id)arg1 isBetterThanCluster:(id)arg2;
- (_Bool)cluster:(id)arg1 scoresBetterThanCluster:(id)arg2;
- (_Bool)scoreLevelOfCluster:(id)arg1 isAboveScoreLevelOfCluster:(id)arg2;
- (id)clusterWithSubclusters:(id)arg1 keyItem:(id)arg2;
- (_Bool)item:(id)arg1 passesCriteria:(id)arg2 score:(double *)arg3;
- (id)_keyItemWithFeeder:(id)arg1 options:(id)arg2 criteria:(id)arg3 debugInfo:(id)arg4 progressBlock:(id /* block */)arg5;
- (id)bestItemIdentifierWithItems:(id)arg1 options:(id)arg2 debugInfo:(out id *)arg3 criteria:(id)arg4 curationOptions:(id)arg5;
- (id)keyItemIdentifierWithItems:(id)arg1 options:(id)arg2 debugInfo:(out id *)arg3;
- (id)keyItemWithFeeder:(id)arg1 options:(id)arg2 criteria:(id)arg3 debugInfo:(id)arg4 progressBlock:(id /* block */)arg5;
- (id)init;

@end

