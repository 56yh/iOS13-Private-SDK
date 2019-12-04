//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class CKBrowserDragManager, IMBalloonPlugin, IMBalloonPluginDataSource, NSArray, NSData, NSNumber, NSObject, NSString, NSURL, UIViewController;
@protocol CKBrowserViewControllerSendDelegate, UIViewControllerTransitioningDelegate;

@protocol CKBrowserViewControllerProtocol 
@property(readonly, nonatomic) _Bool inFullScreenModalPresentation;
@property(readonly, nonatomic) _Bool inExpandedPresentation;
@property(readonly, nonatomic) _Bool shouldShowChatChrome;
@property(readonly, nonatomic) long long browserPresentationStyle;
@property(readonly, nonatomic) _Bool mayBeKeptInViewHierarchy;
@property(readonly, nonatomic, getter=isDismissing) _Bool dismissing;
@property(nonatomic) _Bool isPrimaryViewController;
@property(readonly, nonatomic) _Bool shouldSuppressEntryView;
@property(readonly, nonatomic) _Bool supportsQuickView;
@property(readonly, nonatomic) _Bool wantsOpaqueUI;
@property(readonly, nonatomic) _Bool wantsDarkUI;
@property(nonatomic) NSString *conversationID;
@property(nonatomic) _Bool isiMessage;
@property(retain, nonatomic) IMBalloonPluginDataSource *balloonPluginDataSource;
@property(readonly, nonatomic) IMBalloonPlugin *balloonPlugin;
@property(nonatomic) __weak NSObject<CKBrowserViewControllerSendDelegate> *sendDelegate;
@property(retain, nonatomic) UIViewController *presentationViewController;
- (_Bool)isLoaded;
- (void)dismiss;
- (id)initWithBalloonPlugin:(IMBalloonPlugin *)arg1;
- (id)initWithBalloonPlugin:(IMBalloonPlugin *)arg1 dataSource:(IMBalloonPluginDataSource *)arg2;

@optional
@property(readonly, nonatomic) __weak id <UIViewControllerTransitioningDelegate> parentTransitioningDelegate;
@property(readonly, nonatomic) long long parentModalPresentationStyle;
@property(retain, nonatomic) NSNumber *adamID;
@property(readonly, nonatomic) _Bool canReplaceDataSource;
@property(readonly, nonatomic) struct CGRect horizontalSwipeExclusionRect;
@property(readonly, nonatomic) UIViewController *remoteViewController;
@property(nonatomic) long long currentBrowserConsumer;
@property(readonly, nonatomic) CKBrowserDragManager *browserDragManager;
@property(readonly, nonatomic) unsigned long long badgeValue;
@property(retain, nonatomic) NSData *conversationEngramID;
@property(readonly, nonatomic) _Bool wasExpandedPresentation;
@property(retain, nonatomic) NSArray *recipients;
@property(retain, nonatomic) NSString *sender;
- (void)volumeButtonPressed:(_Bool)arg1;
- (void)killExtensionProcess;
- (void)dropAssertion;
- (void)setStoreLaunchURL:(NSURL *)arg1 sourceApplication:(NSString *)arg2;
- (void)messageAddedWithDataSource:(IMBalloonPluginDataSource *)arg1;
- (void)viewDidTransitionToCompactPresentation;
- (void)viewWillTransitionToCompactPresentation;
- (void)viewDidTransitionToExpandedPresentation;
- (void)viewWillTransitionToExpandedPresentation;
- (void)browserScrolledOnScreen;
- (void)browserScrolledOffScreen;
- (void)endDisablingUserInteraction;
- (void)beginDisablingUserInteraction;
- (void)didTransitionFromOrientation:(long long)arg1 toOrientation:(long long)arg2;
- (void)saveSnapshotForBrowserViewController;
- (void)deferredForceTearDownRemoteView;
- (void)forceTearDownRemoteView;
- (void)unloadRemoteView;
- (void)loadRemoteView;
- (void)prepareForDisplay;
- (id)cancelTouchesInView;
- (void)_updateContentOverlayInsetsForSelfAndChildren;
- (void)endSuppressingAppearanceMethods;
- (void)beginSuppressingAppearanceMethods;
- (NSData *)requestSnapshotDataForPersistance;
@end

