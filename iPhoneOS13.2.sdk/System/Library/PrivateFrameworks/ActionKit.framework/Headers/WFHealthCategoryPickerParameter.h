//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/WFEnumerationParameter.h>

@class HKCategoryType, NSArray;

@interface WFHealthCategoryPickerParameter : WFEnumerationParameter
{
    NSArray *_possibleStates;
    HKCategoryType *_categoryType;
}

@property(retain, nonatomic) HKCategoryType *categoryType; // @synthesize categoryType=_categoryType;
- (_Bool)isHidden;
- (void)updatePossibleStates;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)possibleStates;

@end

