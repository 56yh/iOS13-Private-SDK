//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@interface NSString (NSStringDrawing)
+ (double)defaultBaselineOffsetForFont:(id)arg1;
+ (double)defaultLineHeightForFont:(id)arg1;
+ (void)setTypesetterBehavior:(long long)arg1;
+ (long long)typesetterBehavior;
+ (float)hyphenationFactor;
+ (void)setHyphenationFactor:(float)arg1;
+ (_Bool)showsControlCharacters;
+ (void)setShowsControlCharacters:(_Bool)arg1;
+ (_Bool)showsInvisibleCharacters;
+ (void)setShowsInvisibleCharacters:(_Bool)arg1;
+ (void)setUsesScreenFonts:(_Bool)arg1;
+ (_Bool)usesScreenFonts;
+ (void)setUsesFontLeading:(_Bool)arg1;
+ (_Bool)usesFontLeading;
- (struct CGSize)sizeWithAttributes:(id)arg1;
- (void)drawInRect:(struct CGRect)arg1 withAttributes:(id)arg2;
- (void)drawAtPoint:(struct CGPoint)arg1 withAttributes:(id)arg2;
- (struct CGSize)_sizeWithSize:(struct CGSize)arg1 attributes:(id)arg2;
- (_Bool)hasColorGlyphsInRange:(struct _NSRange)arg1 attributes:(id)arg2;
- (struct CGRect)boundingRectWithSize:(struct CGSize)arg1 options:(long long)arg2 attributes:(id)arg3;
- (void)drawWithRect:(struct CGRect)arg1 options:(long long)arg2 attributes:(id)arg3;
- (struct CGRect)boundingRectWithSize:(struct CGSize)arg1 options:(long long)arg2 attributes:(id)arg3 context:(id)arg4;
- (void)drawWithRect:(struct CGRect)arg1 options:(long long)arg2 attributes:(id)arg3 context:(id)arg4;
- (id)stringByStrippingLeadingAndTrailingWhitespaceAndQuotes;
@end

