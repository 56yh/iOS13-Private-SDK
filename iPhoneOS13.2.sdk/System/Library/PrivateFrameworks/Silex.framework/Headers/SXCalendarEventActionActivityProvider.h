//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXActionActivityProvider-Protocol.h>

@class NSString;
@protocol SXCalendarPresenter, SXHost;

@interface SXCalendarEventActionActivityProvider : NSObject <SXActionActivityProvider>
{
    id <SXCalendarPresenter> _calendarPresenter;
    id <SXHost> _host;
}

@property(readonly, nonatomic) id <SXHost> host; // @synthesize host=_host;
@property(readonly, nonatomic) id <SXCalendarPresenter> calendarPresenter; // @synthesize calendarPresenter=_calendarPresenter;
- (void)showInCalendar:(id)arg1;
- (void)createEvent:(id)arg1;
- (id)activityGroupForAction:(id)arg1;
- (id)initWithCalendarPresenter:(id)arg1 host:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

