//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CKDArchiveRecordsOperation : CKDDatabaseOperation
{
    id /* block */ _recordArchivedBlock;
    NSArray *_recordIDs;
}

@property(retain, nonatomic) NSArray *recordIDs; // @synthesize recordIDs=_recordIDs;
@property(copy, nonatomic) id /* block */ recordArchivedBlock; // @synthesize recordArchivedBlock=_recordArchivedBlock;
- (void)main;
- (void)_handleRecordArchived:(id)arg1 responseCode:(id)arg2;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

