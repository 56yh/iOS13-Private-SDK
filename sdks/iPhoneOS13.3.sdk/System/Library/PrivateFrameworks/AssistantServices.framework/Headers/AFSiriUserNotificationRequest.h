//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFSiriExternalRequest-Protocol.h>

@class NSString, UNNotification;

@interface AFSiriUserNotificationRequest : NSObject <AFSiriExternalRequest>
{
    UNNotification *_notification;
    NSString *_sourceAppId;
}

+ (BOOL)supportedForApplicationWithBundleId:(id)arg1;
+ (BOOL)supportedOnPlatform;
+ (BOOL)canBeHandled;
// - (void).cxx_destruct;
- (void)performRequestWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)initWithUserNotification:(id)arg1 sourceAppId:(id)arg2;

@end

