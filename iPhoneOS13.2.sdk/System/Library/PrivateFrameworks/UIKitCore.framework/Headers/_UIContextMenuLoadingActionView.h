//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UIContextMenuActionView.h>

@class UIActivityIndicatorView;

__attribute__((visibility("hidden")))
@interface _UIContextMenuLoadingActionView : _UIContextMenuActionView
{
    UIActivityIndicatorView *_activityIndicatorView;
}

@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
- (id)_contentsCompositingFilter;
- (id)_contentsTintColor;
- (void)_updateContentAppearance;
- (void)traitCollectionDidChange:(id)arg1;
- (id)trailingView;
- (id)init;

@end

