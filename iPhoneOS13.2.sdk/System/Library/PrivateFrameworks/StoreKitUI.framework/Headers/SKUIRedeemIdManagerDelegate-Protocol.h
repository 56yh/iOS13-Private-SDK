//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSIndexPath, NSString, SKUIRedeemIdManager;

@protocol SKUIRedeemIdManagerDelegate 
- (void)redeemIdManager:(SKUIRedeemIdManager *)arg1 didReturnText:(NSString *)arg2 forCellAtIndexPath:(NSIndexPath *)arg3;
- (void)redeemIdManager:(SKUIRedeemIdManager *)arg1 didChangeToText:(NSString *)arg2 forCellAtIndexPath:(NSIndexPath *)arg3;
- (void)redeemIdManager:(SKUIRedeemIdManager *)arg1 movedToRowAtIndexPath:(NSIndexPath *)arg2;
@end

