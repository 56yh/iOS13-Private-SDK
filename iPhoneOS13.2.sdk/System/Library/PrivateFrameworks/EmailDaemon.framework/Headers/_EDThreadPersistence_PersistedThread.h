//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EDMessagePersistence, EMThread, EMThreadObjectID, NSArray, _EDThreadPersistence_SQLHelper, _EDThreadPersistence_ThreadMessages;

@interface _EDThreadPersistence_PersistedThread : NSObject
{
    _Bool _didCreateTempMessagesView;
    _EDThreadPersistence_ThreadMessages *_messages;
    long long _threadDatabaseID;
    _EDThreadPersistence_SQLHelper *_sqlHelper;
}

@property(readonly, nonatomic) _EDThreadPersistence_SQLHelper *sqlHelper; // @synthesize sqlHelper=_sqlHelper;
@property(readonly, nonatomic) long long threadDatabaseID; // @synthesize threadDatabaseID=_threadDatabaseID;
@property(readonly, nonatomic) _EDThreadPersistence_ThreadMessages *messages; // @synthesize messages=_messages;
- (void)dropTemporaryView;
- (void)_ensureTempMessagesView;
- (_Bool)addRecipients:(id)arg1 ofType:(unsigned long long)arg2;
- (id)recipientDatabaseIDsAndDatesForRecipientType:(unsigned long long)arg1;
- (_Bool)addRecipientsForType:(unsigned long long)arg1;
- (_Bool)setPriorityForDisplayMessageSender;
- (_Bool)addSenders:(id)arg1;
- (id)senderDatabaseIDsAndDates;
- (_Bool)addSenders;
- (id)_mailboxDatabaseIDsForWrappedMessages;
- (_Bool)addMailboxes;
- (void)addKeyPathsForDisplayMessageChangeToKeyPaths:(id)arg1;
- (_Bool)updateDisplayMessageWithUnreadWrappedMessages:(id)arg1;
- (_Bool)updateNewestReadMessage:(id)arg1;
- (id)updateNewestReadAndDisplayMessage;
@property(readonly, nonatomic) EMThread *thread;
@property(readonly, nonatomic) NSArray *wrappedMessages;
@property(readonly, nonatomic) EMThreadObjectID *threadObjectID;
@property(readonly, nonatomic) long long threadScopeDatabaseID;
@property(readonly, nonatomic) EDMessagePersistence *messagePersistence;
- (id)debugDescription;
- (id)initWithMessages:(id)arg1 threadDatabaseID:(long long)arg2;

@end

