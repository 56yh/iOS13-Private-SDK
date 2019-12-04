//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFClockAlarmSnapshotMutating-Protocol.h>

@class AFClockAlarmSnapshot, NSDate, NSDictionary, NSOrderedSet, NSString;

@interface _AFClockAlarmSnapshotMutation : NSObject <AFClockAlarmSnapshotMutating>
{
    AFClockAlarmSnapshot *_baseModel;
    unsigned long long _generation;
    NSDate *_date;
    NSDictionary *_alarmsByID;
    NSOrderedSet *_notifiedFiringAlarmIDs;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasGeneration:1;
        unsigned int hasDate:1;
        unsigned int hasAlarmsByID:1;
        unsigned int hasNotifiedFiringAlarmIDs:1;
    } _mutationFlags;
}

- (id)generate;
- (void)setNotifiedFiringAlarmIDs:(id)arg1;
- (void)setAlarmsByID:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setGeneration:(unsigned long long)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

