//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/WFEnumerationParameter.h>

@class INIntentSlotDescription, NSArray;

@interface WFSystemIntentEnumerationParameter : WFEnumerationParameter
{
    NSArray *_possibleStates;
    INIntentSlotDescription *_slotDescription;
}

@property(readonly, nonatomic) INIntentSlotDescription *slotDescription; // @synthesize slotDescription=_slotDescription;
- (_Bool)alwaysShowsButton;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)possibleStates;
- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;

@end

