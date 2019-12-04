//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoverSheet/CSActionHandling-Protocol.h>
#import <CoverSheet/CSCoverSheetViewControlling-Protocol.h>

@class BSAnimationSettings, CSAppearance, CSBehavior, CSPresentation;
@protocol CSCoverSheetViewControlling;

@protocol CSCoverSheetViewPresenting <CSCoverSheetViewControlling, CSActionHandling>
@property(readonly, copy, nonatomic) CSPresentation *externalPresentation;
@property(readonly, copy, nonatomic) CSBehavior *activeBehavior;
@property(readonly, copy, nonatomic) CSAppearance *activeAppearance;
- (void)_conformsToCSCoverSheetViewPresenting;
- (void)updateAppearanceForController:(id <CSCoverSheetViewControlling>)arg1 withAnimationSettings:(BSAnimationSettings *)arg2 completion:(void (^)(_Bool))arg3;
- (void)updateAppearanceForController:(id <CSCoverSheetViewControlling>)arg1;
- (void)updateBehaviorForController:(id <CSCoverSheetViewControlling>)arg1;
@end

