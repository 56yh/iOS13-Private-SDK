//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDictionary;
@protocol ECMailAccount, ECMailbox, ECMessage, EDPBHasher;

@protocol EDPBDataSetters

@optional
- (void)withHasher:(id <EDPBHasher>)arg1 setConversationID:(long long)arg2 data:(NSDictionary *)arg3;
- (void)withHasher:(id <EDPBHasher>)arg1 setMessage:(id <ECMessage>)arg2 mailboxType:(long long)arg3;
- (void)withHasher:(id <EDPBHasher>)arg1 setMessage:(id <ECMessage>)arg2 mailbox:(id <ECMailbox>)arg3;
- (void)withHasher:(id <EDPBHasher>)arg1 setMessage:(id <ECMessage>)arg2 data:(NSDictionary *)arg3;
- (void)withHasher:(id <EDPBHasher>)arg1 setDataFromMessage:(id <ECMessage>)arg2;
- (void)withHasher:(id <EDPBHasher>)arg1 setDataFromMessage:(id <ECMessage>)arg2 account:(id <ECMailAccount>)arg3;
@end

