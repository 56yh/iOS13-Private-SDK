//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardHome/SBReusableView-Protocol.h>

@class UIFont, _UILegibilitySettings;

@protocol SBIconLabelAccessoryView <SBReusableView>
@property(readonly, nonatomic) struct UIEdgeInsets alignmentRectInsets;
@property(readonly, nonatomic) double baselineOffsetFromBottom;
@property(readonly, nonatomic) _Bool hasBaseline;
- (void)updateWithLegibilitySettings:(_UILegibilitySettings *)arg1 labelFont:(UIFont *)arg2;
@end

