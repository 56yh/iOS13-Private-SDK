//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@interface NSString (SCRCMathExpression)
+ (id)stringWithDollarCode:(id)arg1;
+ (id)stringWithCGRect:(struct CGRect)arg1;
- (id)stringWrappedInMathMLTag:(id)arg1 withAttributes:(id)arg2;
- (id)stringWrappedInMathMLTag:(id)arg1;
- (id)scrc_composedCharacterEnumerator;
- (id)scrc_decodeUnicodeForKVO;
- (id)scrc_encodeUnicodeForKVO;
- (_Bool)scrc_containsNumberOfGlyphs:(unsigned char)arg1;
- (unsigned char)_countNumberOfGlyphs:(unsigned char)arg1;
- (unsigned char)scrc_countNumberOfGlyphs;
- (_Bool)scrc_containsOnlyOneGlyph;
- (id)scrc_composedCharacterAtIndex:(unsigned long long)arg1;
- (id)stringWithMathIndicators;
- (struct _NSRange)previousWordFromPosition:(long long)arg1;
- (struct _NSRange)nextWordFromPosition:(long long)arg1;
- (_Bool)containsAttachmentCharSet;
- (id)contentsOfEmbeddedCommand:(id)arg1;
- (unsigned int)fourCharCodeValue;
- (struct _NSRange)sentenceBreakInDirection:(_Bool)arg1 fromIndex:(unsigned long long)arg2 skipCurrent:(_Bool)arg3;
- (struct _NSRange)enclosingSentenceRangeForRange:(struct _NSRange)arg1;
- (_Bool)hasMultipleWordsWithLocaleName:(const char *)arg1 ignorePunctuation:(_Bool)arg2;
- (id)stringByTrimmingEmptySpaceEdges;
- (id)scrStringByTrimmingTrailingNewlines;
- (id)stringByReplacingCharactersInSet:(id)arg1 withString:(id)arg2;
- (id)stringByTruncatingToWordAtIndex:(unsigned long long)arg1 addElipses:(_Bool)arg2;
- (int)character32AtIndex:(unsigned long long)arg1 returningNumberOfComposedChars:(unsigned long long *)arg2;
- (id)threadDescription;
@end

