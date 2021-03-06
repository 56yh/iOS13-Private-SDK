//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSNumber, UIColor;

@interface UIView (FMRoundedRect)
- (CGPath )newPathForRoundedRect:(CGRect)arg1 radius:(double)arg2;
@property(retain, nonatomic) NSNumber *roundedRectBorderWidth;
@property(retain, nonatomic) UIColor *roundedRectBorderColor;
@property(retain, nonatomic) UIColor *roundedRectBackgroundColor;
- (id)addConstraintsToSetSize:(CGSize)arg1;
- (id)addConstraintsToFillSuperview;
- (id)generateImage;
@property(retain, nonatomic) UIColor *debugHighlight;
- (void)setRandomDebugHighlight;
- (void)centerVerticallyInSuperview;
- (void)centerHorizontallyInSuperview;
- (void)performOnAllSubviews:(id /* CDUnknownBlockType */)arg1;
@property(readonly, copy) NSArray *allSubviews;
@end

