//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MusicLibrary/MLMediaLibraryAccountChangeObserver-Protocol.h>
#import <MusicLibrary/MLMediaLibraryResourcesServiceProtocol-Protocol.h>

@class NSOperationQueue, NSString, NSXPCConnection;
@protocol MLMediaLibraryAccountChangeObserver, OS_dispatch_queue;

@interface MLMediaLibraryResourcesServiceClient : NSObject <MLMediaLibraryAccountChangeObserver, MLMediaLibraryResourcesServiceProtocol>
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSXPCConnection *_xpcClientConnection;
    id <MLMediaLibraryAccountChangeObserver> _accountChangeObserver;
    NSOperationQueue *_accountChangeOperationQueue;
}

+ (id)sharedService;
@property(retain, nonatomic) NSOperationQueue *accountChangeOperationQueue; // @synthesize accountChangeOperationQueue=_accountChangeOperationQueue;
@property(retain, nonatomic) id <MLMediaLibraryAccountChangeObserver> accountChangeObserver; // @synthesize accountChangeObserver=_accountChangeObserver;
@property(retain, nonatomic) NSXPCConnection *xpcClientConnection; // @synthesize xpcClientConnection=_xpcClientConnection;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue; // @synthesize calloutQueue=_calloutQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
- (id)connectionWithListenerEndpoint:(id)arg1;
- (void)terminateForFailureToPerformDatabasePathChange;
- (void)emergencyDisconnectWithCompletion:(id /* block */)arg1;
- (void)performDatabasePathChange:(id)arg1 completion:(id /* block */)arg2;
- (id)_libraryContainerPathWithError:(id *)arg1;
- (id)_initWithAccountChangeObserver:(id)arg1;
- (id)libraryContainerPathWithError:(id *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

