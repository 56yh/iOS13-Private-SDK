//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VCRateControlBandwidthEstimatorMap : NSObject
{
    unsigned int _mode;
    unsigned int _radioAccessTechnology;
    double _estimatedBandwidth;
    double _estimatedBandwidthUncapped;
    NSMutableDictionary *_estimatorMap;
    unsigned int _currentActiveEstimatorID;
    int _state;
}

@property(nonatomic) double estimatedBandwidthUncapped; // @synthesize estimatedBandwidthUncapped=_estimatedBandwidthUncapped;
@property(nonatomic) unsigned int mode; // @synthesize mode=_mode;
@property(nonatomic) unsigned int radioAccessTechnology; // @synthesize radioAccessTechnology=_radioAccessTechnology;
@property(nonatomic) double estimatedBandwidth; // @synthesize estimatedBandwidth=_estimatedBandwidth;
- (void)deregisterBandwidthEstimatorWithID:(unsigned int)arg1;
- (id)bandwidthEstimatorWithID:(unsigned int)arg1 isProbingSequence:(_Bool)arg2 isEndOfProbingSequence:(_Bool)arg3;
- (void)dealloc;
- (id)init;

@end

