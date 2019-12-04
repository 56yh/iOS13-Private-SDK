//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SpringBoardHome/SBUIProgressiveBlur-Protocol.h>

@class MTMaterialView, NSString;

@interface SBSearchBackdropView : UIView <SBUIProgressiveBlur>
{
    MTMaterialView *_materialView;
    _Bool _transitioningToBlur;
}

- (void)completeIncrementalTransitionSuccessfully:(_Bool)arg1;
- (void)setTransitionProgress:(double)arg1;
- (void)completeTransitionSuccessfully:(_Bool)arg1;
- (void)prepareForTransitionToBlurred:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

