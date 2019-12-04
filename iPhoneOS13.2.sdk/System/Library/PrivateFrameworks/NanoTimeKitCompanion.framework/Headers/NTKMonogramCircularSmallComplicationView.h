//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCircularComplicationView.h>

#import <NanoTimeKitCompanion/NTKMonogramComplicationDisplay-Protocol.h>

@class NSString, NTKColoringLabel;
@protocol NTKComplicationDisplayObserver;

@interface NTKMonogramCircularSmallComplicationView : NTKCircularComplicationView <NTKMonogramComplicationDisplay>
{
    NTKColoringLabel *_label;
}

- (void)_updateLabelsForFontChange;
- (void)setMonogramText:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setForegroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) _Bool canUseCurvedText;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak id <NTKComplicationDisplayObserver> displayObserver;
@property(readonly) NSUInteger hash;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(nonatomic) _Bool shouldUseTemplateColors;
@property(readonly) Class superclass;

@end

