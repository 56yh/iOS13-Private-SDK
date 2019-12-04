//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemManager.h>

@class HFItem, HFTimeRangeCondition;

@interface HUTriggerTimeConditionDetailEditorItemManager : HFItemManager
{
    HFItem *_startConditionPickerItem;
    HFItem *_endConditionPickerItem;
    HFTimeRangeCondition *_rangeCondition;
}

@property(retain, nonatomic) HFTimeRangeCondition *rangeCondition; // @synthesize rangeCondition=_rangeCondition;
@property(retain, nonatomic) HFItem *endConditionPickerItem; // @synthesize endConditionPickerItem=_endConditionPickerItem;
@property(retain, nonatomic) HFItem *startConditionPickerItem; // @synthesize startConditionPickerItem=_startConditionPickerItem;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;
- (void)setPrimitiveCondition:(id)arg1 forPickerItem:(id)arg2;
- (id)primitiveConditionForPickerItem:(id)arg1;
- (id)initWithDelegate:(id)arg1 rangeCondition:(id)arg2;

@end

