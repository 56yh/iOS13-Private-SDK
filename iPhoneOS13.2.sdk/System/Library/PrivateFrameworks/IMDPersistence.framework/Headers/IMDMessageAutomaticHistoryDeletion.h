//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMDMessageAutomaticHistoryDeletion : NSObject
{
}

+ (_Bool)isOlderThanDays:(long long)arg1 fromDate:(id)arg2;
+ (_Bool)isDirCreationDateAtPath:(id)arg1 olderThanDays:(long long)arg2;
+ (_Bool)isFileHeaderDateAtPath:(id)arg1 olderThanDays:(long long)arg2;
+ (_Bool)isFileAtDirPath:(id)arg1 olderThanDays:(long long)arg2;
+ (void)deleteDirectoryAtPath:(id)arg1;
+ (void)deleteSpolightArchivedFilesAfterDays:(long long)arg1;
+ (void)cleanDatabase;
+ (void)deleteMessagesAndAttachmentsAfterDays:(long long)arg1;
+ (void)cleanUpOrphanAttachments;
+ (id)_getFilePathNotDSStore:(id)arg1;
+ (id)_getiChatFileMetadataForPath:(id)arg1;
+ (id)_getDirSubDirURLsForDirPath:(id)arg1 error:(id *)arg2;
+ (id)_getPathAttributesForPath:(id)arg1;

@end

