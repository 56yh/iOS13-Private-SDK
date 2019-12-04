//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinBoard/BBSettingsGatewayClientInterface-Protocol.h>

@class NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface BBSettingsGateway : NSObject <BBSettingsGatewayClientInterface>
{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (void)initialize;
+ (id)serverInterface;
+ (id)clientInterface;
- (void)getEffectiveGlobalSpokenNotificationSettingWithCompletion:(id /* block */)arg1;
- (long long)effectiveGlobalSpokenNotificationSetting;
- (void)setEffectiveGlobalSpokenNotificationSetting:(long long)arg1;
- (void)getEffectiveGlobalContentPreviewsSettingWithCompletion:(id /* block */)arg1;
- (long long)effectiveGlobalContentPreviewsSetting;
- (void)setEffectiveGlobalContentPreviewsSetting:(long long)arg1;
- (void)updateSectionInfoForSectionID:(id)arg1 withHandler:(id /* block */)arg2;
- (void)setSectionInfo:(id)arg1 forSectionID:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)setSectionInfo:(id)arg1 forSectionID:(id)arg2;
- (void)getSectionInfoForActiveSectionsWithCompletion:(id /* block */)arg1;
- (id)allSectionIDs;
- (id)activeSectionInfo;
- (void)getEffectiveSectionInfoForSectionID:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)getSectionInfoForSectionID:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)sectionInfoForSectionID:(id)arg1;
- (void)getEffectiveSectionInfoForSectionIDs:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)effectiveSectionInfoForSectionIDs:(id)arg1;
- (id)effectiveSectionInfoForSectionID:(id)arg1;
- (void)getSectionInfoForSectionIDs:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)sectionInfoForSectionIDs:(id)arg1;
- (void)getSectionInfoWithCompletion:(id /* block */)arg1;
- (id)allSectionInfo;
- (id)allEffectiveSectionInfo;
- (void)invalidate;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

