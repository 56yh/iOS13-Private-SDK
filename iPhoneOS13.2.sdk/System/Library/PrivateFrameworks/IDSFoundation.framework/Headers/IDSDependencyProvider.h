//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDSFoundation/IDSKeychainAdapter-Protocol.h>
#import <IDSFoundation/IDSPushAdapter-Protocol.h>
#import <IDSFoundation/IDSServiceLoader-Protocol.h>
#import <IDSFoundation/IDSXPCAdapter-Protocol.h>

@class NSMutableDictionary, NSString;

@interface IDSDependencyProvider : NSObject <IDSServiceLoader, IDSKeychainAdapter, IDSPushAdapter, IDSXPCAdapter>
{
    NSMutableDictionary *_registeredAdapters;
}

+ (void)registerObject:(id)arg1 forProtocol:(id)arg2;
+ (id)registeredObjectForProtocol:(id)arg1;
+ (id)userDefaults;
+ (id)systemMonitorAdapter;
+ (id)keychainAdapter;
+ (id)XPCAdapter;
+ (id)serviceLoader;
+ (id)pushAdapter;
+ (id)sharedProvider;
- (void)registerObject:(id)arg1 forProtocol:(id)arg2;
- (id)registeredObjectForProtocol:(id)arg1;
- (id)loadServiceDictionaries;
- (_Bool)removeKeychainDataOnService:(id)arg1 account:(id)arg2 error:(int *)arg3;
- (_Bool)getKeychainData:(id *)arg1 service:(id)arg2 account:(id)arg3 accessGroup:(id)arg4 error:(int *)arg5;
- (_Bool)setKeychainData:(id)arg1 service:(id)arg2 account:(id)arg3 accessGroup:(id)arg4 allowSync:(_Bool)arg5 error:(int *)arg6;
- (id)apsConnectionWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2 enablePushDuringSleep:(_Bool)arg3 queue:(id)arg4;
- (id)placeholderMachPort;
- (id)createServiceConnectionWithServiceName:(const char *)arg1 invalidationHandler:(id /* block */)arg2 terminationHandler:(id /* block */)arg3 peerEventHandler:(id /* block */)arg4 peerQueue:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

