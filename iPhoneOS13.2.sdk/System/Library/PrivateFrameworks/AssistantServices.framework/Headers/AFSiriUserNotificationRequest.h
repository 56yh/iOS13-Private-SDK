//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFSiriExternalRequest-Protocol.h>

@class NSString, UNNotification;

@interface AFSiriUserNotificationRequest : NSObject <AFSiriExternalRequest>
{
    UNNotification *_notification;
    NSString *_sourceAppId;
}

+ (_Bool)supportedForApplicationWithBundleId:(id)arg1;
+ (_Bool)supportedOnPlatform;
+ (_Bool)canBeHandled;
- (void)performRequestWithCompletion:(id /* block */)arg1;
- (id)initWithUserNotification:(id)arg1 sourceAppId:(id)arg2;

@end

