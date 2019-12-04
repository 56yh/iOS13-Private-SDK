//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/CLKMonochromeComplicationView-Protocol.h>
#import <NanoTimeKitCompanion/CLKMonochromeFilterProvider-Protocol.h>

@class CLKDevice, NSString, NTKStackedImagesComplicationImageView;
@protocol CLKMonochromeFilterProvider;

@interface NTKRichComplicationImageView : UIView <CLKMonochromeFilterProvider, CLKMonochromeComplicationView>
{
    _Bool _useAccentColor;
    _Bool _hostingOverrideView;
    _Bool _paused;
    _Bool _inMonochromeMode;
    _Bool _prefersFilterOverTransition;
    id <CLKMonochromeFilterProvider> _filterProvider;
    CLKDevice *_device;
    UIView *_richComplicationImageView;
    NTKStackedImagesComplicationImageView *_monochromeImageView;
    long long _imageViewContentMode;
    long long _monochromeFilterType;
}

@property(nonatomic) _Bool prefersFilterOverTransition; // @synthesize prefersFilterOverTransition=_prefersFilterOverTransition;
@property(nonatomic) _Bool inMonochromeMode; // @synthesize inMonochromeMode=_inMonochromeMode;
@property(nonatomic) long long monochromeFilterType; // @synthesize monochromeFilterType=_monochromeFilterType;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(readonly, nonatomic) long long imageViewContentMode; // @synthesize imageViewContentMode=_imageViewContentMode;
@property(nonatomic, getter=isHostingOverrideView) _Bool hostingOverrideView; // @synthesize hostingOverrideView=_hostingOverrideView;
@property(nonatomic) __weak NTKStackedImagesComplicationImageView *monochromeImageView; // @synthesize monochromeImageView=_monochromeImageView;
@property(nonatomic) __weak UIView *richComplicationImageView; // @synthesize richComplicationImageView=_richComplicationImageView;
@property(readonly, nonatomic) _Bool useAccentColor; // @synthesize useAccentColor=_useAccentColor;
@property(readonly, nonatomic) CLKDevice *device; // @synthesize device=_device;
@property(nonatomic) __weak id <CLKMonochromeFilterProvider> filterProvider; // @synthesize filterProvider=_filterProvider;
- (_Bool)viewShouldIgnoreTwoPieceImage:(id)arg1;
- (id)interpolatedColorForView:(id)arg1;
- (id)colorForView:(id)arg1 accented:(_Bool)arg2;
- (id)filterForView:(id)arg1 style:(long long)arg2;
- (id)filterForView:(id)arg1 style:(long long)arg2 fraction:(double)arg3;
- (long long)_filterStyle;
- (void)updateMonochromeColor;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)setImageViewContentMode:(long long)arg1;
- (void)layoutSubviews;
- (void)setImageProvider:(id)arg1 reason:(long long)arg2;
- (id)initWithDevice:(id)arg1 useAccentColor:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

