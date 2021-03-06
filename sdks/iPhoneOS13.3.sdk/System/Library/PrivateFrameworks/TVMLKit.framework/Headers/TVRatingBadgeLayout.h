//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/TVViewLayout.h>

@class NSString, UIColor;

@interface TVRatingBadgeLayout : TVViewLayout
{
    UIColor *_fillColor;
    NSString *_ratingStyle;
    NSString *_ratingStyleAXSmall;
    NSString *_ratingStyleAXLarge;
    double _interitemSpacing;
    double _interitemSpacingAXSmall;
    double _interitemSpacingAXLarge;
}

+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;
@property(nonatomic) double interitemSpacingAXLarge; // @synthesize interitemSpacingAXLarge=_interitemSpacingAXLarge;
@property(nonatomic) double interitemSpacingAXSmall; // @synthesize interitemSpacingAXSmall=_interitemSpacingAXSmall;
@property(nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property(retain, nonatomic) NSString *ratingStyleAXLarge; // @synthesize ratingStyleAXLarge=_ratingStyleAXLarge;
@property(retain, nonatomic) NSString *ratingStyleAXSmall; // @synthesize ratingStyleAXSmall=_ratingStyleAXSmall;
@property(retain, nonatomic) NSString *ratingStyle; // @synthesize ratingStyle=_ratingStyle;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
// - (void).cxx_destruct;

@end

