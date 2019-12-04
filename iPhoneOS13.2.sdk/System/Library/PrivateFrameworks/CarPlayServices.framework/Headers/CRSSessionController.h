//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarPlayServices/CRSSessionServerToClientInterface-Protocol.h>

@class BSServiceConnection, NSString, RBSProcessHandle;

@interface CRSSessionController : NSObject <CRSSessionServerToClientInterface>
{
    struct os_unfair_lock_s _lock;
    _Bool _lock_invalidated;
    RBSProcessHandle *_process;
    BSServiceConnection *_connection;
}

@property(retain, nonatomic) BSServiceConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) RBSProcessHandle *process; // @synthesize process=_process;
- (void)invalidate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

