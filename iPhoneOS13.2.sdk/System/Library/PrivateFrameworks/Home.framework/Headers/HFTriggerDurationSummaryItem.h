//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItem.h>

@class HFTriggerBuilder;

@interface HFTriggerDurationSummaryItem : HFItem
{
    HFTriggerBuilder *_triggerBuilder;
}

+ (id)formattedStringForDuration:(id)arg1 style:(unsigned long long)arg2;
@property(readonly, nonatomic) HFTriggerBuilder *triggerBuilder; // @synthesize triggerBuilder=_triggerBuilder;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithTriggerBuilder:(id)arg1;

@end

