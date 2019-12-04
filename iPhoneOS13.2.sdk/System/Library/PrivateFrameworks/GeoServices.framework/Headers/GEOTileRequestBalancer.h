//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOPListStateCapturing-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOTileRequestBalancer : NSObject <GEOPListStateCapturing>
{
    void *_requesters;
    void *_randomIndexGenerator;
    unsigned long long _maxRunningOperationsCount;
    unsigned long long _stateCaptureHandle;
}

+ (id)balancerForRequester:(id)arg1 tileKeys:(id)arg2 priorities:(id)arg3;
+ (void)setMaxRunningOperationsCount:(unsigned long long)arg1;
+ (unsigned long long)maxRunningOperationsCount;
- (__wrap_iter_9a08789a)_next_requester;
- (void)_startOperationsWithAvailableCount:(unsigned long long)arg1;
- (void)_startOperations;
- (void)_requester:(id)arg1 removeTileKey:(struct _GEOTileKey)arg2;
- (void)requester:(id)arg1 removeTileKey:(const struct _GEOTileKey *)arg2;
- (void)_requester:(id)arg1 updatePriority:(unsigned int)arg2 tileKey:(struct _GEOTileKey)arg3;
- (void)requester:(id)arg1 updatePriority:(unsigned int)arg2 tileKey:(const struct _GEOTileKey *)arg3;
- (void)_requester:(id)arg1 incrementRunningOperationsCount:(unsigned long long)arg2;
- (void)_requester:(id)arg1 updateRunningOperationsCount:(unsigned long long)arg2;
- (void)requester:(id)arg1 updateRunningOperationsCount:(unsigned long long)arg2;
- (void)_pruneEmptyRequesters;
- (void)_removeRequester:(id)arg1;
- (void)removeRequester:(id)arg1;
- (void)_addRequester:(id)arg1 tileKeys:(id)arg2 priorities:(id)arg3;
- (vector_49336e52 *)requesters;
- (void)dealloc;
- (id)_initWithMaxRunningOperationsCount:(unsigned long long)arg1;
- (id)init;
- (id)captureStatePlistWithHints:(struct os_state_hints_s *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
