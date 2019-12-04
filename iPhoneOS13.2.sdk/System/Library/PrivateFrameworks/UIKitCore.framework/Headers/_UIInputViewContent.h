//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIInputView;

__attribute__((visibility("hidden")))
@interface _UIInputViewContent : UIView
{
    double _contentHeight;
    double _contentWidth;
    UIInputView *_inputView;
    unsigned long long _unclippableCorners;
}

@property(nonatomic) unsigned long long _unclippableCorners; // @synthesize _unclippableCorners;
- (void)_updateCornerClipping;
- (struct CGSize)_contentSize;
- (void)addSubview:(id)arg1;
- (struct CGSize)_sizeFittingContentViews;
- (void)_setToolbarBackgroundViewWithImage:(id)arg1;
- (void)_setToolbarBackgroundImage:(id)arg1;
- (_Bool)_isToolbar;
- (id)initWithFrame:(struct CGRect)arg1 inputView:(id)arg2;

@end

