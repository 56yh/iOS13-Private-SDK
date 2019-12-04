//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKModularTemplateView.h>

@class NTKColoringLabel, UIView;
@protocol NTKComplicationImageView;

@interface NTKModularLargeStackTemplateView : NTKModularTemplateView
{
    NTKColoringLabel *_headerLeadingLabel;
    NTKColoringLabel *_headerTrailingLabel;
    _Bool _shouldTruncateHeaderLeadingLabelFirst;
    NTKColoringLabel *_body1Label;
    NTKColoringLabel *_body2Label;
    UIView<NTKComplicationImageView> *_headerGlyph;
    UIView<NTKComplicationImageView> *_body1Glyph;
}

+ (_Bool)handlesComplicationTemplate:(id)arg1;
- (void)_updateLabelsMaxWidths;
- (void)_updateForTallBodyTemplate:(id)arg1;
- (void)_updateForStandardBodyTemplate:(id)arg1;
- (void)_update;
- (id)_newLabelSubviewWithFont:(id)arg1;
- (id)_newLabelSubview;
- (void)_enumerateSecondaryForegroundColoringViewsWithBlock:(id /* block */)arg1;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)arg1;
- (void)_layoutContentView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

