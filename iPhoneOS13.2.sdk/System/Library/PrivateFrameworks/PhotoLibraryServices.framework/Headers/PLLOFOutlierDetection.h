//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLLOFOutlierDetection : NSObject
{
    _Bool _filterZeroDistanceDataset;
    unsigned long long _k;
}

@property(nonatomic) _Bool filterZeroDistanceDataset; // @synthesize filterZeroDistanceDataset=_filterZeroDistanceDataset;
@property(nonatomic) unsigned long long k; // @synthesize k=_k;
- (id)lofScoresWithDataset:(id)arg1 distanceBlock:(id /* block */)arg2;
- (void)freeDistancesMatrix:(double **)arg1 forDataset:(id)arg2;
- (double **)createDistancesMatrixForDataset:(id)arg1 distanceBlock:(id /* block */)arg2;
- (id)createKNNMatrixWithDistanceMatrix:(double **)arg1 size:(unsigned long long)arg2;
- (id)filteredObjectsWithDataset:(id)arg1 distanceBlock:(id /* block */)arg2;
- (id)init;

@end

