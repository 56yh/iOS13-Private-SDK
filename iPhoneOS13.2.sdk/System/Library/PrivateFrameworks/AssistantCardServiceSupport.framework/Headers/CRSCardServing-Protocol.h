//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssistantCardServiceSupport/CRSServing-Protocol.h>

@protocol CRSCardRequesting;

@protocol CRSCardServing <CRSServing>
- (void)requestCard:(id <CRSCardRequesting>)arg1 reply:(void (^)(id <CRCard>, NSError *))arg2;
- (unsigned long long)servicePriorityForRequest:(id <CRSCardRequesting>)arg1;
- (_Bool)canSatisfyCardRequest:(id <CRSCardRequesting>)arg1;
@end

