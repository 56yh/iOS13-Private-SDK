//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import <JITAppKit/UIScrollViewDelegate-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, UIStackView, UIViewController;

@interface MCLViewControllerCollection : UIScrollView <UIScrollViewDelegate>
{
    UIStackView *_contentView;
    NSLayoutConstraint *_widthConstraint;
    UIViewController *_owner;
    NSArray *_views;
}

@property(copy, nonatomic) NSArray *views; // @synthesize views=_views;
@property(nonatomic) __weak UIViewController *owner; // @synthesize owner=_owner;
- (void)scrollViewDidScroll:(id)arg1;
- (void)layoutSubviews;
@property(nonatomic) double spacing;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

