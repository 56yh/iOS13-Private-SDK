//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NUTrait, UITraitCollection;

@interface NUArticleExcerptTraits : NSObject <NSCopying>
{
    double _hairlineSeparatorHeight;
    double _topMarginAboveHeadlineTitle;
    double _topMarginAboveHeadlineDate;
    double _topMarginAboveHairlineSeparator;
    double _topMarginAboveExcerpt;
    double _scale;
    UITraitCollection *_traitCollection;
    NUTrait *_headlineImageRatioTrait;
    NUTrait *_headlineImageMarginTrait;
    NUTrait *_contentMarginTrait;
    NUTrait *_excerptMarginTrait;
    NUTrait *_readMoreMinTopMarginTrait;
    NUTrait *_bottomMaringTrait;
    struct CGSize _size;
}

@property(retain, nonatomic) NUTrait *bottomMaringTrait; // @synthesize bottomMaringTrait=_bottomMaringTrait;
@property(retain, nonatomic) NUTrait *readMoreMinTopMarginTrait; // @synthesize readMoreMinTopMarginTrait=_readMoreMinTopMarginTrait;
@property(retain, nonatomic) NUTrait *excerptMarginTrait; // @synthesize excerptMarginTrait=_excerptMarginTrait;
@property(retain, nonatomic) NUTrait *contentMarginTrait; // @synthesize contentMarginTrait=_contentMarginTrait;
@property(retain, nonatomic) NUTrait *headlineImageMarginTrait; // @synthesize headlineImageMarginTrait=_headlineImageMarginTrait;
@property(retain, nonatomic) NUTrait *headlineImageRatioTrait; // @synthesize headlineImageRatioTrait=_headlineImageRatioTrait;
@property(readonly, copy, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) double topMarginAboveExcerpt; // @synthesize topMarginAboveExcerpt=_topMarginAboveExcerpt;
@property(readonly, nonatomic) double topMarginAboveHairlineSeparator; // @synthesize topMarginAboveHairlineSeparator=_topMarginAboveHairlineSeparator;
@property(readonly, nonatomic) double topMarginAboveHeadlineDate; // @synthesize topMarginAboveHeadlineDate=_topMarginAboveHeadlineDate;
@property(readonly, nonatomic) double topMarginAboveHeadlineTitle; // @synthesize topMarginAboveHeadlineTitle=_topMarginAboveHeadlineTitle;
@property(readonly, nonatomic) double hairlineSeparatorHeight; // @synthesize hairlineSeparatorHeight=_hairlineSeparatorHeight;
@property(readonly, nonatomic) double bottomMargin;
@property(readonly, nonatomic) double minTopMaginAboveReadMoreButton;
@property(readonly, nonatomic) double contentMargin;
@property(readonly, nonatomic) double excerptMargin;
@property(readonly, nonatomic) double headlineImageMargin;
@property(readonly, nonatomic) double headlineImageHeight;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTraitCollection:(id)arg1 size:(struct CGSize)arg2;

@end
