//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class HMDAssistantAccessControlModelV2;

@protocol HMDAssistantAccessControlModelUpdateReceiver 
- (void)assistantAccessControlModelRemoved:(HMDAssistantAccessControlModelV2 *)arg1 completion:(void (^)(HMBAction *))arg2;
- (void)assistantAccessControlModelUpdated:(HMDAssistantAccessControlModelV2 *)arg1 previousModel:(HMDAssistantAccessControlModelV2 *)arg2 completion:(void (^)(HMBAction *))arg3;
@end

