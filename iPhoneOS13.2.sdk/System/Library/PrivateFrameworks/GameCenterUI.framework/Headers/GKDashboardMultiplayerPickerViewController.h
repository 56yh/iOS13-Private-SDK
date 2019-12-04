//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterUI/GKDashboardCollectionViewController.h>

#import <GameCenterUI/GKComposeControllerDelegate-Protocol.h>
#import <GameCenterUI/UISearchBarDelegate-Protocol.h>
#import <GameCenterUI/UISearchResultsUpdating-Protocol.h>
#import <GameCenterUI/UITextFieldDelegate-Protocol.h>

@class GKContactSkipControl, GKDashboardMultiplayerPickerDataSource, NSArray, NSLayoutConstraint, NSString, UIButton, UILabel, UISearchController, UISegmentedControl, UITextField, UIView, UIViewController, UIVisualEffectView;
@protocol GKDashboardMultiplayerPickerDelegate, GKDashboardNearbyBrowserDelegate;

@interface GKDashboardMultiplayerPickerViewController : GKDashboardCollectionViewController <UITextFieldDelegate, UISearchBarDelegate, GKComposeControllerDelegate, UISearchResultsUpdating>
{
    _Bool _supportsNearby;
    _Bool _shouldIgnoreClearSelection;
    _Bool _shouldApplyInitialOffset;
    _Bool _searching;
    NSString *_message;
    id /* block */ _completionHandler;
    id <GKDashboardNearbyBrowserDelegate> _nearbyDelegate;
    id <GKDashboardMultiplayerPickerDelegate> _multiplayerPickerDelegate;
    NSArray *_initiallySelectedPlayers;
    UILabel *_descriptionLabel;
    UIButton *_sendButton;
    UIButton *_customizeMessageButton;
    UITextField *_messageField;
    UIView *_scrollingHeader;
    NSLayoutConstraint *_scrollingHeaderTopConstraint;
    double _scrollingHeaderTopConstraintConstant;
    NSLayoutConstraint *_customizeMessageBottomConstraint;
    double _initialCustomizeMessageBottomConstraintConstant;
    double _segmentControlHeight;
    UISegmentedControl *_sectionControl;
    GKContactSkipControl *_contactSkipControl;
    UIVisualEffectView *_effectView;
    UISearchController *_searchController;
    GKDashboardCollectionViewController *_searchResultsCollectionViewController;
    UIViewController *_composeController;
    struct UIEdgeInsets _initialInsets;
}

@property(retain, nonatomic) UIViewController *composeController; // @synthesize composeController=_composeController;
@property(retain, nonatomic) GKDashboardCollectionViewController *searchResultsCollectionViewController; // @synthesize searchResultsCollectionViewController=_searchResultsCollectionViewController;
@property(retain, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) UIVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property(retain, nonatomic) GKContactSkipControl *contactSkipControl; // @synthesize contactSkipControl=_contactSkipControl;
@property(retain, nonatomic) UISegmentedControl *sectionControl; // @synthesize sectionControl=_sectionControl;
@property(nonatomic) double segmentControlHeight; // @synthesize segmentControlHeight=_segmentControlHeight;
@property(nonatomic, getter=isSearching) _Bool searching; // @synthesize searching=_searching;
@property(nonatomic) double initialCustomizeMessageBottomConstraintConstant; // @synthesize initialCustomizeMessageBottomConstraintConstant=_initialCustomizeMessageBottomConstraintConstant;
@property(retain, nonatomic) NSLayoutConstraint *customizeMessageBottomConstraint; // @synthesize customizeMessageBottomConstraint=_customizeMessageBottomConstraint;
@property(nonatomic) _Bool shouldApplyInitialOffset; // @synthesize shouldApplyInitialOffset=_shouldApplyInitialOffset;
@property(nonatomic) struct UIEdgeInsets initialInsets; // @synthesize initialInsets=_initialInsets;
@property(nonatomic) double scrollingHeaderTopConstraintConstant; // @synthesize scrollingHeaderTopConstraintConstant=_scrollingHeaderTopConstraintConstant;
@property(retain, nonatomic) NSLayoutConstraint *scrollingHeaderTopConstraint; // @synthesize scrollingHeaderTopConstraint=_scrollingHeaderTopConstraint;
@property(retain, nonatomic) UIView *scrollingHeader; // @synthesize scrollingHeader=_scrollingHeader;
@property(retain, nonatomic) UITextField *messageField; // @synthesize messageField=_messageField;
@property(retain, nonatomic) UIButton *customizeMessageButton; // @synthesize customizeMessageButton=_customizeMessageButton;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) _Bool shouldIgnoreClearSelection; // @synthesize shouldIgnoreClearSelection=_shouldIgnoreClearSelection;
@property(retain, nonatomic) NSArray *initiallySelectedPlayers; // @synthesize initiallySelectedPlayers=_initiallySelectedPlayers;
@property(nonatomic) __weak id <GKDashboardMultiplayerPickerDelegate> multiplayerPickerDelegate; // @synthesize multiplayerPickerDelegate=_multiplayerPickerDelegate;
@property(nonatomic) id <GKDashboardNearbyBrowserDelegate> nearbyDelegate; // @synthesize nearbyDelegate=_nearbyDelegate;
@property(nonatomic) _Bool supportsNearby; // @synthesize supportsNearby=_supportsNearby;
@property(copy, nonatomic) id /* block */ completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)_updateCollectionView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewSafeAreaInsetsDidChange;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)setSearchText:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)_updateButtonEnableState;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)cancel:(id)arg1;
- (void)addMessage:(id)arg1;
- (void)send:(id)arg1;
- (void)contactSkipSelected:(id)arg1;
- (void)segmentSectionChanged:(id)arg1;
- (void)clearSelection;
- (id)preferredFocusEnvironments;
- (id)verticalCollectionViewLayout;
- (id)horizontalCollectionViewLayout;
- (void)setupNoContentView:(id)arg1 withError:(id)arg2;
- (void)selectPlayersAtIndexPaths:(id)arg1 askDelegateFirst:(_Bool)arg2;
- (void)dataUpdated:(_Bool)arg1 withError:(id)arg2;
- (_Bool)hasData;
@property(readonly, nonatomic) _Bool excludesContacts;
- (void)applyInitialContentOffset;
- (id)blurEffectForTraitCollection:(id)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)adjustCustomizeMessageConstraint;
@property(readonly, nonatomic) GKDashboardMultiplayerPickerDataSource *pickerDataSource;
- (id)titleStringWithMaxSelectable:(long long)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)initWithMaxSelectable:(long long)arg1 hiddenPlayers:(id)arg2 excludeContacts:(_Bool)arg3 tournament:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

