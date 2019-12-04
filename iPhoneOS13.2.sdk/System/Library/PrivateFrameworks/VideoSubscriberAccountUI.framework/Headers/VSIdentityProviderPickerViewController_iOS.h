//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <VideoSubscriberAccountUI/UISearchControllerDelegate-Protocol.h>
#import <VideoSubscriberAccountUI/VSIdentityProviderPickerViewController-Protocol.h>
#import <VideoSubscriberAccountUI/VSTableHeaderFooterViewDelegate-Protocol.h>

@class NSArray, NSString, UISearchController, VSFontCenter, VSIdentityProvider, VSIdentityProviderFilter, VSIdentityProviderTableViewDataSource, VSOnboardingInfoCenter, VSSearchBarDelegate;
@protocol VSIdentityProviderPickerViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSIdentityProviderPickerViewController_iOS : UITableViewController <UISearchControllerDelegate, VSTableHeaderFooterViewDelegate, VSIdentityProviderPickerViewController>
{
    _Bool _cancellationAllowed;
    _Bool _dismissingSearchDueToSelection;
    id <VSIdentityProviderPickerViewControllerDelegate> _delegate;
    NSArray *_identityProviders;
    unsigned long long _additionalProvidersMode;
    NSString *_requestingAppDisplayName;
    NSString *_resourceTitle;
    UISearchController *_searchController;
    VSOnboardingInfoCenter *_onboardingInfoCenter;
    VSIdentityProviderFilter *_filter;
    VSSearchBarDelegate *_searchBarDelegate;
    VSIdentityProviderTableViewDataSource *_unfilteredDataSource;
    VSIdentityProviderTableViewDataSource *_filteredDataSource;
    VSFontCenter *_fontCenter;
    VSIdentityProvider *_selectedIdentityProvider;
}

@property(retain, nonatomic) VSIdentityProvider *selectedIdentityProvider; // @synthesize selectedIdentityProvider=_selectedIdentityProvider;
@property(nonatomic, getter=isDismissingSearchDueToSelection) _Bool dismissingSearchDueToSelection; // @synthesize dismissingSearchDueToSelection=_dismissingSearchDueToSelection;
@property(retain, nonatomic) VSFontCenter *fontCenter; // @synthesize fontCenter=_fontCenter;
@property(retain, nonatomic) VSIdentityProviderTableViewDataSource *filteredDataSource; // @synthesize filteredDataSource=_filteredDataSource;
@property(retain, nonatomic) VSIdentityProviderTableViewDataSource *unfilteredDataSource; // @synthesize unfilteredDataSource=_unfilteredDataSource;
@property(retain, nonatomic) VSSearchBarDelegate *searchBarDelegate; // @synthesize searchBarDelegate=_searchBarDelegate;
@property(retain, nonatomic) VSIdentityProviderFilter *filter; // @synthesize filter=_filter;
@property(retain, nonatomic) VSOnboardingInfoCenter *onboardingInfoCenter; // @synthesize onboardingInfoCenter=_onboardingInfoCenter;
@property(retain, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
@property(copy, nonatomic) NSString *resourceTitle; // @synthesize resourceTitle=_resourceTitle;
@property(copy, nonatomic) NSString *requestingAppDisplayName; // @synthesize requestingAppDisplayName=_requestingAppDisplayName;
@property(nonatomic) unsigned long long additionalProvidersMode; // @synthesize additionalProvidersMode=_additionalProvidersMode;
@property(copy, nonatomic) NSArray *identityProviders; // @synthesize identityProviders=_identityProviders;
@property(nonatomic, getter=isCancellationAllowed) _Bool cancellationAllowed; // @synthesize cancellationAllowed=_cancellationAllowed;
@property(nonatomic) __weak id <VSIdentityProviderPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didInvalidateIntrinsicContentSizeForTableHeaderFooterView:(id)arg1;
- (void)deselectSelectedProviderAnimated:(_Bool)arg1;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)didDismissSearchController:(id)arg1;
- (void)_performSelectionForIdentityProvider:(id)arg1;
- (void)_showAboutPrivacy:(id)arg1;
- (void)_cancelButtonPressed:(id)arg1;
- (void)_didPickAdditionalIdentityProviders;
- (void)_didPickIdentityProvider:(id)arg1;
- (id)titleForTableFooterView;
- (id)_titleForTableHeaderView;
- (void)_updateTableHeaderTitle;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

