//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsUIKit/NCNotificationListComponent-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationListRevealCoordinatorDelegate-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationListViewDataSource-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationManagementSuggestionManagerDelegate-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationStructuredSectionListDelegate-Protocol.h>
#import <UserNotificationsUIKit/UIGestureRecognizerDelegate-Protocol.h>
#import <UserNotificationsUIKit/UIScrollViewDelegate-Protocol.h>

@class NCNotificationListCache, NCNotificationListRevealCoordinator, NCNotificationListStalenessEventTracker, NCNotificationListView, NCNotificationManagementSuggestionManager, NCNotificationStructuredSectionList, NSMutableArray, NSString;
@protocol NCNotificationMasterListDelegate;

@interface NCNotificationMasterList : NSObject <NCNotificationListViewDataSource, NCNotificationListRevealCoordinatorDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegate, NCNotificationStructuredSectionListDelegate, NCNotificationManagementSuggestionManagerDelegate, NCNotificationListComponent>
{
    _Bool _deviceAuthenticated;
    _Bool _adjustsFontForContentSizeCategory;
    _Bool _notificationHistoryRevealed;
    _Bool _shouldAllowNotificationHistoryReveal;
    _Bool _missedSectionActive;
    NSString *_logDescription;
    id <NCNotificationMasterListDelegate> _delegate;
    NCNotificationListView *_masterListView;
    NCNotificationManagementSuggestionManager *_suggestionManager;
    NSMutableArray *_notificationSections;
    NCNotificationListRevealCoordinator *_revealCoordinator;
    NCNotificationListCache *_notificationListCache;
    NCNotificationListStalenessEventTracker *_notificationListStalenessEventTracker;
    NCNotificationStructuredSectionList *_incomingSectionList;
    NCNotificationStructuredSectionList *_historySectionList;
    NCNotificationStructuredSectionList *_missedSectionList;
    id /* block */ _scrollCompletionBlock;
    double _scrollCompletionBlockOffsetThreshold;
}

