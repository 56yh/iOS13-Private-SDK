//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKitDaemon/CKDOperation.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CKDBatchGetUserPrivacySettingsOperation : CKDOperation
{
    NSArray *_containerPrivacySettings;
}

+ (id)appPermissionGroupsFromContainerPrivacySettings:(id)arg1;
@property(copy, nonatomic) NSArray *containerPrivacySettings; // @synthesize containerPrivacySettings=_containerPrivacySettings;
- (void)main;
- (_Bool)shouldCheckAppVersion;
- (id)activityCreate;

@end

