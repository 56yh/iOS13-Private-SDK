//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKFaceViewComplicationFactory.h>

#import <NanoTimeKitCompanion/NTKFaceViewComplicationFactory-Protocol.h>

@class NSString, NTKFaceView, NTKUtilityComplicationFactory;

@interface NTKWhistlerAnalogFaceViewComplicationFactory : NTKFaceViewComplicationFactory <NTKFaceViewComplicationFactory>
{
    NTKUtilityComplicationFactory *_complicationFactory;
    _Bool _usesNarrowTopSlots;
    NTKFaceView *_faceView;
    double _dialDiameter;
}

@property(nonatomic) double dialDiameter; // @synthesize dialDiameter=_dialDiameter;
@property(nonatomic) __weak NTKFaceView *faceView; // @synthesize faceView=_faceView;
@property(nonatomic) _Bool usesNarrowTopSlots; // @synthesize usesNarrowTopSlots=_usesNarrowTopSlots;
- (void)setAlpha:(double)arg1 faceView:(id)arg2;
- (_Bool)_convertCircularSlot:(id)arg1 toPosition:(long long *)arg2;
- (_Bool)_convertCornerSlot:(id)arg1 toPosition:(long long *)arg2;
- (id)_cornerKeylineViewForSlot:(id)arg1;
- (_Bool)_isCornerComplicationForSlot:(id)arg1;
- (_Bool)isCornerComplicationForSlot:(id)arg1;
- (_Bool)_isCenterComplicationForSlot:(id)arg1;
- (unsigned long long)keylineLabelAlignmentForComplicationSlot:(id)arg1 faceView:(id)arg2;
- (void)configureComplicationView:(id)arg1 forSlot:(id)arg2 faceView:(id)arg3;
- (id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 faceView:(id)arg4;
- (void)loadLayoutRulesForFaceView:(id)arg1 dialDiameter:(double)arg2;
- (void)loadLayoutRulesForFaceView:(id)arg1;
- (id)customEditOptionContainerViewForSlot:(id)arg1;
- (long long)complicationPickerStyleForSlot:(id)arg1;
- (id)pickerMaskForSlot:(id)arg1;
- (id)keylineViewForComplicationSlot:(id)arg1;
- (struct CGPoint)circularComplicationCenterForSlot:(id)arg1 inFaceBounds:(struct CGRect)arg2;
- (id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (void)loadLayoutRules;
- (long long)legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2;
- (unsigned long long)keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (void)configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (id)initForDevice:(id)arg1;
- (id)initWithFaceView:(id)arg1 dialDiameter:(double)arg2 device:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