@property(nonatomic) double scrollCompletionBlockOffsetThreshold; // @synthesize scrollCompletionBlockOffsetThreshold=_scrollCompletionBlockOffsetThreshold;
@property(copy, nonatomic) id /* block */ scrollCompletionBlock; // @synthesize scrollCompletionBlock=_scrollCompletionBlock;
@property(retain, nonatomic) NCNotificationStructuredSectionList *missedSectionList; // @synthesize missedSectionList=_missedSectionList;
@property(retain, nonatomic) NCNotificationStructuredSectionList *historySectionList; // @synthesize historySectionList=_historySectionList;
@property(retain, nonatomic) NCNotificationStructuredSectionList *incomingSectionList; // @synthesize incomingSectionList=_incomingSectionList;
@property(nonatomic, getter=isMissedSectionActive) _Bool missedSectionActive; // @synthesize missedSectionActive=_missedSectionActive;
@property(nonatomic) _Bool shouldAllowNotificationHistoryReveal; // @synthesize shouldAllowNotificationHistoryReveal=_shouldAllowNotificationHistoryReveal;
@property(retain, nonatomic) NCNotificationListStalenessEventTracker *notificationListStalenessEventTracker; // @synthesize notificationListStalenessEventTracker=_notificationListStalenessEventTracker;
@property(retain, nonatomic) NCNotificationListCache *notificationListCache; // @synthesize notificationListCache=_notificationListCache;
@property(retain, nonatomic) NCNotificationListRevealCoordinator *revealCoordinator; // @synthesize revealCoordinator=_revealCoordinator;
@property(retain, nonatomic) NSMutableArray *notificationSections; // @synthesize notificationSections=_notificationSections;
@property(nonatomic, getter=isNotificationHistoryRevealed) _Bool notificationHistoryRevealed; // @synthesize notificationHistoryRevealed=_notificationHistoryRevealed;
@property(retain, nonatomic) NCNotificationManagementSuggestionManager *suggestionManager; // @synthesize suggestionManager=_suggestionManager;
@property(retain, nonatomic) NCNotificationListView *masterListView; // @synthesize masterListView=_masterListView;
@property(nonatomic) __weak id <NCNotificationMasterListDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
@property(nonatomic, getter=isDeviceAuthenticated) _Bool deviceAuthenticated; // @synthesize deviceAuthenticated=_deviceAuthenticated;
@property(copy, nonatomic) NSString *logDescription; // @synthesize logDescription=_logDescription;
- (void)_migrateNotificationsFromList:(id)arg1 toList:(id)arg2 passingTest:(id /* block */)arg3 hideToList:(_Bool)arg4 clearRequests:(_Bool)arg5;
- (void)_insertNotificationRequest:(id)arg1;
- (void)_sortNotificationGroupsIfNecessary;
- (void)_regroupAllNotificationGroups;
- (id)_sectionForNotificationRequest:(id)arg1;
- (_Bool)_shouldDNDDelayDeliveryOfNotificationRequest:(id)arg1;
- (_Bool)_isNotificationRequestForHistorySection:(id)arg1;
- (_Bool)_isNotificationRequestForIncomingSection:(id)arg1;
- (id)_newMissedSectionListForReason:(unsigned long long)arg1;
- (void)_setupNotificationSectionLists;
- (id)_newNotificationSectionListWithTitle:(id)arg1 notificationListViewRevealed:(_Bool)arg2 logDescription:(id)arg3;
- (void)_updateVisibleRectForContentOffset:(struct CGPoint)arg1;
- (_Bool)adjustForContentSizeCategoryChange;
- (void)adjustForLegibilitySettingsChange:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)notificationManagementSuggestionManager:(id)arg1 requestsSectionSettingsForSectionIdentifier:(id)arg2;
- (void)notificationManagementSuggestionManager:(id)arg1 requestsPresentingNotificationManagementViewType:(unsigned long long)arg2 forNotificationRequest:(id)arg3 withPresentingView:(id)arg4;
- (void)notificationManagementSuggestionManager:(id)arg1 requestsUpdatingContentForNotificationRequest:(id)arg2;
- (void)revealCoordinatorDidScrollToReveal:(id)arg1;
- (void)notificationListRevealCoordinator:(id)arg1 updatedRevealState:(_Bool)arg2;
- (id)subListsForNotificationListRevealCoordinator:(id)arg1;
- (_Bool)notificationListRevealCoordinatorShouldAllowReveal:(id)arg1;
- (void)recycleView:(id)arg1;
- (unsigned long long)notificationListViewNumberOfItems:(id)arg1;
- (_Bool)notificationListViewIsGroup:(id)arg1;
- (id)notificationListView:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2;
- (double)notificationListView:(id)arg1 heightForItemAtIndex:(unsigned long long)arg2;
- (_Bool)notificationStructuredSectionList:(id)arg1 shouldScrollToTopForGroupList:(id)arg2;
- (void)notificationStructuredSectionList:(id)arg1 requestsScrollingToContentOffset:(double)arg2 withCompletion:(id /* block */)arg3;
- (_Bool)notificationStructuredSectionList:(id)arg1 shouldFilterNotificationRequest:(id)arg2;
- (id)notificationStructuredSectionList:(id)arg1 requestsAuxiliaryOptionsContentProviderForNotificationRequest:(id)arg2 isLongLook:(_Bool)arg3;
- (void)notificationListComponentRequestsClearingAllNotificationRequests:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)updateNotificationSectionSettings:(id)arg1 previousSectionSettings:(id)arg2;
- (void)reloadNotificationRequest:(id)arg1;
- (void)modifyNotificationRequest:(id)arg1;
- (void)removeNotificationRequest:(id)arg1;
- (void)insertNotificationRequest:(id)arg1;
@property(readonly, nonatomic) unsigned long long notificationCount;
@property(readonly, nonatomic) unsigned long long count;
- (void)collapseGroupForNotificationRequest:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)expandGroupForNotificationRequest:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)notificationRequestWithNotificationIdentifier:(id)arg1 sectionIdentifier:(id)arg2;
- (void)toggleMissedSectionActive:(_Bool)arg1 reason:(unsigned long long)arg2;
- (void)toggleFilteringForSectionIdentifier:(id)arg1 shouldFilter:(_Bool)arg2;
- (void)listViewControllerPresentedByUserAction;
- (void)migrateNotifications;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(copy, nonatomic) NSString *preferredContentSizeCategory;
@property(readonly) Class superclass;

@end

