//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class MTTimer, NSArray, NSDate, NSString;
@protocol MTSource, MTTimerObserver;

@protocol MTTimerStorage 
@property(readonly, nonatomic) NSDate *lastModifiedDate;
@property(readonly, nonatomic) MTTimer *nextTimer;
@property(readonly, nonatomic) NSArray *timers;
- (void)setAllTimers:(NSArray *)arg1 source:(id <MTSource>)arg2;
- (void)repeatTimerWithIdentifier:(NSString *)arg1 withCompletion:(void (^)(NSError *))arg2 source:(id <MTSource>)arg3;
- (void)dismissTimerWithIdentifier:(NSString *)arg1 withCompletion:(void (^)(NSError *))arg2 source:(id <MTSource>)arg3;
- (void)removeTimer:(MTTimer *)arg1 withCompletion:(void (^)(NSError *))arg2 source:(id <MTSource>)arg3;
- (void)updateTimer:(MTTimer *)arg1 withCompletion:(void (^)(NSError *))arg2 source:(id <MTSource>)arg3;
- (void)addTimer:(MTTimer *)arg1 withCompletion:(void (^)(NSError *))arg2 source:(id <MTSource>)arg3;
- (void)getTimersWithCompletion:(void (^)(NSArray *, MTTimer *, NSError *))arg1;
- (void)registerObserver:(id <MTTimerObserver>)arg1;
@end

