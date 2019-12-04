//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PencilKit/_PKInkColorButton.h>

@class CAShapeLayer, UIImageView, _PKHueSpectrumView;

@interface _PKEmbossedColorPickerButton : _PKInkColorButton
{
    _PKHueSpectrumView *_hueSpectrumView;
    CAShapeLayer *_selectedColorLayer;
    UIImageView *_embossImageView;
    CAShapeLayer *_strokeShapeLayer;
}

@property(retain, nonatomic) CAShapeLayer *strokeShapeLayer; // @synthesize strokeShapeLayer=_strokeShapeLayer;
@property(retain, nonatomic) UIImageView *embossImageView; // @synthesize embossImageView=_embossImageView;
@property(retain, nonatomic) CAShapeLayer *selectedColorLayer; // @synthesize selectedColorLayer=_selectedColorLayer;
@property(retain, nonatomic) _PKHueSpectrumView *hueSpectrumView; // @synthesize hueSpectrumView=_hueSpectrumView;
- (void)layoutSubviews;
- (id)initWithColor:(id)arg1 isCompact:(_Bool)arg2;

@end

