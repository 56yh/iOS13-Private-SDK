//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface WFHKGroupingConfiguration : NSObject
{
    _Bool _fillMissing;
    long long _groupingOption;
    NSDate *_queryStartDate;
    NSDate *_queryEndDate;
}

@property(retain, nonatomic) NSDate *queryEndDate; // @synthesize queryEndDate=_queryEndDate;
@property(retain, nonatomic) NSDate *queryStartDate; // @synthesize queryStartDate=_queryStartDate;
@property(nonatomic) _Bool fillMissing; // @synthesize fillMissing=_fillMissing;
@property(nonatomic) long long groupingOption; // @synthesize groupingOption=_groupingOption;

@end

