//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSError, StockUpdateManager;

@protocol StockUpdateObserver <NSObject>

@optional
- (void)stockUpdateManager:(StockUpdateManager *)arg1 failedToUpdateStocks:(NSArray *)arg2 updates:(long long)arg3 error:(NSError *)arg4;
- (void)stockUpdateManager:(StockUpdateManager *)arg1 didUpdateStocks:(NSArray *)arg2 updates:(long long)arg3;
- (void)stockUpdateManager:(StockUpdateManager *)arg1 didRequestUpdateForStocks:(NSArray *)arg2 updates:(long long)arg3;
@end

