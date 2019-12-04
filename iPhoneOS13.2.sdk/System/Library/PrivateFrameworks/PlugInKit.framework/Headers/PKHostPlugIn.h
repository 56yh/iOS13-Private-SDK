//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PlugInKit/PKPlugInCore.h>


#import <PlugInKit/PKPlugInPrivate-Protocol.h>

@class NSArray, NSBundle, NSDate, NSDictionary, NSObject, NSString, NSURL, NSUUID, NSUserDefaults, NSXPCConnection, Protocol;
@protocol OS_dispatch_queue, PKCorePlugInProtocol, PKPlugIn;

@interface PKHostPlugIn : PKPlugInCore <PKPlugInPrivate, NSXPCConnectionDelegate>
{
    _Bool _terminating;
    unsigned int _useCount;
    NSUserDefaults *_defaults;
    id /* block */ _notificationBlock;
    NSXPCConnection *_pluginConnection;
    NSObject<OS_dispatch_queue> *__replyQueue;
    NSObject<OS_dispatch_queue> *__syncQueue;
    NSObject<OS_dispatch_queue> *__startQueue;
    id <PKCorePlugInProtocol> _service;
    id <PKCorePlugInProtocol> _syncService;
    NSUUID *_supersedingUUID;
    id <PKPlugIn> _supersededBy;
    NSUUID *_multipleInstanceUUID;
    NSString *_serviceExtension;
    NSDictionary *_discoveryExtensions;
    NSArray *_sandboxExtensions;
    id _queuedHostPrincipal;
    Protocol *_queuedHostProtocol;
    unsigned long long _state;
    id _plugInPrincipal;
    id _embeddedPrincipal;
    NSBundle *_embeddedBundle;
    NSDate *_beganUsingAt;
    NSDictionary *_sourceForm;
    NSDictionary *_environment;
}

@property(retain) NSDictionary *environment; // @synthesize environment=_environment;
@property(retain) NSDictionary *sourceForm; // @synthesize sourceForm=_sourceForm;
@property(retain) NSDate *beganUsingAt; // @synthesize beganUsingAt=_beganUsingAt;
@property _Bool terminating; // @synthesize terminating=_terminating;
@property(retain) NSBundle *embeddedBundle; // @synthesize embeddedBundle=_embeddedBundle;
@property(retain) id embeddedPrincipal; // @synthesize embeddedPrincipal=_embeddedPrincipal;
@property(retain) id plugInPrincipal; // @synthesize plugInPrincipal=_plugInPrincipal;
@property unsigned int useCount; // @synthesize useCount=_useCount;
@property unsigned long long state; // @synthesize state=_state;
@property(retain) Protocol *queuedHostProtocol; // @synthesize queuedHostProtocol=_queuedHostProtocol;
@property(retain) id queuedHostPrincipal; // @synthesize queuedHostPrincipal=_queuedHostPrincipal;
@property(retain) NSArray *sandboxExtensions; // @synthesize sandboxExtensions=_sandboxExtensions;
@property(retain) NSDictionary *discoveryExtensions; // @synthesize discoveryExtensions=_discoveryExtensions;
@property(retain) NSString *serviceExtension; // @synthesize serviceExtension=_serviceExtension;
@property(retain) NSUUID *multipleInstanceUUID; // @synthesize multipleInstanceUUID=_multipleInstanceUUID;
@property __weak id <PKPlugIn> supersededBy; // @synthesize supersededBy=_supersededBy;
@property(retain) NSUUID *supersedingUUID; // @synthesize supersedingUUID=_supersedingUUID;
@property(retain) id <PKCorePlugInProtocol> syncService; // @synthesize syncService=_syncService;
@property(retain) id <PKCorePlugInProtocol> service; // @synthesize service=_service;
@property(retain) NSObject<OS_dispatch_queue> *_startQueue; // @synthesize _startQueue=__startQueue;
@property(retain) NSObject<OS_dispatch_queue> *_syncQueue; // @synthesize _syncQueue=__syncQueue;
@property(retain) NSObject<OS_dispatch_queue> *_replyQueue; // @synthesize _replyQueue=__replyQueue;
@property(retain) NSXPCConnection *pluginConnection; // @synthesize pluginConnection=_pluginConnection;
@property(copy) id /* block */ notificationBlock; // @synthesize notificationBlock=_notificationBlock;
- (void)changeState:(unsigned long long)arg1;
- (void)messageTraceUsage;
- (void)unwind:(unsigned long long)arg1 force:(_Bool)arg2;
- (_Bool)endUsingWithError:(id *)arg1;
- (void)endUsing:(id /* block */)arg1;
- (_Bool)useBundle:(id)arg1 error:(id *)arg2;
- (_Bool)isSandboxed;
- (_Bool)loadExtensions:(id)arg1 error:(id *)arg2;
- (void)setBootstrapWithSubsystemOptions:(id)arg1;
- (void)preparePlugInUsingService:(id)arg1 completion:(id /* block */)arg2;
- (void)startPlugInSynchronously:(_Bool)arg1 subsystemOptions:(id)arg2 completion:(id /* block */)arg3;
- (_Bool)beginUsingWithSubsystemOptions:(id)arg1 error:(id *)arg2;
- (_Bool)beginUsingWithError:(id *)arg1;
- (void)beginUsingWithSubsystemOptions:(id)arg1 completion:(id /* block */)arg2;
- (void)beginUsing:(id /* block */)arg1;
@property(readonly) NSUUID *effectiveUUID;
- (id)createInstanceWithUUID:(id)arg1;
- (void)setHostPrincipal:(id)arg1 withProtocol:(id)arg2;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;
- (void)setReplyQueue:(id)arg1;
@property(readonly) _Bool spent;
@property(readonly) _Bool active;
- (void)resume;
- (void)suspend;
- (void)updateFromForm:(id)arg1;
@property(retain) NSDictionary *extensionState;
@property long long userElection;
@property(readonly) NSUserDefaults *defaults; // @synthesize defaults=_defaults;
@property(readonly, copy) NSString *description;
- (id)initWithForm:(id)arg1;

// Remaining properties
@property(readonly) NSDictionary *attributes;
@property(readonly) NSDictionary *bundleInfoDictionary;
@property(readonly) NSURL *containingUrl;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSDictionary *entitlements;
@property(readonly) NSUInteger hash;
@property(readonly) NSString *identifier;
@property(readonly) NSString *localizedContainingName;
@property(readonly) NSDictionary *localizedFileProviderActionNames;
@property(readonly) NSString *localizedName;
@property(readonly) NSString *localizedShortName;
@property(readonly) _Bool onSystemVolume;
@property(readonly) NSDictionary *plugInDictionary;
@property(readonly) Class superclass;
@property(readonly) NSDate *timestamp;
@property(readonly) NSURL *url;
@property(readonly) NSUUID *uuid;
@property(readonly) NSString *version;

@end

