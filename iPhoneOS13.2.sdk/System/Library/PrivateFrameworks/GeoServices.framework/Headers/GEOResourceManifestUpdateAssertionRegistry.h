//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOPListStateCapturing-Protocol.h>

@class NSMutableArray, NSString, geo_isolater;

@interface GEOResourceManifestUpdateAssertionRegistry : NSObject <GEOPListStateCapturing>
{
    geo_isolater *_isolation;
    NSMutableArray *_assertions;
    unsigned long long _stateCaptureHandle;
}

+ (id)sharedRegistry;
- (id)captureStatePlistWithHints:(struct os_state_hints_s *)arg1;
- (id)activeAssertionsDescription;
- (_Bool)hasActiveAssertions;
- (void)removeAssertion:(id)arg1;
- (id)addInternalAssertionForReason:(id)arg1;
- (id)addAssertionForProcess:(id)arg1 reason:(id)arg2 creationTimestamp:(double)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

