//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class HMActionSet, HMCharacteristicBatchRequest, HMHome, NSSet;

@protocol HFCharacteristicValueWriter 
- (HMHome *)hf_home;
- (void)executeActions:(NSSet *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)executeActionSet:(HMActionSet *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)performBatchCharacteristicRequest:(HMCharacteristicBatchRequest *)arg1;
@end

