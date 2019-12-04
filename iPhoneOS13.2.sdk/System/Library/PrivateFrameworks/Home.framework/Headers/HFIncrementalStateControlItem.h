//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFControlItem.h>

#import <Home/HFTogglableControlItem-Protocol.h>

@class NSNumber, NSString;
@protocol HFPrimaryStateWriter;

@interface HFIncrementalStateControlItem : HFControlItem <HFTogglableControlItem>
{
    HFControlItem<HFPrimaryStateWriter> *_primaryStateControlItem;
    NSString *_incrementalCharacteristicType;
}

+ (id)optionsForPrimaryStateControlItem:(id)arg1 incrementalCharacteristicType:(id)arg2;
+ (id)readOnlyCharacteristicTypes;
+ (Class)valueClass;
@property(readonly, copy, nonatomic) NSString *incrementalCharacteristicType; // @synthesize incrementalCharacteristicType=_incrementalCharacteristicType;
@property(readonly, nonatomic) HFControlItem<HFPrimaryStateWriter> *primaryStateControlItem; // @synthesize primaryStateControlItem=_primaryStateControlItem;
@property(readonly, nonatomic) NSNumber *stepValue;
- (id)characteristicValuesForValue:(id)arg1;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)valueForCharacteristicType:(id)arg1 inBatchReadResponse:(id)arg2;
- (id)updateWithOptions:(id)arg1;
- (id)writeValue:(id)arg1;
- (id)toggleValue;
- (id)togglePrimaryAndIncrementalState;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (_Bool)canCopyWithCharacteristicOptions:(id)arg1;
- (id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3;
- (id)initWithValueSource:(id)arg1 incrementalAndPrimaryCharacteristicType:(id)arg2 displayResults:(id)arg3;
- (id)initWithValueSource:(id)arg1 primaryStateControlItem:(id)arg2 incrementalCharacteristicType:(id)arg3 displayResults:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

