//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class CNFuture, NSDate;
@protocol CNScheduler;

@protocol CNFuture 
@property(readonly, getter=isCancelled) _Bool cancelled;
@property(readonly, getter=isFinished) _Bool finished;
- (CNFuture *)recover:(id <CNFuture> (^)(NSError *))arg1;
- (CNFuture *)flatMap:(id <CNFuture> (^)(id))arg1;
- (void)addFailureBlock:(void (^)(NSError *))arg1 scheduler:(id <CNScheduler>)arg2;
- (void)addFailureBlock:(void (^)(NSError *))arg1;
- (void)addSuccessBlock:(void (^)(id))arg1 scheduler:(id <CNScheduler>)arg2;
- (void)addSuccessBlock:(void (^)(id))arg1;
- (_Bool)cancel;
- (id)resultBeforeDate:(NSDate *)arg1 error:(id *)arg2;
- (id)resultWithTimeout:(double)arg1 error:(id *)arg2;
- (id)result:(id *)arg1;
@end

