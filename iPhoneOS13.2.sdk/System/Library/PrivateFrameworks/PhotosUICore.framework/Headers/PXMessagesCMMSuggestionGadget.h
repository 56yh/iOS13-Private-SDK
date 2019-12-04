//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/PXGadget-Protocol.h>

@class NSString, PXCMMPosterHeaderView, PXGadgetSpec, PXRoundedCornerOverlayView, PXUpdater;
@protocol PXCMMSuggestion, PXGadgetDelegate, PXMessagesCMMSuggestionGadgetActionDelegate;

@interface PXMessagesCMMSuggestionGadget : UIViewController <PXGadget>
{
    PXUpdater *_updater;
    PXCMMPosterHeaderView *_posterHeaderView;
    PXRoundedCornerOverlayView *_roundedOverlayView;
    long long _priority;
    id <PXGadgetDelegate> _delegate;
    unsigned long long _accessoryButtonType;
    PXGadgetSpec *_gadgetSpec;
    id <PXCMMSuggestion> _suggestion;
    id <PXMessagesCMMSuggestionGadgetActionDelegate> _actionDelegate;
}

@property(nonatomic) __weak id <PXMessagesCMMSuggestionGadgetActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(retain, nonatomic) id <PXCMMSuggestion> suggestion; // @synthesize suggestion=_suggestion;
@property(retain, nonatomic) PXGadgetSpec *gadgetSpec; // @synthesize gadgetSpec=_gadgetSpec;
@property(readonly, nonatomic) unsigned long long accessoryButtonType; // @synthesize accessoryButtonType=_accessoryButtonType;
@property(nonatomic) __weak id <PXGadgetDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)userDidSelectGadget;
@property(readonly, nonatomic) _Bool supportsSelection;
@property(readonly, nonatomic) _Bool supportsHighlighting;
@property(readonly, nonatomic) _Bool hasContentToDisplay;
@property(readonly, nonatomic) unsigned long long gadgetType;
- (struct NSObject *)contentViewController;
@property(readonly, nonatomic) NSString *localizedTitle;
- (void)_updatePosterHeaderView;
- (void)viewWillLayoutSubviews;
- (void)_scheduleLayout;
- (void)viewDidLoad;
- (id)initWithSuggestion:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryButtonTitle;
@property(readonly, nonatomic) Class collectionViewItemClass;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly, nonatomic) unsigned long long headerStyle;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool supportsAssetsDrop;
@property(nonatomic) struct CGRect visibleContentRect;

@end

