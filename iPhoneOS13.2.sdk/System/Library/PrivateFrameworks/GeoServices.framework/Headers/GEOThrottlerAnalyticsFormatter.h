//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface GEOThrottlerAnalyticsFormatter : NSObject
{
    NSMutableDictionary *_throttlerAggregatedInfo;
}

+ (id)sharedThrottlerFormatter;
- (void)captureThrottledReqsForKeyPath:(id)arg1 maxReqCount:(id)arg2 policyTimeWindow:(double)arg3;
- (_Bool)hasInitialInfoForKeyPath:(id)arg1;
- (_Bool)hasThrottledInfoForKeyPath:(id)arg1;
- (void)addThrottledReqForKeyPath:(id)arg1 at:(id)arg2;
- (void)setRequestInfoForKeyPath:(id)arg1 at:(id)arg2 kind:(CDStruct_d1a7ebee)arg3 appId:(id)arg4;
- (int)throttleTypeForString:(id)arg1;
- (int)throttleModeForString:(id)arg1;
- (int)networkServiceForRequestKind:(CDStruct_d1a7ebee)arg1;
- (id)init;

@end

