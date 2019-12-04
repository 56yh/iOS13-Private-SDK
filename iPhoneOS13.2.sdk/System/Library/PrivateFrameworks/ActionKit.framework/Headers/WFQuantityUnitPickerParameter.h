//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/WFEnumerationParameter.h>

@class HKQuantityType, NSArray, NSObject;
@protocol OS_dispatch_group;

@interface WFQuantityUnitPickerParameter : WFEnumerationParameter
{
    NSArray *_possibleStates;
    HKQuantityType *_quantityType;
    NSObject<OS_dispatch_group> *_possibleStateLoadingGroup;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_group> *possibleStateLoadingGroup; // @synthesize possibleStateLoadingGroup=_possibleStateLoadingGroup;
@property(retain, nonatomic) HKQuantityType *quantityType; // @synthesize quantityType=_quantityType;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)possibleStates;
- (void)updatePossibleStates;
- (id)defaultSerializedRepresentation;
- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;

@end

