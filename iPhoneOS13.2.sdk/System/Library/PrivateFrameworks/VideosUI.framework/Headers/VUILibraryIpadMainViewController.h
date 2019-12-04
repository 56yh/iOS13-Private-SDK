//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideosUI/VUILibraryFetchControllerViewController.h>

#import <VideosUI/UIGestureRecognizerDelegate-Protocol.h>
#import <VideosUI/VUILibraryCategoryMenuViewModelDelegate-Protocol.h>
#import <VideosUI/VUILibrarySplitViewControllerDelegate-Protocol.h>

@class NSSet, NSString, VUIDownloadViewController, VUILibraryCategoryMenuViewModel, VUILibrarySplitViewController;

__attribute__((visibility("hidden")))
@interface VUILibraryIpadMainViewController : VUILibraryFetchControllerViewController <VUILibraryCategoryMenuViewModelDelegate, VUILibrarySplitViewControllerDelegate, UIGestureRecognizerDelegate>
{
    _Bool _areLocalMediaItemsAvailable;
    VUILibraryCategoryMenuViewModel *_categoryViewModel;
    NSSet *_validCategories;
    VUILibrarySplitViewController *_librarySplitViewController;
    VUIDownloadViewController *_downloadViewController;
}

@property(retain, nonatomic) VUIDownloadViewController *downloadViewController; // @synthesize downloadViewController=_downloadViewController;
@property(retain, nonatomic) VUILibrarySplitViewController *librarySplitViewController; // @synthesize librarySplitViewController=_librarySplitViewController;
@property(retain, nonatomic) NSSet *validCategories; // @synthesize validCategories=_validCategories;
@property(retain, nonatomic) VUILibraryCategoryMenuViewModel *categoryViewModel; // @synthesize categoryViewModel=_categoryViewModel;
@property(nonatomic) _Bool areLocalMediaItemsAvailable; // @synthesize areLocalMediaItemsAvailable=_areLocalMediaItemsAvailable;
- (_Bool)vui_ppt_isLoading;
- (void)_updateVisibleViewControllerForCategories:(id)arg1 error:(id)arg2;
- (void)categoryViewModel:(id)arg1 categoriesDidChange:(id)arg2;
- (void)categoryViewModel:(id)arg1 fetchDidCompleteWithCategories:(id)arg2 error:(id)arg3;
- (void)_setupDownloadViewController;
- (void)_accountsChanged:(id)arg1;
- (void)_deviceMediaLibraryUpdateStateDidChange:(id)arg1;
- (void)_stopMonitoringDeviceMediaLibraryInitialUpdate;
- (void)_startMonitoringDeviceMediaLibraryInitialUpdate;
- (_Bool)_isDeviceMediaLibraryInitialUpdateInProgress;
- (void)_networkReachabilityDidChange:(id)arg1;
- (void)_removeNotificationObserversWithDeviceLibrary:(id)arg1;
- (void)_removeMediaLibraryNotificationObservers;
- (void)_addNotificationObserversWithDeviceLibrary:(id)arg1;
- (void)_addMediaLibraryNotificationObservers;
- (id)_deviceMediaLibrary;
- (void)librarySplitViewControllerShouldDismiss:(id)arg1;
- (void)loadView;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithMediaLibrary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

