//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ReminderKit/CRDocument.h>

@class NSMutableArray, TTCRVectorMultiTimestamp;

@interface CRTTCompatibleDocument : CRDocument
{
    TTCRVectorMultiTimestamp *_sharedTopotextTimestamp;
    NSMutableArray *_stringsWithClocksNeedingUpdating;
    NSMutableArray *_stringsWithClocksToResetAfterRealizingLocalChanges;
}

@property(retain, nonatomic) NSMutableArray *stringsWithClocksToResetAfterRealizingLocalChanges; // @synthesize stringsWithClocksToResetAfterRealizingLocalChanges=_stringsWithClocksToResetAfterRealizingLocalChanges;
@property(retain, nonatomic) NSMutableArray *stringsWithClocksNeedingUpdating; // @synthesize stringsWithClocksNeedingUpdating=_stringsWithClocksNeedingUpdating;
@property(retain, nonatomic) TTCRVectorMultiTimestamp *sharedTopotextTimestamp; // @synthesize sharedTopotextTimestamp=_sharedTopotextTimestamp;
- (void)realizeLocalChanges;
- (void)mergeTimestampWithDocument:(id)arg1;
- (unsigned long long)mergeResultForMergingWithDocument:(id)arg1;
- (id)initWithVersion:(id)arg1 startVersion:(id)arg2 rootObject:(id)arg3 replica:(id)arg4 topoTimestamp:(id)arg5;
- (id)initWithVersion:(id)arg1 startVersion:(id)arg2 rootObject:(id)arg3 replica:(id)arg4;

@end

