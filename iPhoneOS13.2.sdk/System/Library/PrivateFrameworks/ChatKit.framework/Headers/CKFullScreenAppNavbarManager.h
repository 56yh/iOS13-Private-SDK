//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChatKit/CKAvatarNotificationCalloutViewDelegate-Protocol.h>

@class CKAvatarPickerViewController, CKConversation, CKNavigationBarCanvasView, IMBalloonPlugin, NSMutableArray, NSString, NSTimer, UIButton, UILabel;
@protocol CKFullScreenAppNavbarManagerDelegate;

@interface CKFullScreenAppNavbarManager : NSObject <CKAvatarNotificationCalloutViewDelegate>
{
    long long _style;
    id <CKFullScreenAppNavbarManagerDelegate> _delegate;
    IMBalloonPlugin *_plugin;
    UIButton *_dismissButton;
    UIButton *_appIconButton;
    CKNavigationBarCanvasView *_canvasView;
    CKAvatarPickerViewController *_avatarPickerViewController;
    CKConversation *_conversation;
    NSMutableArray *_notificationViews;
    NSTimer *_notificationTimer;
    UILabel *_defaultTitleLabel;
}

@property(retain, nonatomic) UILabel *defaultTitleLabel; // @synthesize defaultTitleLabel=_defaultTitleLabel;
@property(retain, nonatomic) NSTimer *notificationTimer; // @synthesize notificationTimer=_notificationTimer;
@property(retain, nonatomic) NSMutableArray *notificationViews; // @synthesize notificationViews=_notificationViews;
@property(retain, nonatomic) CKConversation *conversation; // @synthesize conversation=_conversation;
@property(retain, nonatomic) CKAvatarPickerViewController *avatarPickerViewController; // @synthesize avatarPickerViewController=_avatarPickerViewController;
@property(retain, nonatomic) CKNavigationBarCanvasView *canvasView; // @synthesize canvasView=_canvasView;
@property(retain, nonatomic) UIButton *appIconButton; // @synthesize appIconButton=_appIconButton;
@property(retain, nonatomic) UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(retain, nonatomic) IMBalloonPlugin *plugin; // @synthesize plugin=_plugin;
@property(nonatomic) __weak id <CKFullScreenAppNavbarManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void)_updateDismissButton;
- (void)_updateTitleLabelText;
- (void)_updateTitleView;
- (void)_configureCanvasView;
- (_Bool)_canShowAvatarView;
- (void)_contactPhotosEnabledChangedNotification:(id)arg1;
- (void)dismissNotifications;
- (void)_dequeueNotificationViews:(id)arg1;
- (void)_addNotificationViewToQueue;
- (void)_startNotificationQueue;
- (long long)_viewModeForCalloutView;
- (void)_removeAllNotifications;
- (void)_invalidateTimer;
- (void)avatarNotificationCalloutViewReceivedTouch:(id)arg1;
- (void)avatarNotificationCalloutViewDidFinishFadeOut:(id)arg1;
- (void)avatarNotificationCalloutViewWillFadeIn:(id)arg1;
- (void)_handleChatDisplayNameChange:(id)arg1;
- (_Bool)_shouldStartnotificationQueue;
- (_Bool)_didReceiveMessageChatItem:(id)arg1 addedChatItems:(id)arg2;
- (void)_handleChatItemDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithConversation:(id)arg1 plugin:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

