//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface AMSPushConfiguration : NSObject
{
    NSString *_userNotificationExtensionId;
    NSSet *_enabledActionTypes;
}

@property(retain, nonatomic) NSSet *enabledActionTypes; // @synthesize enabledActionTypes=_enabledActionTypes;
@property(retain, nonatomic) NSString *userNotificationExtensionId; // @synthesize userNotificationExtensionId=_userNotificationExtensionId;
- (id)initWithEnabledActionTypes:(id)arg1;

@end

