//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EDCollection, EDColorsCollection, EDContentFormatsCollection, EDFontsCollection, EDLinksCollection, EDStylesCollection, EDTableStylesCollection;

__attribute__((visibility("hidden")))
@interface EDResources : NSObject
{
    EDCollection *mStrings;
    EDContentFormatsCollection *mContentFormats;
    EDFontsCollection *mFonts;
    EDCollection *mAlignmentInfos;
    EDStylesCollection *mStyles;
    EDColorsCollection *mColors;
    EDColorsCollection *mThemes;
    EDCollection *mNames;
    EDLinksCollection *mLinks;
    EDCollection *mBorders;
    EDCollection *mBorder;
    EDCollection *mFills;
    EDCollection *mDifferentialStyles;
    EDTableStylesCollection *mTableStyles;
}

- (id)description;
- (id)tableStyles;
- (id)differentialStyles;
- (id)fills;
- (id)border;
- (id)borders;
- (id)links;
- (id)names;
- (id)themes;
- (id)colors;
- (id)styles;
- (id)alignmentInfos;
- (id)fonts;
- (id)contentFormats;
- (id)strings;
- (id)initWithStringOptimization:(_Bool)arg1;
- (void)setThemes:(id)arg1;
- (void)setColors:(id)arg1;

@end

