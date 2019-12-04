//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinDistributorCompanion/BLTTTestServiceServerExportedInterface-Protocol.h>


@class NSMutableArray, NSString, NSXPCListener;

@interface BLTTestServiceServer : NSObject <NSXPCListenerDelegate, BLTTTestServiceServerExportedInterface>
{
    NSMutableArray *_clientConnections;
    NSXPCListener *_listener;
}

+ (id)sharedTestServer;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) NSMutableArray *clientConnections; // @synthesize clientConnections=_clientConnections;
- (void)removeSectionID:(id)arg1 completion:(id /* block */)arg2;
- (void)overriddenSettingsWithCompletion:(id /* block */)arg1;
- (void)originalSettingsWithCompletion:(id /* block */)arg1;
- (void)settingOverridesWithCompletion:(id /* block */)arg1;
- (void)willAlertForSectionID:(id)arg1 subtype:(long long)arg2 completion:(id /* block */)arg3;
- (void)disableStandaloneTestModeWithCompletion:(id /* block */)arg1;
- (void)enableStandaloneTestModeWithMinimumSendDelay:(unsigned long long)arg1 maximumSendDelay:(unsigned long long)arg2 minimumResponseDelay:(unsigned long long)arg3 maximumResponseDelay:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (void)getStandaloneTestModeEnabledWithCompletion:(id /* block */)arg1;
- (void)clearSectionInfoSentCacheWithCompletion:(id /* block */)arg1;
- (void)spoolSectionInfoWithCompletion:(id /* block */)arg1;
- (void)sendAllSectionInfoWithSpool:(_Bool)arg1 completion:(id /* block */)arg2;
- (void)sendSectionInfoWithSectionID:(id)arg1 completion:(id /* block */)arg2;
- (void)addBulletin:(id)arg1 forFeed:(unsigned long long)arg2 playLightsAndSirens:(_Bool)arg3 attachment:(id)arg4 attachmentType:(long long)arg5 alwaysSend:(_Bool)arg6 completion:(id /* block */)arg7;
- (void)_removeClientConnection:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)resume;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

