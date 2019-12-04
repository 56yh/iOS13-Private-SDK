//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, NSDate, NSManagedObjectContext, NSManagedObjectID, NSString;
@protocol ICLegacyAttachment, ICLegacyFolder;

@protocol ICLegacyNote 
- (void)markForDeletion;
- (_Bool)isMarkedForDeletion;
- (void)setHtmlString:(NSString *)arg1;
- (id <ICLegacyAttachment>)createAttachmentWithName:(NSString *)arg1;
- (_Bool)isPlainText;
- (NSManagedObjectContext *)managedObjectContext;
- (NSManagedObjectID *)objectID;
- (NSArray *)attachments;
- (NSDate *)modificationDate;
- (NSDate *)creationDate;
- (NSString *)title;
- (NSString *)identifier;
- (id <ICLegacyFolder>)folder;
- (NSString *)htmlString;
@end

