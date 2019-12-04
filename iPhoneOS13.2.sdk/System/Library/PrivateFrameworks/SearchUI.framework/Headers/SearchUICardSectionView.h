//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppSupportUI/NUIContainerStackView.h>

@class SFCardSection, SearchUICardSectionRowModel, UIView, UIViewController;
@protocol SearchUIFeedbackDelegate;

@interface SearchUICardSectionView : NUIContainerStackView
{
    UIView *_contentView;
    SearchUICardSectionRowModel *_rowModel;
    UIViewController *_embeddedViewController;
    id <SearchUIFeedbackDelegate> _feedbackDelegate;
    UIView *_chevronView;
}

+ (Class)layerClass;
+ (id)dragSubtitleForCardSection:(id)arg1;
+ (id)dragTitleForCardSection:(id)arg1;
+ (_Bool)supportsRecyclingForCardSection:(id)arg1;
+ (int)separatorStyleForCardSection:(id)arg1;
+ (double)separatorInsetForLeadingImageForSection:(id)arg1;
@property(retain, nonatomic) UIView *chevronView; // @synthesize chevronView=_chevronView;
@property(nonatomic) __weak id <SearchUIFeedbackDelegate> feedbackDelegate; // @synthesize feedbackDelegate=_feedbackDelegate;
@property(readonly) UIViewController *embeddedViewController; // @synthesize embeddedViewController=_embeddedViewController;
@property(retain, nonatomic) SearchUICardSectionRowModel *rowModel; // @synthesize rowModel=_rowModel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (id)description;
- (void)presentViewController:(id)arg1;
- (void)requestRemovalFromEnclosingView;
- (void)didInvalidateSizeAnimate:(_Bool)arg1;
- (id)sendFeedbackForPunchout:(id)arg1 triggerEvent:(unsigned long long)arg2;
- (void)openPunchout:(id)arg1 triggerEvent:(unsigned long long)arg2;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)didMoveToWindow;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)updateWithRowModel:(id)arg1;
@property(readonly, nonatomic) SFCardSection *section;
- (void)updateChevronVisible:(_Bool)arg1 leaveSpaceForChevron:(_Bool)arg2;
- (id)setupContentView;
- (id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2;

@end

