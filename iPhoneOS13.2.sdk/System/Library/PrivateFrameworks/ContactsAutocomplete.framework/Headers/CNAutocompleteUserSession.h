//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNAutocompleteFetchRequest, CNAutocompleteUsageMonitor, NSDate, _CNAutocompleteUserSessionDisplayedResults;
@protocol CNAutocompleteProbeProvider, CNFuture, OS_dispatch_queue;

@interface CNAutocompleteUserSession : NSObject
{
    id <CNAutocompleteProbeProvider> _probeProvider;
    CNAutocompleteFetchRequest *_currentRequest;
    unsigned long long _currentBatch;
    _CNAutocompleteUserSessionDisplayedResults *_lastDisplayedResults;
    NSDate *_requestStartTime;
    CNAutocompleteUsageMonitor *_usageMonitor;
    NSObject<OS_dispatch_queue> *_syncQueue;
    id <CNFuture> _duetResultsFuture;
}

@property(retain, nonatomic) id <CNFuture> duetResultsFuture; // @synthesize duetResultsFuture=_duetResultsFuture;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property(retain, nonatomic) CNAutocompleteUsageMonitor *usageMonitor; // @synthesize usageMonitor=_usageMonitor;
@property(retain, nonatomic) NSDate *requestStartTime; // @synthesize requestStartTime=_requestStartTime;
@property(retain, nonatomic) _CNAutocompleteUserSessionDisplayedResults *lastDisplayedResults; // @synthesize lastDisplayedResults=_lastDisplayedResults;
@property(nonatomic) unsigned long long currentBatch; // @synthesize currentBatch=_currentBatch;
@property(retain, nonatomic) CNAutocompleteFetchRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(readonly, nonatomic) id <CNAutocompleteProbeProvider> probeProvider; // @synthesize probeProvider=_probeProvider;
- (void)_resetState;
- (void)didSelectResult:(id)arg1 atSortedIndex:(unsigned long long)arg2;
- (void)didReceiveResults:(id)arg1 forRequest:(id)arg2;
- (void)willStartExecutingRequest:(id)arg1;
- (void)willStartDuetRequestWithMatchingResultsFuture:(id)arg1;
- (id)initWithProbeProvider:(id)arg1;

@end

