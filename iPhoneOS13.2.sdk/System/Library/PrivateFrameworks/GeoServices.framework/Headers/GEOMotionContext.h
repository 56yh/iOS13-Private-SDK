//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOMotionContextProviderDelegate-Protocol.h>

@class NSString;
@protocol GEOMotionContextDelegate, GEOMotionContextProvider;

@interface GEOMotionContext : NSObject <GEOMotionContextProviderDelegate>
{
    id <GEOMotionContextProvider> _provider;
    unsigned long long _motionType;
    unsigned long long _exitType;
    unsigned long long _confidence;
    id <GEOMotionContextDelegate> _delegate;
}

@property(nonatomic) __weak id <GEOMotionContextDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) unsigned long long exitType; // @synthesize exitType=_exitType;
@property(readonly, nonatomic) unsigned long long motionType; // @synthesize motionType=_motionType;
@property(readonly, copy) NSString *description;
- (void)motionContextProvider:(id)arg1 didUpdateMotion:(unsigned long long)arg2 exitType:(unsigned long long)arg3 confidence:(unsigned long long)arg4;
@property(readonly, nonatomic) _Bool isDriving;
@property(readonly, nonatomic) _Bool isRunning;
@property(readonly, nonatomic) _Bool isWalking;
@property(readonly, nonatomic) _Bool isMoving;
- (void)stopMotionUpdates;
- (void)startMotionUpdatesWithProvider:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

