//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCBackgroundActivityScheduler-Protocol.h>

@class NSString;

@interface FCBackgroundActivityScheduler : NSObject <FCBackgroundActivityScheduler>
{
}

- (void)requestBackgroundAppRefreshStartingAfter:(id)arg1 before:(id)arg2;
- (void)cancelRepeatingTaskWithIdentifier:(id)arg1;
- (void)scheduleBackgroundTaskRepeatingAtInterval:(double)arg1 identifier:(id)arg2 task:(id /* block */)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

