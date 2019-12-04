//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSPushParsable-Protocol.h>
#import <AppleMediaServices/AMSUserNotificationIntentDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSPushParsableFollowUp : NSObject <AMSPushParsable, AMSUserNotificationIntentDelegate>
{
}

+ (id)_createNotificationFromFollowUpItem:(id)arg1;
+ (id)_createFollowUpItemFromNotification:(id)arg1;
+ (id)_createFollowUpItemFromPayload:(id)arg1;
+ (_Bool)_shouldClearFollowUpFromPayload:(id)arg1;
+ (_Bool)_shouldAllowFollowUp:(id)arg1;
+ (void)_performPostWithPayload:(id)arg1;
+ (void)_performClearWithPayload:(id)arg1;
+ (void)userNotification:(id)arg1 selectedButtonAction:(id)arg2;
+ (_Bool)shouldSkipAccountCheck;
+ (void)handleNotificationPayload:(id)arg1 config:(id)arg2 bag:(id)arg3;
+ (_Bool)isDeviceOfferNotification:(id)arg1;
+ (void)removeDeviceOfferWithPayload:(id)arg1 logKey:(id)arg2 bag:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
