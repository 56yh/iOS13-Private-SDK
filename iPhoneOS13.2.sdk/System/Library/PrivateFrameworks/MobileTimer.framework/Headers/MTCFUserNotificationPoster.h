//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MTCFUserNotificationPoster : NSObject
{
    NSMutableDictionary *_notifications;
}

+ (void)cancelNotificationsWithIdentifiers:(id)arg1;
+ (void)postNotificationWithIdentifier:(id)arg1 title:(id)arg2 message:(id)arg3 defaultButtonTitle:(id)arg4 otherButtonTitle:(id)arg5 bypassDND:(_Bool)arg6 handler:(id /* block */)arg7;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *notifications; // @synthesize notifications=_notifications;
- (id)init;

@end

