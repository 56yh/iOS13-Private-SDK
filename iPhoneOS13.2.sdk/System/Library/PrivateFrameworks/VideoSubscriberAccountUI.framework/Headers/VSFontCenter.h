//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIFont, UITraitCollection;
@protocol UITraitEnvironment;

@interface VSFontCenter : NSObject
{
    id <UITraitEnvironment> _traitEnvironment;
    UITraitCollection *_traitCollection;
    UIFont *_title0Font;
    UIFont *_title1Font;
    UIFont *_title2Font;
    UIFont *_title3Font;
    UIFont *_headlineFont;
    UIFont *_subheadlineFont;
    UIFont *_bodyFont;
    UIFont *_calloutFont;
    UIFont *_footnoteFont;
    UIFont *_caption1Font;
    UIFont *_caption2Font;
    UIFont *_appAgeRatingFont;
}

@property(copy, nonatomic) UIFont *appAgeRatingFont; // @synthesize appAgeRatingFont=_appAgeRatingFont;
@property(copy, nonatomic) UIFont *caption2Font; // @synthesize caption2Font=_caption2Font;
@property(copy, nonatomic) UIFont *caption1Font; // @synthesize caption1Font=_caption1Font;
@property(copy, nonatomic) UIFont *footnoteFont; // @synthesize footnoteFont=_footnoteFont;
@property(copy, nonatomic) UIFont *calloutFont; // @synthesize calloutFont=_calloutFont;
@property(copy, nonatomic) UIFont *bodyFont; // @synthesize bodyFont=_bodyFont;
@property(copy, nonatomic) UIFont *subheadlineFont; // @synthesize subheadlineFont=_subheadlineFont;
@property(copy, nonatomic) UIFont *headlineFont; // @synthesize headlineFont=_headlineFont;
@property(copy, nonatomic) UIFont *title3Font; // @synthesize title3Font=_title3Font;
@property(copy, nonatomic) UIFont *title2Font; // @synthesize title2Font=_title2Font;
@property(copy, nonatomic) UIFont *title1Font; // @synthesize title1Font=_title1Font;
@property(copy, nonatomic) UIFont *title0Font; // @synthesize title0Font=_title0Font;
@property(copy, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(nonatomic) __weak id <UITraitEnvironment> traitEnvironment; // @synthesize traitEnvironment=_traitEnvironment;
- (void)_updateFontsWithTraitCollection:(id)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithTraitEnvironment:(id)arg1;
- (id)init;

@end

