//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface WFHKGroupingConfiguration : NSObject
{
    BOOL _fillMissing;
    long long _groupingOption;
    NSDate *_queryStartDate;
    NSDate *_queryEndDate;
}

@property(retain, nonatomic) NSDate *queryEndDate; // @synthesize queryEndDate=_queryEndDate;
@property(retain, nonatomic) NSDate *queryStartDate; // @synthesize queryStartDate=_queryStartDate;
@property(nonatomic) BOOL fillMissing; // @synthesize fillMissing=_fillMissing;
@property(nonatomic) long long groupingOption; // @synthesize groupingOption=_groupingOption;
// - (void).cxx_destruct;

@end

