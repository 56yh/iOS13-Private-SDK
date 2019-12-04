//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/CSOrientationUpdateControlling-Protocol.h>

@class NSString;
@protocol BSInvalidatable;

@interface SBDashBoardOrientationController : NSObject <CSOrientationUpdateControlling>
{
    id <BSInvalidatable> _deferOrientationUpdatesAssertion;
}

- (void)noteInterfaceOrientationChanged:(long long)arg1 duration:(double)arg2 logMessage:(id)arg3;
- (void)cancelOrientationUpdateDeferral;
- (void)deferOrientationUpdatesWithReason:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

