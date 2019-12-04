//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVTaskGroup.h>

#import <CalDAV/CoreDAVPostTaskDelegate-Protocol.h>

@class NSMutableSet, NSSet, NSString, NSURL;
@protocol CoreDAVTaskGroupDelegate;

@interface CalDAVModifySharedCalendarShareeListTaskGroup : CoreDAVTaskGroup <CoreDAVPostTaskDelegate>
{
    NSMutableSet *_invalidSharees;
    NSSet *_shareesToRemove;
    NSSet *_shareesToSet;
    NSURL *_calendarURL;
    NSString *_summary;
}

@property(retain, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) NSURL *calendarURL; // @synthesize calendarURL=_calendarURL;
@property(retain, nonatomic) NSSet *shareesToSet; // @synthesize shareesToSet=_shareesToSet;
@property(retain, nonatomic) NSSet *shareesToRemove; // @synthesize shareesToRemove=_shareesToRemove;
@property(retain, nonatomic) NSMutableSet *invalidSharees; // @synthesize invalidSharees=_invalidSharees;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (id)generateModificationMessageBody;
- (void)startTaskGroup;
- (id)initWithShareesToSet:(id)arg1 shareesToRemove:(id)arg2 summary:(id)arg3 atCalendarURL:(id)arg4 accountInfoProvider:(id)arg5 taskManager:(id)arg6;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <CoreDAVTaskGroupDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

