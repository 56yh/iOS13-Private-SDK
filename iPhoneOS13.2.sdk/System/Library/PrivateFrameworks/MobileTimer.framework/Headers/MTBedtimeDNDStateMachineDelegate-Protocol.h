//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MobileTimer/MTStateMachineDelegate-Protocol.h>

@class MTBedtimeDNDStateMachine, NSDate;

@protocol MTBedtimeDNDStateMachineDelegate <MTStateMachineDelegate>
- (void)stateMachine:(MTBedtimeDNDStateMachine *)arg1 scheduleUpdateForSecondsFromNow:(double)arg2;
- (void)stateMachineClearKeepBedtimeDNDOff:(MTBedtimeDNDStateMachine *)arg1;
- (void)stateMachine:(MTBedtimeDNDStateMachine *)arg1 keepBedtimeDNDOffUntilDate:(NSDate *)arg2;
- (_Bool)stateMachine:(MTBedtimeDNDStateMachine *)arg1 disengageBedtimeDNDUserRequested:(_Bool)arg2;
- (_Bool)stateMachine:(MTBedtimeDNDStateMachine *)arg1 engageBedtimeDNDUntilDate:(NSDate *)arg2 userEngaged:(_Bool)arg3;
@end

