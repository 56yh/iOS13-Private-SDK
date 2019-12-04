//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EmailDaemon/EDSearchableIndexPersistence.h>

#import <Message/EFLoggable-Protocol.h>

@class NSString;

@interface MFSearchableIndexPersistence_iOS : EDSearchableIndexPersistence <EFLoggable>
{
}

+ (id)searchableIndexItemsFromMessages:(id)arg1 type:(long long)arg2;
+ (id)log;
- (id)verificationDataSamplesFromMessageIDTransactionIDDictionary:(id)arg1;
- (id)_verificationDataFromMessage:(id)arg1 messageIDTransactionIDDictionary:(id)arg2;
- (void)attachmentItemMetadataForAttachmentID:(id)arg1 messagePersistentID:(id)arg2 name:(id)arg3 result:(id /* block */)arg4;
- (id)searchableIndexItemsFromMessages:(id)arg1 type:(long long)arg2;
- (id)messagesWhere:(id)arg1 sortedBy:(id)arg2 limit:(long long)arg3;
- (id)messagesRowIDWhereSubClause;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

