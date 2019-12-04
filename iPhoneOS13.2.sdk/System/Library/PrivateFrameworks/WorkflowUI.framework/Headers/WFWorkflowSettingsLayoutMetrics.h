//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIFont, UITraitCollection;

@interface WFWorkflowSettingsLayoutMetrics : NSObject
{
    UITraitCollection *_traitCollection;
}

@property(retain, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
- (id)scaledFont;
- (id)baseFont;
- (double)scaledValueForValue:(double)arg1;
@property(readonly, nonatomic) double emptySizeButtonHeight;
@property(readonly, nonatomic) struct CGSize tileSize;
@property(readonly, nonatomic) UIFont *textFieldFont;
@property(readonly, nonatomic) UIFont *emptyStateButtonFont;
@property(readonly, nonatomic) UIFont *emptyStateFont;
@property(readonly, nonatomic) UIFont *typeSelectionTypeLabelFont;
@property(readonly, nonatomic) UIFont *typeSelectionTitleFont;
- (id)initWithTraitCollection:(id)arg1;

@end

