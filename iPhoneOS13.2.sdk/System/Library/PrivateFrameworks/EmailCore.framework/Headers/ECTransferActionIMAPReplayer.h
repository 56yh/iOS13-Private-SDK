//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EmailCore/ECTransferActionReplayer.h>

#import <EmailCore/ECIMAPLocalActionReplayer-Protocol.h>
#import <EmailCore/ECTransferActionReplayerSubclassMethods-Protocol.h>

@class NSString;
@protocol ECIMAPLocalActionReplayerDelegate, ECIMAPServerInterface;

@interface ECTransferActionIMAPReplayer : ECTransferActionReplayer <ECTransferActionReplayerSubclassMethods, ECIMAPLocalActionReplayer>
{
    id <ECIMAPServerInterface> serverInterface;
    id <ECIMAPLocalActionReplayerDelegate> delegate;
}

@property(nonatomic) __weak id <ECIMAPLocalActionReplayerDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) id <ECIMAPServerInterface> serverInterface; // @synthesize serverInterface;
- (id)appendItem:(id)arg1 mailboxURL:(id)arg2;
- (_Bool)isRecoverableError:(id)arg1;
- (_Bool)downloadFailed;
- (id)fetchBodyDataForRemoteID:(id)arg1 mailboxURL:(id)arg2;
- (_Bool)deleteSourceMessagesFromTransferItems:(id)arg1;
- (id)_transferItems:(id)arg1 destinationMailboxURL:(id)arg2 isMove:(_Bool)arg3;
- (id)copyItems:(id)arg1 destinationMailboxURL:(id)arg2;
- (id)moveItems:(id)arg1 destinationMailboxURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

