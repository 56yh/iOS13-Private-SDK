//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>


#import <TouchML/TMLFontJSExports-Protocol.h>

@class NSString, UIFont, UIFontDescriptor;

@interface TMLFont : NSObject <TMLFontJSExports, NSCopying>
{
    UIFont *_font;
    UIFontDescriptor *_fontDescriptor;
}

+ (void)initializeJSContext:(id)arg1;
@property(readonly, nonatomic) double leading;
@property(readonly, nonatomic) double lineHeight;
@property(readonly, nonatomic) double xHeight;
@property(readonly, nonatomic) double capHeight;
@property(readonly, nonatomic) double descender;
@property(readonly, nonatomic) double ascender;
@property(readonly, nonatomic) double pointSize;
@property(readonly, nonatomic) NSString *fontName;
@property(readonly, nonatomic) NSString *familyName;
- (id)withScaleTransform:(double)arg1;
- (id)withScale:(double)arg1;
- (id)withAXRestrictedStyle:(id)arg1;
- (id)withStyle:(id)arg1;
- (id)withAttributes:(id)arg1;
- (id)withSymbolicTraits:(unsigned int)arg1;
- (id)withWidth:(double)arg1;
- (id)withWeight:(double)arg1;
- (id)withFamily:(id)arg1;
- (id)withSize:(double)arg1;
- (id)italic;
- (id)bold;
@property(readonly, nonatomic) struct CGFont *CGFontRef;
- (id)UIFontValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFontDescriptor:(id)arg1;
- (id)initWithFont:(id)arg1;

@end

