//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVLeafItem;

@interface CoreDAVMatchResultsItem : CoreDAVItem
{
    CoreDAVLeafItem *_rank;
    CoreDAVLeafItem *_language;
    CoreDAVLeafItem *_region;
    CoreDAVLeafItem *_calendarDescription;
}

+ (id)copyParseRules;
@property(retain, nonatomic) CoreDAVLeafItem *calendarDescription; // @synthesize calendarDescription=_calendarDescription;
@property(retain, nonatomic) CoreDAVLeafItem *region; // @synthesize region=_region;
@property(retain, nonatomic) CoreDAVLeafItem *language; // @synthesize language=_language;
@property(retain, nonatomic) CoreDAVLeafItem *rank; // @synthesize rank=_rank;
- (id)description;

@end

