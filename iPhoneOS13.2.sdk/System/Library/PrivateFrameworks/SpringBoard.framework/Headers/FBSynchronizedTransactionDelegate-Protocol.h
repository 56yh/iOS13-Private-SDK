//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class BSTransaction, NSArray;
@protocol FBSynchronizedTransaction;

@protocol FBSynchronizedTransactionDelegate 
- (void)synchronizedTransaction:(BSTransaction<FBSynchronizedTransaction> *)arg1 didCommitSynchronizedTransactions:(NSArray *)arg2;
- (void)synchronizedTransaction:(BSTransaction<FBSynchronizedTransaction> *)arg1 willCommitSynchronizedTransactions:(NSArray *)arg2;
- (void)synchronizedTransactionReadyToCommit:(BSTransaction<FBSynchronizedTransaction> *)arg1;
@end

