//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CompanionSync/SYIncomingFullSyncSession.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SYIncomingSyncAllObjectsSession : SYIncomingFullSyncSession
{
    NSMutableArray *_allObjectsAsData;
    id /* block */ _completion;
    _Bool canRestart;
    _Bool canRollback;
}

- (void)setCanRollback:(_Bool)arg1;
- (_Bool)canRollback;
- (void)setCanRestart:(_Bool)arg1;
- (_Bool)canRestart;
- (void)_continueProcessing;
- (void)_sendEndSessionResponse:(id)arg1;
- (id)initWithService:(id)arg1 message:(id)arg2 completion:(id /* block */)arg3;

@end

