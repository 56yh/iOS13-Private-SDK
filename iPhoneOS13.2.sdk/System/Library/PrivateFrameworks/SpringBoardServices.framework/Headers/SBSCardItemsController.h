//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/SBSCardItemsControllerRemoteInterface-Protocol.h>

@class NSString, NSXPCConnection;

@interface SBSCardItemsController : NSObject <SBSCardItemsControllerRemoteInterface>
{
    NSString *_identifier;
    NSXPCConnection *_connection;
    _Bool _connected;
}

- (void)_invalidateConnection;
- (void)_noteConnectionDropped;
- (void)_connectToServerIfNecessary;
- (id)_remoteInterfaceWithErrorHandler:(id /* block */)arg1;
- (void)getCardItemsWithHandler:(id /* block */)arg1;
- (void)setCardItems:(id)arg1;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

