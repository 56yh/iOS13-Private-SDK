//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol GEONavdAnalyticsReporter;

@interface GEONavdAnalyticsManager : NSObject
{
    id <GEONavdAnalyticsReporter> _analyticsReporter;
}

+ (id)sharedManager;
@property(retain, nonatomic) id <GEONavdAnalyticsReporter> analyticsReporter; // @synthesize analyticsReporter=_analyticsReporter;

@end

