//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKitDaemon/CKDOperation.h>

__attribute__((visibility("hidden")))
@interface CKDGetUserPrivacySettingsOperation : CKDOperation
{
    long long _discoverable;
}

@property(nonatomic) long long discoverable; // @synthesize discoverable=_discoverable;
- (void)main;
- (void)_handleRetrievedPrivacySettings:(id)arg1;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

