//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLKDevice, UIColor;

@interface NTKChronoPalette : NSObject
{
    BOOL _showsShadows;
    CLKDevice *_device;
    UIColor *_backgroundColor;
    UIColor *_foregroundColor;
    UIColor *_tickColor;
    UIColor *_alternativeTickColor;
    UIColor *_labelColor;
    UIColor *_chronoHandColor;
    UIColor *_dateComplicationColor;
    UIColor *_inlayColor;
    UIColor *_glyphColor;
    UIColor *_glyphBackgroundColor;
    double _smallTickValue;
    double _largeTickValue;
    NSUInteger _paletteColor;
}

+ (id)interpolationFromPalette:(id)arg1 toPalette:(id)arg2 fraction:(double)arg3;
+ (id)paletteForDevice:(id)arg1 withColor:(NSUInteger)arg2;
@property(readonly, nonatomic) BOOL showsShadows; // @synthesize showsShadows=_showsShadows;
@property(readonly, nonatomic) NSUInteger paletteColor; // @synthesize paletteColor=_paletteColor;
@property(readonly, nonatomic) double largeTickValue; // @synthesize largeTickValue=_largeTickValue;
@property(readonly, nonatomic) double smallTickValue; // @synthesize smallTickValue=_smallTickValue;
@property(readonly, nonatomic) UIColor *glyphBackgroundColor; // @synthesize glyphBackgroundColor=_glyphBackgroundColor;
@property(readonly, nonatomic) UIColor *glyphColor; // @synthesize glyphColor=_glyphColor;
@property(readonly, nonatomic) UIColor *inlayColor; // @synthesize inlayColor=_inlayColor;
@property(readonly, nonatomic) UIColor *dateComplicationColor; // @synthesize dateComplicationColor=_dateComplicationColor;
@property(readonly, nonatomic) UIColor *chronoHandColor; // @synthesize chronoHandColor=_chronoHandColor;
@property(readonly, nonatomic) UIColor *labelColor; // @synthesize labelColor=_labelColor;
@property(readonly, nonatomic) UIColor *alternativeTickColor; // @synthesize alternativeTickColor=_alternativeTickColor;
@property(readonly, nonatomic) UIColor *tickColor; // @synthesize tickColor=_tickColor;
@property(readonly, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) CLKDevice *device; // @synthesize device=_device;
// - (void).cxx_destruct;
- (id)_initForDevice:(id)arg1 withColor:(NSUInteger)arg2;
- (id)initForDevice:(id)arg1;

@end
