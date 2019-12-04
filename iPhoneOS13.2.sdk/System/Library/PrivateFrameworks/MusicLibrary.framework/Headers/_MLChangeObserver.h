//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MusicLibrary/MLMediaLibraryAccountChangeObserver-Protocol.h>

@class MSVTaskAssertion, NSString, NSXPCConnection;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _MLChangeObserver : NSObject <MLMediaLibraryAccountChangeObserver>
{
    _Bool _timedOut;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    MSVTaskAssertion *_taskAssertion;
}

+ (id)observerWithConnection:(id)arg1;
@property(nonatomic, getter=hasTimedOut) _Bool timedOut; // @synthesize timedOut=_timedOut;
@property(retain, nonatomic) MSVTaskAssertion *taskAssertion; // @synthesize taskAssertion=_taskAssertion;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)tearDownTimeoutTimer;
- (void)setupTimeoutTimer;
- (void)tearDownTaskAssertion;
- (void)setupTaskAssertion;
@property(readonly, copy) NSString *description;
- (void)terminateForFailureToPerformDatabasePathChange;
- (void)emergencyDisconnectWithCompletion:(id /* block */)arg1;
- (void)performDatabasePathChange:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

