//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LPImage, LPImageViewStyle, LPPadding, LPPointUnit;

__attribute__((visibility("hidden")))
@interface LPGlyphStyle : NSObject
{
    LPImage *_image;
    LPPadding *_padding;
    double _opacity;
    LPImageViewStyle *_imageStyle;
    LPPointUnit *_baselineOffset;
}

@property(retain, nonatomic) LPPointUnit *baselineOffset; // @synthesize baselineOffset=_baselineOffset;
@property(readonly, nonatomic) LPImageViewStyle *imageStyle; // @synthesize imageStyle=_imageStyle;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(readonly, retain, nonatomic) LPPadding *padding; // @synthesize padding=_padding;
@property(retain, nonatomic) LPImage *image; // @synthesize image=_image;
- (id)initSearchGlyph;
- (id)init;

@end

