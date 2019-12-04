//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BRCAccountSession, BRCAppLibrary, BRCItemID, NSMutableIndexSet, brc_task_tracker;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface BRCTreeEnumerator : NSObject
{
    BRCAccountSession *_session;
    id /* block */ _handler;
    BRCItemID *_parentID;
    BRCAppLibrary *_appLibrary;
    unsigned long long _rowID;
    NSMutableIndexSet *_seen;
    NSMutableIndexSet *_toVisit;
    brc_task_tracker *_tracker;
    NSObject<OS_dispatch_group> *_group;
    id _strongSelf;
    _Bool _isCancelled;
    id /* block */ _completionHandler;
}

@property(copy, nonatomic) id /* block */ completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)_iterate:(unsigned long long)arg1;
- (unsigned long long)__iterate:(unsigned long long)arg1;
- (_Bool)_visitNewParent;
- (void)_scheduleAsync;
- (_Bool)finishIfCancelled;
- (void)enumerateBelow:(id)arg1 appLibrary:(id)arg2 handler:(id /* block */)arg3;
- (void)_doneWithError:(id)arg1;
- (void)cancel;
- (id)initWithSession:(id)arg1 group:(id)arg2;
- (id)initWithSession:(id)arg1 tracker:(id)arg2;
- (id)initWithSession:(id)arg1;

@end

