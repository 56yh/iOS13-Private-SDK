//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MetricsKit/MTMediaPlaylist-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface MTHLSVideoPlaylist : NSObject <MTMediaPlaylist>
{
    unsigned long long _startPosition;
    NSMutableArray *_rollItems;
    NSArray *_mainFeatureMetricsData;
}

@property(retain, nonatomic) NSArray *mainFeatureMetricsData; // @synthesize mainFeatureMetricsData=_mainFeatureMetricsData;
@property(retain, nonatomic) NSMutableArray *rollItems; // @synthesize rollItems=_rollItems;
@property(nonatomic) unsigned long long startPosition; // @synthesize startPosition=_startPosition;
- (long long)indexOfLastRollItemWithStartBeforePosition:(unsigned long long)arg1;
- (id)mainFeatureItemWithStartOverallPosition:(unsigned long long)arg1;
- (void)addRollItem:(id)arg1;
- (id)itemsBetweenStartOverallPosition:(unsigned long long)arg1 endOverallPosition:(unsigned long long)arg2;
- (id)itemAtOverallPosition:(unsigned long long)arg1 rangeOptions:(long long)arg2;
- (void)addRollItemWithStartOverallPosition:(unsigned long long)arg1 duration:(unsigned long long)arg2 metricsData:(id)arg3;
- (void)addRollInfoItem:(id)arg1;
- (void)addRollInfoItems:(id)arg1;
- (id)initWithMainFeatureMetricsData:(id)arg1;
- (id)initWithStartPosition:(unsigned long long)arg1 mainFeatureMetricsData:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSArray *eventData;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

