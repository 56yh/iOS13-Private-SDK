//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BSServiceConnectionEndpoint, CALNNotification, NSString;

@interface CALNNotificationResponse : NSObject
{
    CALNNotification *_notification;
    NSString *_actionIdentifier;
    NSString *_originIdentifier;
    BSServiceConnectionEndpoint *_targetConnectionEndpoint;
}

+ (id)responseWithNotification:(id)arg1 actionIdentifier:(id)arg2 originIdentifier:(id)arg3 targetConnectionEndpoint:(id)arg4;
@property(readonly, nonatomic) BSServiceConnectionEndpoint *targetConnectionEndpoint; // @synthesize targetConnectionEndpoint=_targetConnectionEndpoint;
@property(readonly, copy, nonatomic) NSString *originIdentifier; // @synthesize originIdentifier=_originIdentifier;
@property(readonly, copy, nonatomic) NSString *actionIdentifier; // @synthesize actionIdentifier=_actionIdentifier;
@property(readonly, nonatomic) CALNNotification *notification; // @synthesize notification=_notification;
- (id)description;
- (_Bool)isEqualToResponse:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithNotification:(id)arg1 actionIdentifier:(id)arg2 originIdentifier:(id)arg3 targetConnectionEndpoint:(id)arg4;

@end

