//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardUIServices/BKOperationDelegate-Protocol.h>

@class BKMatchOperation, BKMatchResultInfo;

@protocol BKMatchOperationDelegate <BKOperationDelegate>

@optional
- (void)matchOperation:(BKMatchOperation *)arg1 failedWithReason:(long long)arg2;
- (void)matchOperation:(BKMatchOperation *)arg1 presenceDetectedInLockout:(long long)arg2;
- (void)matchOperation:(BKMatchOperation *)arg1 matchedWithResult:(BKMatchResultInfo *)arg2;
@end

