//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren;

@interface CalDAVScheduleCalendarTranspItem : CoreDAVItem
{
    CoreDAVItemWithNoChildren *_transparent;
}

@property(retain, nonatomic) CoreDAVItemWithNoChildren *transparent; // @synthesize transparent=_transparent;
// - (void).cxx_destruct;
- (id)copyParseRules;
@property(readonly, nonatomic) BOOL isScheduleTransparent;

@end

