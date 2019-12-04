//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOResourceManifestTileGroupObserver-Protocol.h>

@class NSString;

@interface GEOReachability : NSObject <GEOResourceManifestTileGroupObserver>
{
    _Bool _networkReachable;
    unsigned long long _errorCount;
    int _symptomsAlternateAdviceToken;
}

+ (id)sharedReachability;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)_reachabilityChanged:(id)arg1;
- (_Bool)networkAvailable;
- (void)reportLoadFailure:(id)arg1;
- (_Bool)anyFailures;
- (void)reportTileLoadSuccess:(id)arg1;
- (void)_resetErrors;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

