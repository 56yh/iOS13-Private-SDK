//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TVPDateRange, TVPTimeRange;

@interface TVPChapter : NSObject
{
    TVPTimeRange *_timeRange;
    NSString *_localizedName;
    NSString *_chapterDescription;
    TVPDateRange *_dateRange;
}

@property(retain, nonatomic) TVPDateRange *dateRange; // @synthesize dateRange=_dateRange;
@property(retain, nonatomic) TVPTimeRange *timeRange; // @synthesize timeRange=_timeRange;
@property(copy, nonatomic) NSString *chapterDescription; // @synthesize chapterDescription=_chapterDescription;
@property(copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;

@end

