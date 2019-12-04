//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <GameCenterUI/GKDaemonProxyDataUpdateDelegate-Protocol.h>
#import <GameCenterUI/GKDashboardServiceInterface-Protocol.h>
#import <GameCenterUI/GKExtensionHostProtocol-Protocol.h>
#import <GameCenterUI/GKExtensionProtocol-Protocol.h>

@class GKGame, NSLayoutConstraint, NSString, UIViewController, UIVisualEffectView;

@interface GKExtensionViewController : UINavigationController <GKDaemonProxyDataUpdateDelegate, GKExtensionProtocol, GKExtensionHostProtocol, GKDashboardServiceInterface>
{
    _Bool _alwaysShowDoneButton;
    _Bool _adjustTopConstraint;
    _Bool _hasInitialData;
    int _hostPID;
    double _statusBarHeight;
    UIViewController *_contentViewController;
    GKGame *_game;
    UIVisualEffectView *_effectView;
    NSLayoutConstraint *_effectBottomConstraint;
    NSLayoutConstraint *_effectTopConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *effectTopConstraint; // @synthesize effectTopConstraint=_effectTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *effectBottomConstraint; // @synthesize effectBottomConstraint=_effectBottomConstraint;
@property(nonatomic) _Bool hasInitialData; // @synthesize hasInitialData=_hasInitialData;
@property(nonatomic) _Bool adjustTopConstraint; // @synthesize adjustTopConstraint=_adjustTopConstraint;
@property(nonatomic) UIVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property(nonatomic) int hostPID; // @synthesize hostPID=_hostPID;
@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
@property(retain, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(nonatomic) double statusBarHeight; // @synthesize statusBarHeight=_statusBarHeight;
@property(nonatomic) _Bool alwaysShowDoneButton; // @synthesize alwaysShowDoneButton=_alwaysShowDoneButton;
- (void)setToDarkBackground;
- (void)setToLightBackground;
- (void)finish;
- (void)messageFromClient:(id)arg1;
- (void)extensionIsFinishing;
- (void)extensionIsCanceling;
- (void)messageFromExtension:(id)arg1;
- (void)sendMessageToClient:(id)arg1;
- (id)hostObjectProxy;
- (void)didShowViewController:(id)arg1 animated:(_Bool)arg2;
- (void)clientWillTerminate;
- (void)clientDidFinish;
- (void)clientDidCancel;
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (double)_statusBarHeightForCurrentInterfaceOrientation;
- (void)donePressed:(id)arg1;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)addDoneButtonToViewController:(id)arg1;
- (void)configureContentViewController;
- (void)constructContentViewController;
- (void)setInitialState:(id)arg1 withReply:(id /* block */)arg2;
- (_Bool)_useBackdropViewForWindowBackground;
- (id)blurEffectForTraitCollection:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)didBecomeActive:(id)arg1;
- (void)willResignActive:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

