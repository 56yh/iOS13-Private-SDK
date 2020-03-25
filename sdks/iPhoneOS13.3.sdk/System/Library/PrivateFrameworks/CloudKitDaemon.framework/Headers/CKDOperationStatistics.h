//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class CKDOperationMetrics, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CKDOperationStatistics : NSObject <NSCopying>
{
    NSString *_operationClassName;
    NSMutableDictionary *_recentErrorsByDate;
    NSUInteger _operationCount;
    CKDOperationMetrics *_aggregateCKMetrics;
    CKDOperationMetrics *_aggregateMMCSMetrics;
}

@property(readonly, nonatomic) CKDOperationMetrics *aggregateMMCSMetrics; // @synthesize aggregateMMCSMetrics=_aggregateMMCSMetrics;
@property(readonly, nonatomic) CKDOperationMetrics *aggregateCKMetrics; // @synthesize aggregateCKMetrics=_aggregateCKMetrics;
@property(readonly) NSUInteger operationCount; // @synthesize operationCount=_operationCount;
@property(readonly, nonatomic) NSMutableDictionary *recentErrorsByDate; // @synthesize recentErrorsByDate=_recentErrorsByDate;
@property(readonly, nonatomic) NSString *operationClassName; // @synthesize operationClassName=_operationClassName;
// - (void).cxx_destruct;
- (id)CKStatusReportArray;
- (void)merge:(id)arg1;
- (void)addOperation:(id)arg1;
- (id)_trimmedError:(id)arg1;
- (void)_addMetrics:(id)arg1 toAggregate:(id)arg2;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithOperationClassName:(id)arg1;

@end
