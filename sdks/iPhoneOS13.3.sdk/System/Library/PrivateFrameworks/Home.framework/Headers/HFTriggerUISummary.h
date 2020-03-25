//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol HFIconDescriptor;

@interface HFTriggerUISummary : NSObject
{
    NSString *_triggerTitle;
    NSString *_triggerDescription;
    NSUInteger _triggerType;
    id <HFIconDescriptor> _triggerIconDescriptor;
    NSArray *_triggerSummaryIconDescriptors;
}

@property(readonly, nonatomic) NSArray *triggerSummaryIconDescriptors; // @synthesize triggerSummaryIconDescriptors=_triggerSummaryIconDescriptors;
@property(readonly, nonatomic) id <HFIconDescriptor> triggerIconDescriptor; // @synthesize triggerIconDescriptor=_triggerIconDescriptor;
@property(readonly, nonatomic) NSUInteger triggerType; // @synthesize triggerType=_triggerType;
@property(readonly, nonatomic) NSString *triggerDescription; // @synthesize triggerDescription=_triggerDescription;
@property(readonly, nonatomic) NSString *triggerTitle; // @synthesize triggerTitle=_triggerTitle;
// - (void).cxx_destruct;
- (void)_updateWithTrigger:(id)arg1 inHome:(id)arg2 forceDisabled:(BOOL)arg3;
- (id)initWithTrigger:(id)arg1 inHome:(id)arg2 forceDisabled:(BOOL)arg3;

@end
