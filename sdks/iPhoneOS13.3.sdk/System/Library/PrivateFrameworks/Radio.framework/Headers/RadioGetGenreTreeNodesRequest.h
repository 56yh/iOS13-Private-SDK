//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Radio/RadioRequest.h>

@class SSMetricsConfiguration, SSMetricsPageEvent, SSURLConnectionRequest;

@interface RadioGetGenreTreeNodesRequest : RadioRequest
{
    NSUInteger _parentNodeID;
    SSURLConnectionRequest *_request;
    SSMetricsConfiguration *_metricsConfiguration;
    SSMetricsPageEvent *_metricsPageEvent;
}

+ (id)responseContentKey;
+ (id)requestBagKey;
+ (id)fallbackRequestPath;
+ (id)cacheKeyForGenreWithNodeID:(NSUInteger)arg1;
@property(readonly, copy, nonatomic) SSMetricsPageEvent *metricsPageEvent; // @synthesize metricsPageEvent=_metricsPageEvent;
@property(readonly, retain, nonatomic) SSMetricsConfiguration *metricsConfiguration; // @synthesize metricsConfiguration=_metricsConfiguration;
// - (void).cxx_destruct;
- (id)_genreTreeByApplyingResponse:(id)arg1;
- (void)startWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)startWithCachedCompletionHandler:(id /* CDUnknownBlockType */)arg1 networkCompletionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)initWithParentNodeID:(NSUInteger)arg1;
- (id)init;

@end

