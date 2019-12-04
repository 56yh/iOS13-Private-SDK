//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <HomeUI/HUViewControllerCell-Protocol.h>

@class NSString, UIViewController;

@interface HUViewControllerCollectionViewCell : UICollectionViewCell <HUViewControllerCell>
{
    _Bool _allowSelfSizing;
    UIViewController *_viewController;
    UIViewController *_parentViewController;
}

@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(nonatomic) _Bool allowSelfSizing; // @synthesize allowSelfSizing=_allowSelfSizing;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (void)_removeFromParentViewControllerAndClearProperty:(_Bool)arg1;
- (void)removeFromParentViewController;
- (void)addToParentViewController:(id)arg1;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)prepareForReuse;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

