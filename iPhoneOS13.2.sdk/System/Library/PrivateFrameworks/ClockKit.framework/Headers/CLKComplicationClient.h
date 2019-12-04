//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClockKit/CLKComplicationDataSource-Protocol.h>
#import <ClockKit/CLKComplicationServer-Protocol.h>

@class NSHashTable, NSLock, NSNumber, NSSet, NSString, NSXPCConnection;
@protocol CLKComplicationClientDelegate;

@interface CLKComplicationClient : NSObject <CLKComplicationServer, CLKComplicationDataSource>
{
    NSXPCConnection *_connection;
    NSHashTable *_invalidationObservers;
    NSLock *_invalidationObserversLock;
    _Bool _invalidated;
    NSString *_clientIdentifier;
    NSString *_clientBundlePath;
    NSNumber *_pid;
    id <CLKComplicationClientDelegate> _delegate;
    NSSet *_activeComplications;
    id /* block */ _checkinHandler;
    id /* block */ _invalidationHandler;
}

@property(copy, nonatomic) id /* block */ invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) id /* block */ checkinHandler; // @synthesize checkinHandler=_checkinHandler;
@property(copy, nonatomic) NSSet *activeComplications; // @synthesize activeComplications=_activeComplications;
@property(nonatomic) __weak id <CLKComplicationClientDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSNumber *pid; // @synthesize pid=_pid;
@property(readonly, nonatomic) NSString *clientBundlePath; // @synthesize clientBundlePath=_clientBundlePath;
@property(readonly, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
- (void)getLocalizableSampleTemplateForComplication:(id)arg1 withHandler:(id /* block */)arg2;
- (void)requestedUpdateBudgetExhausted;
- (void)requestedUpdateDidBegin;
- (void)getNextRequestedUpdateDateWithHandler:(id /* block */)arg1;
- (void)getTimelineEntriesForComplication:(id)arg1 afterDate:(id)arg2 limit:(unsigned long long)arg3 withHandler:(id /* block */)arg4;
- (void)getTimelineEntriesForComplication:(id)arg1 beforeDate:(id)arg2 limit:(unsigned long long)arg3 withHandler:(id /* block */)arg4;
- (void)getCurrentTimelineEntryForComplication:(id)arg1 withHandler:(id /* block */)arg2;
- (void)getTimelineAnimationBehaviorForComplication:(id)arg1 withHandler:(id /* block */)arg2;
- (void)getAlwaysOnTemplateForComplication:(id)arg1 withHandler:(id /* block */)arg2;
- (void)getPrivacyBehaviorForComplication:(id)arg1 withHandler:(id /* block */)arg2;
- (void)getTimelineEndDateForComplication:(id)arg1 withHandler:(id /* block */)arg2;
- (void)getTimelineStartDateForComplication:(id)arg1 withHandler:(id /* block */)arg2;
- (void)getSupportedTimeTravelDirectionsForComplication:(id)arg1 withHandler:(id /* block */)arg2;
- (void)extendTimelineForComplication:(id)arg1;
- (void)reloadTimelineForComplication:(id)arg1;
- (void)checkinWithClientIdentifier:(id)arg1 bundlePath:(id)arg2;
- (void)_handleConnectionInvalidated;
- (void)invalidate;
- (void)removeInvalidationObserver:(id)arg1;
- (void)addInvalidationObserver:(id)arg1;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

