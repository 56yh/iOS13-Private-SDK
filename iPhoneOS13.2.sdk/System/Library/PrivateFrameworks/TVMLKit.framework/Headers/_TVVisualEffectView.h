//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIVisualEffectView.h>

@class UIView;

@interface _TVVisualEffectView : UIVisualEffectView
{
    UIView *_hostView;
}

+ (void)disableForHostView:(id)arg1;
+ (void)enableForHostView:(id)arg1;
+ (void)removeHostView:(id)arg1;
+ (void)addHostView:(id)arg1;
+ (id)hostViewDisablements;
@property(nonatomic) __weak UIView *hostView; // @synthesize hostView=_hostView;
- (void)didMoveToWindow;
- (void)_disablement:(id)arg1;
- (void)_setDisabled:(_Bool)arg1;
- (void)dealloc;

@end

