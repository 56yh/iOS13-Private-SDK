//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SuddenChangeParameters : NSObject
{
    int margin;
    int minSamplesCount;
    int minMarginRequired;
    double percentage;
    double durationThresholdUpward;
    double durationThresholdDownward;
}

@property(nonatomic) double durationThresholdDownward; // @synthesize durationThresholdDownward;
@property(nonatomic) double durationThresholdUpward; // @synthesize durationThresholdUpward;
@property(nonatomic) double percentage; // @synthesize percentage;
@property(nonatomic) int minMarginRequired; // @synthesize minMarginRequired;
@property(nonatomic) int minSamplesCount; // @synthesize minSamplesCount;
@property(nonatomic) int margin; // @synthesize margin;

@end

