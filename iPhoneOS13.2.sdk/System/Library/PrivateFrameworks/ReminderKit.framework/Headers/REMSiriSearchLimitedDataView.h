//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class REMStore;

@interface REMSiriSearchLimitedDataView : NSObject
{
    REMStore *_store;
}

@property(readonly, nonatomic) REMStore *store; // @synthesize store=_store;
- (id)fetchRemindersMatchingTitle:(id)arg1 dueAfter:(id)arg2 dueBefore:(id)arg3 isCompleted:(id)arg4 hasLocation:(id)arg5 location:(id)arg6 error:(id *)arg7;
- (id)initWithStore:(id)arg1;

@end

