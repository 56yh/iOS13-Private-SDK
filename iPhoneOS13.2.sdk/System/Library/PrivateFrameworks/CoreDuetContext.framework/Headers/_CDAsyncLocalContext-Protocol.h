//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDuetContext/_CDAsyncContext-Protocol.h>
#import <CoreDuetContext/_CDLocalContext-Protocol.h>

@class NSArray, NSObject, _CDContextualKeyPath;
@protocol NSCopying><NSSecureCoding, OS_dispatch_queue;

@protocol _CDAsyncLocalContext <_CDLocalContext, _CDAsyncContext>
- (void)addObjects:(NSArray *)arg1 andRemoveObjects:(NSArray *)arg2 fromArrayAtKeyPath:(_CDContextualKeyPath *)arg3 responseQueue:(NSObject<OS_dispatch_queue> *)arg4 withCompletion:(void (^)(_Bool))arg5;
- (void)removeObjects:(NSArray *)arg1 fromArrayAtKeyPath:(_CDContextualKeyPath *)arg2 responseQueue:(NSObject<OS_dispatch_queue> *)arg3 withCompletion:(void (^)(_Bool))arg4;
- (void)addObjects:(NSArray *)arg1 toArrayAtKeyPath:(_CDContextualKeyPath *)arg2 responseQueue:(NSObject<OS_dispatch_queue> *)arg3 withCompletion:(void (^)(_Bool))arg4;
- (void)setObject:(NSObject<NSCopying><NSSecureCoding> *)arg1 forContextualKeyPath:(_CDContextualKeyPath *)arg2 responseQueue:(NSObject<OS_dispatch_queue> *)arg3 withCompletion:(void (^)(_Bool))arg4;
@end

