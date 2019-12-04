//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString;

@interface CCUIContentModuleContainerView : UIView
{
    NSArray *_views;
    _Bool _ignoreFrameUpdates;
    NSString *_moduleIdentifier;
    UIView *_c2AnimationContainerView;
    UIView *_caAnimationContainerView;
}

@property(nonatomic) _Bool ignoreFrameUpdates; // @synthesize ignoreFrameUpdates=_ignoreFrameUpdates;
@property(readonly, nonatomic) UIView *caAnimationContainerView; // @synthesize caAnimationContainerView=_caAnimationContainerView;
@property(readonly, nonatomic) UIView *c2AnimationContainerView; // @synthesize c2AnimationContainerView=_c2AnimationContainerView;
@property(readonly, copy, nonatomic) NSString *moduleIdentifier; // @synthesize moduleIdentifier=_moduleIdentifier;
- (void)layoutSubviews;
@property(readonly, nonatomic) UIView *containerView; // @dynamic containerView;
- (id)initWithModuleIdentifier:(id)arg1 options:(unsigned long long)arg2;

@end

