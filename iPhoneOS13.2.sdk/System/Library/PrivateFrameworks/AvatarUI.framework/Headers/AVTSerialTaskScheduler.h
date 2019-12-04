//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTTaskScheduler-Protocol.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface AVTSerialTaskScheduler : NSObject <AVTTaskScheduler>
{
    struct NSMutableArray *_priorityTasks;
    struct NSMutableArray *_backlogTasks;
    NSObject<OS_dispatch_queue> *_stateLock;
    long long _order;
}

+ (id /* block */)nextTaskToRunForPriorityTasks:(struct NSMutableArray *)arg1 backlogTasks:(struct NSMutableArray *)arg2 order:(long long)arg3;
+ (id)fifoSchedulerWithEnvironment:(id)arg1;
+ (id)lifoSchedulerWithEnvironment:(id)arg1;
@property(readonly, nonatomic) long long order; // @synthesize order=_order;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *stateLock; // @synthesize stateLock=_stateLock;
@property(readonly, nonatomic) NSMutableArray *backlogTasks; // @synthesize backlogTasks=_backlogTasks;
@property(readonly, nonatomic) NSMutableArray *priorityTasks; // @synthesize priorityTasks=_priorityTasks;
- (void)lowerTaskPriority:(id /* block */)arg1;
- (void)cancelTask:(id /* block */)arg1;
- (void)cancelAllTasks;
- (void)didCompleteTask:(id /* block */)arg1;
- (void)startTask:(id /* block */)arg1;
- (void)scheduleTask:(id /* block */)arg1;
- (void)performStateWork:(id /* block */)arg1;
- (id)initWithEnvironment:(id)arg1 order:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

