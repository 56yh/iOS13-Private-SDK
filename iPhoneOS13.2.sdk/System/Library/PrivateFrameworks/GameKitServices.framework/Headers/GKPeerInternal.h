//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameKitServices/GKTableCleanupWhenRemoved-Protocol.h>

@class GKSessionInternal, NSString;

@interface GKPeerInternal : NSObject <GKTableCleanupWhenRemoved>
{
    unsigned int _pid;
    NSString *_displayName;
    NSString *_serviceName;
    _Bool _isBusy;
    GKSessionInternal *_session;
    int _serviceCount;
    struct _DNSServiceRef_t *_resolveService;
    struct _DNSServiceRef_t *_txtRecordService;
    id *_addrList;
    unsigned int *_interfaceList;
    unsigned int _servicePort;
    struct _DNSServiceRef_t **_lookupServiceList;
    int _lookupServiceCount;
    int _lookupServiceSize;
    _Bool _moreResolvesComing;
    double _connectTimeout;
    _Bool _needsToTimeout;
}

+ (void)freeLookupList:(struct _DNSServiceRef_t **)arg1 andAddrList:(id *)arg2 andInterfaceList:(unsigned int *)arg3 count:(int)arg4;
@property _Bool needsToTimeout; // @synthesize needsToTimeout=_needsToTimeout;
@property double connectTimeout; // @synthesize connectTimeout=_connectTimeout;
@property(retain, nonatomic) GKSessionInternal *session; // @synthesize session=_session;
@property _Bool moreResolvesComing; // @synthesize moreResolvesComing=_moreResolvesComing;
@property unsigned int servicePort; // @synthesize servicePort=_servicePort;
@property struct _DNSServiceRef_t *txtRecordService; // @synthesize txtRecordService=_txtRecordService;
@property struct _DNSServiceRef_t *resolveService; // @synthesize resolveService=_resolveService;
@property(getter=isBusy) _Bool busy; // @synthesize busy=_isBusy;
@property(readonly) unsigned int pid; // @synthesize pid=_pid;
@property(readonly) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (void)cleanupForGKTable:(id)arg1;
- (void)stopTXTRecordMonitoring;
- (void)clearResolving;
- (void)stopResolving;
- (int)usableAddrs;
- (void)copyLookupList:(struct _DNSServiceRef_t ***)arg1 count:(int *)arg2;
- (void)setAddr:(const struct sockaddr_in *)arg1 interface:(unsigned int)arg2 forLookupService:(struct _DNSServiceRef_t *)arg3;
- (_Bool)containsLookupService:(struct _DNSServiceRef_t *)arg1;
- (void)removeAndReturnLookupList:(struct _DNSServiceRef_t ***)arg1 andAddrList:(id **)arg2 andInterfaceList:(unsigned int **)arg3 count:(int *)arg4;
- (void)addLookup:(struct _DNSServiceRef_t *)arg1;
- (_Bool)tryDetruncateDisplayName:(id)arg1;
@property int serviceCount; // @synthesize serviceCount=_serviceCount;
- (void)dealloc;
- (id)initWithPID:(unsigned int)arg1 displayName:(id)arg2 serviceName:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

