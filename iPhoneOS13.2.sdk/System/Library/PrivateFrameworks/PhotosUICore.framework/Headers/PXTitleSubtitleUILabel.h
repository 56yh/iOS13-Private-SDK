//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class CALayer, NSArray, NSString, PXTitleSubtitleCALayerPromise, PXTitleSubtitleLabelSpec;

@interface PXTitleSubtitleUILabel : UIView <PXChangeObserver>
{
    _Bool _needsUpdateLayerPromise;
    _Bool _rendersTextAsynchronously;
    _Bool _shouldRasterizeTextLayer;
    _Bool _diagnosticsEnabled;
    NSString *_titleText;
    NSString *_subtitleText;
    PXTitleSubtitleLabelSpec *_spec;
    long long _typesettingMode;
    PXTitleSubtitleCALayerPromise *__layerPromise;
    CALayer *__contentLayer;
}

@property(nonatomic) _Bool diagnosticsEnabled; // @synthesize diagnosticsEnabled=_diagnosticsEnabled;
@property(retain, nonatomic, setter=_setContentLayer:) CALayer *_contentLayer; // @synthesize _contentLayer=__contentLayer;
@property(retain, nonatomic, setter=_setLayerPromise:) PXTitleSubtitleCALayerPromise *_layerPromise; // @synthesize _layerPromise=__layerPromise;
@property(nonatomic) _Bool shouldRasterizeTextLayer; // @synthesize shouldRasterizeTextLayer=_shouldRasterizeTextLayer;
@property(nonatomic) _Bool rendersTextAsynchronously; // @synthesize rendersTextAsynchronously=_rendersTextAsynchronously;
@property(nonatomic) long long typesettingMode; // @synthesize typesettingMode=_typesettingMode;
@property(retain, nonatomic) PXTitleSubtitleLabelSpec *spec; // @synthesize spec=_spec;
@property(copy, nonatomic) NSString *subtitleText; // @synthesize subtitleText=_subtitleText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateContentLayer;
- (void)_updateLayerPromiseIfNeeded;
- (void)_invalidateLayerPromise;
- (void)layoutSubviews;
- (struct CGRect)contentBounds;
@property(readonly, nonatomic) NSArray *diagnosticsRenderedLines;
@property(readonly, nonatomic) double lastBaseline;
- (void)_handleChangeFromBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)_PXTitleSubtitleUILabelCommonInitialization;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

