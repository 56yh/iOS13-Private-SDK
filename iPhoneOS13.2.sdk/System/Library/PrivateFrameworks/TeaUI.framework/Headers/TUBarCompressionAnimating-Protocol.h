//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class UIScrollView, UITraitCollection;

@protocol TUBarCompressionAnimating
@property(nonatomic) double topOffset;
@property(readonly, nonatomic) _Bool shouldCompressAtTop;
- (void)reloadWithTraitCollection:(UITraitCollection *)arg1;
- (double)minimumBarHeightForTraitCollection:(UITraitCollection *)arg1;
- (double)maximumBarHeightForTraitCollection:(UITraitCollection *)arg1;
- (_Bool)animationShouldBeginForScrollView:(UIScrollView *)arg1 currentlyFullyCompressed:(_Bool)arg2;
- (void)scrollViewIsAtTop:(_Bool)arg1;
- (void)updateWithPercentage:(double)arg1;
@end

