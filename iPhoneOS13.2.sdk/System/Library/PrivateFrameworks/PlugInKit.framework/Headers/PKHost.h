//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMapTable, NSMutableDictionary, PKDaemonClient;
@protocol OS_dispatch_queue;

@interface PKHost : NSObject
{
    NSDictionary *_hostInfoPlist;
    NSMutableDictionary *_activePlugIns;
    NSMutableDictionary *_activeOneShots;
    NSMapTable *_discoveryMap;
    NSObject<OS_dispatch_queue> *_hostQueue;
    PKDaemonClient *_daemon;
}

+ (id)defaultHost;
@property(retain) PKDaemonClient *daemon; // @synthesize daemon=_daemon;
@property(retain) NSObject<OS_dispatch_queue> *hostQueue; // @synthesize hostQueue=_hostQueue;
@property(retain) NSMapTable *discoveryMap; // @synthesize discoveryMap=_discoveryMap;
@property(retain) NSMutableDictionary *activeOneShots; // @synthesize activeOneShots=_activeOneShots;
@property(retain) NSMutableDictionary *activePlugIns; // @synthesize activePlugIns=_activePlugIns;
@property(readonly) NSDictionary *hostInfoPlist; // @synthesize hostInfoPlist=_hostInfoPlist;
- (void)deactivatePlugIn:(id)arg1;
- (id)activatePlugIn:(id)arg1;
- (id)activePlugInForIdentifier:(id)arg1;
- (void)setExtensionState:(id)arg1 forPlugIn:(id)arg2;
- (void)setElection:(long long)arg1 forPlugIn:(id)arg2;
- (void)readyPlugIns:(id)arg1 synchronously:(_Bool)arg2 environment:(id)arg3 ready:(id /* block */)arg4;
- (void)accessPlugIns:(id)arg1 synchronously:(_Bool)arg2 flags:(unsigned long long)arg3 extensions:(id /* block */)arg4;
- (void)cancelPlugInDiscovery:(id)arg1;
- (id)continuouslyDiscoverPlugInsForAttributes:(id)arg1 flags:(unsigned long long)arg2 found:(id /* block */)arg3;
- (id)rewriteDiscoveryAttributes:(id)arg1 flags:(unsigned long long)arg2;
- (void)discoverPlugInsForAttributes:(id)arg1 flags:(unsigned long long)arg2 found:(id /* block */)arg3;
- (void)findPlugInByPathURL:(id)arg1 reply:(id /* block */)arg2;
- (void)findPlugInByUUID:(id)arg1 reply:(id /* block */)arg2;
- (id)init;

@end

