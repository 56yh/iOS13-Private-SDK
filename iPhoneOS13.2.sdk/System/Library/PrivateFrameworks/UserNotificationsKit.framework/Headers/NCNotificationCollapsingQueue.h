//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface NCNotificationCollapsingQueue : NSObject
{
    unsigned long long _collapsingThreshold;
    NSMutableArray *_requests;
}

@property(retain, nonatomic) NSMutableArray *requests; // @synthesize requests=_requests;
@property(nonatomic) unsigned long long collapsingThreshold; // @synthesize collapsingThreshold=_collapsingThreshold;
- (id)_collapsedNotificationRequestForNotificationRequest:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_collapsedNotificationRequestFromCollapsibleRequests:(id)arg1;
- (unsigned long long)_collapsedCountForCollapsibleRequests:(id)arg1;
- (id)_requestsCollapsibleWithNotificationRequest:(id)arg1;
- (unsigned long long)_indexOfRequestMatchingNotificationRequest:(id)arg1;
- (void)_insertPreemptingNotificationRequest:(id)arg1;
- (id)notificationRequestsCoalescebleWithCoalescedRequest:(id)arg1;
- (id)peekNextNotificationRequestPassingTest:(id /* block */)arg1;
- (id)peekNextNotificationRequest;
- (_Bool)containsNotificationRequestMatchingRequest:(id)arg1;
- (_Bool)containsNotificationRequest:(id)arg1;
- (void)removeNotificationRequest:(id)arg1;
- (void)replaceNotificationRequest:(id)arg1;
- (void)addNotificationRequest:(id)arg1;
@property(readonly, nonatomic) NSArray *enqueuedRequestIdentifiers;
@property(readonly, nonatomic) unsigned long long count;
- (id)init;

@end

