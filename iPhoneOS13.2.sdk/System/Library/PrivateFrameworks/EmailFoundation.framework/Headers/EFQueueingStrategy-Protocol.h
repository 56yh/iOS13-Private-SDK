//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSMutableArray, NSString;

@protocol EFQueueingStrategy 
@property(readonly, nonatomic) NSString *descriptionType;
- (void)dequeueObject:(id)arg1 buffer:(NSMutableArray *)arg2;
- (void)enqueueObject:(id)arg1 replaceIfExists:(_Bool)arg2 buffer:(NSMutableArray *)arg3;
@end

