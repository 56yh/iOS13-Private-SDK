//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/GQDWPInlineList.h>

@class GQDSStyle;

__attribute__((visibility("hidden")))
@interface GQDWPParagraph : GQDWPInlineList
{
    GQDSStyle *mParaStyle;
    long long mListLevel;
    _Bool mRestartList;
    _Bool mContinue;
    _Bool mIsHidden;
}

- (_Bool)isHidden;
- (_Bool)isBlank;
- (_Bool)cont;
- (_Bool)restartList;
- (long long)listLevel;
- (id)paragraphStyle;
- (void)dealloc;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1 processor:(id)arg2;

@end

