//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaControls/MediaControlsVolumeSliderView.h>

@interface SBElasticSliderView : MediaControlsVolumeSliderView
{
    double _additiveGlyphScaleFactor;
}

@property(nonatomic) double additiveGlyphScaleFactor; // @synthesize additiveGlyphScaleFactor=_additiveGlyphScaleFactor;
- (void)_updateGlyphScaleForAdditiveScaleOrAxisUpdate;
- (struct CGPoint)glyphCenter;
- (void)setAxis:(int)arg1;
- (void)stopGlyphAnimations;
- (id)initWithFrame:(struct CGRect)arg1;

@end

