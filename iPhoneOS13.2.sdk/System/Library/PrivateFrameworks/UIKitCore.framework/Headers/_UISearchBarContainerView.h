//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

__attribute__((visibility("hidden")))
@interface _UISearchBarContainerView : UIView
{
    UIView *_subview;
    int _resizingMask;
    _Bool _shouldSendContainerSafeAreaInsetsDidChange;
}

- (void)layoutSubviews;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)enforceSubviewAtBottomIfNecessary;
- (void)willRemoveSubview:(id)arg1;
- (void)_didRemoveSubview:(id)arg1;
- (void)_uncontainerSubview:(id)arg1;
- (void)_addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)safeAreaInsetsDidChange;

@end

