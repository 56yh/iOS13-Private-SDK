//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class CTPNRRequestSentInfo, CTXPCServiceSubscriptionContext, NSDictionary;

@protocol CoreTelephonyClientPNRDelegate 

@optional
- (void)context:(CTXPCServiceSubscriptionContext *)arg1 pnrSupportChanged:(_Bool)arg2;
- (void)pnrReadyStateNotification:(CTXPCServiceSubscriptionContext *)arg1 regState:(_Bool)arg2;
- (void)pnrResponseReceived:(CTXPCServiceSubscriptionContext *)arg1 pnrRspData:(NSDictionary *)arg2;
- (void)pnrRequestSent:(CTXPCServiceSubscriptionContext *)arg1 pnrReqData:(CTPNRRequestSentInfo *)arg2;
@end
