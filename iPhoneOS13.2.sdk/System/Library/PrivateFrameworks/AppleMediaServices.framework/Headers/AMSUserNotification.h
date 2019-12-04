//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSBagConsumer-Protocol.h>

@class ACAccount, AMSUserNotificationAction, NSArray, NSDictionary, NSMutableDictionary, NSString, NSURL;

@interface AMSUserNotification : NSObject <AMSBagConsumer>
{
    _Bool _explicitContent;
    _Bool _shouldSuppressDefaultAction;
    ACAccount *_account;
    NSURL *_artworkUrl;
    NSURL *_videoUrl;
    NSArray *_buttonActions;
    AMSUserNotificationAction *_defaultAction;
    NSString *_identifier;
    NSString *_informativeText;
    NSString *_logKey;
    NSDictionary *_metricsEvent;
    NSString *_centerBundleIdentifier;
    NSString *_subtitle;
    NSString *_title;
    NSMutableDictionary *_userInfo;
    long long _intent;
    NSString *_categoryIdentifier;
    NSString *_threadIdentifier;
}

+ (id)handleNotificationResponse:(id)arg1 bagContract:(id)arg2;
+ (id)_cachedImagePathForIdentifier:(id)arg1 assetURL:(id)arg2;
+ (id)_downloadAssetAtUrl:(id)arg1 withIdentifier:(id)arg2 logKey:(id)arg3 bag:(id)arg4;
+ (_Bool)_canParseNotificationWithIdentifier:(id)arg1 userInfo:(id)arg2;
+ (id)bagSubProfileVersion;
+ (id)bagSubProfile;
+ (id)bagKeySet;
+ (void)addRequiredBagKeysToAggregator:(id)arg1;
+ (_Bool)shouldHandleServiceExtensionNotificationRequest:(id)arg1;
+ (_Bool)shouldHandleNotificationResponse:(id)arg1;
+ (id)notificationCenter:(id)arg1 openSettingsForNotification:(id)arg2 bag:(id)arg3;
+ (id)notificationCenter:(id)arg1 didChangeSettings:(id)arg2 bag:(id)arg3;
+ (void)openAppUsingBundleIdentifier:(id)arg1;
+ (void)handleServiceExtensionNotificationRequest:(id)arg1 bag:(id)arg2 withContentHandler:(id /* block */)arg3;
+ (id)handleNotificationResponse:(id)arg1 bag:(id)arg2;
+ (long long)explicitEnabledForCenterBundleID:(id)arg1;
+ (id)notificationWithPayload:(id)arg1 andConfig:(id)arg2;
@property(retain, nonatomic) NSString *threadIdentifier; // @synthesize threadIdentifier=_threadIdentifier;
@property(nonatomic) _Bool shouldSuppressDefaultAction; // @synthesize shouldSuppressDefaultAction=_shouldSuppressDefaultAction;
@property(retain, nonatomic) NSString *categoryIdentifier; // @synthesize categoryIdentifier=_categoryIdentifier;
@property(nonatomic) long long intent; // @synthesize intent=_intent;
@property(retain, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *centerBundleIdentifier; // @synthesize centerBundleIdentifier=_centerBundleIdentifier;
@property(retain, nonatomic) NSDictionary *metricsEvent; // @synthesize metricsEvent=_metricsEvent;
@property(retain, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
@property(retain, nonatomic) NSString *informativeText; // @synthesize informativeText=_informativeText;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) _Bool explicitContent; // @synthesize explicitContent=_explicitContent;
@property(retain, nonatomic) AMSUserNotificationAction *defaultAction; // @synthesize defaultAction=_defaultAction;
@property(retain, nonatomic) NSArray *buttonActions; // @synthesize buttonActions=_buttonActions;
@property(retain, nonatomic) NSURL *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(retain, nonatomic) NSURL *artworkUrl; // @synthesize artworkUrl=_artworkUrl;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)handleSelectedButton:(id)arg1 bagContract:(id)arg2;
- (id)handleSelectedButton:(id)arg1 bag:(id)arg2;
- (void)addButtonAction:(id)arg1;
- (id)createUNNotificationActions;
- (id)createUNNotificationContent;
- (id)createNSUserNotification;
- (id)initWithUNNotification:(id)arg1;
- (id)initWithPayload:(id)arg1 andConfig:(id)arg2;
- (id)_generatePayload;
- (id)initWithNSUserNotification:(id)arg1;
- (id)initWithTitle:(id)arg1 intent:(long long)arg2;
- (id)initWithTitle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

