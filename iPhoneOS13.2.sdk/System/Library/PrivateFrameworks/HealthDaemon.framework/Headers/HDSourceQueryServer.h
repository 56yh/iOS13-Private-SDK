//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDQueryServer.h>

#import <HealthDaemon/HDDataObserver-Protocol.h>

@class NSMutableSet, NSString;

@interface HDSourceQueryServer : HDQueryServer <HDDataObserver>
{
    _Bool _deliversUpdates;
    NSMutableSet *_sources;
}

+ (id)requiredEntitlements;
+ (Class)queryClass;
- (void)_queue_sourceAdded:(id)arg1;
- (void)_sourcesForObjectsOfType:(id)arg1 filter:(id)arg2 completion:(id /* block */)arg3;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (double)_queue_queryLogThreshold;
- (void)_queue_start;
- (_Bool)_shouldListenForUpdates;
- (id)sourceClientProxy;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

