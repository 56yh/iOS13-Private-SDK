//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class CNFuture, CNObservable, NSArray;
@protocol CNSchedulerProvider;

@protocol CNUIUserActionRanking 
- (CNObservable *)selectRecentActionItems:(CNObservable *)arg1 schedulerProvider:(id <CNSchedulerProvider>)arg2;
- (CNFuture *)sortActionItems:(NSArray *)arg1 schedulerProvider:(id <CNSchedulerProvider>)arg2;
@end
