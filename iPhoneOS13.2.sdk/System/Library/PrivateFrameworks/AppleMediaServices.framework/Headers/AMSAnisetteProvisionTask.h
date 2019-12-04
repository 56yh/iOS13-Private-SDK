//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleMediaServices/AMSTask.h>

@class ACAccount, NSData;
@protocol AMSBagProtocol;

__attribute__((visibility("hidden")))
@interface AMSAnisetteProvisionTask : AMSTask
{
    ACAccount *_account;
    id <AMSBagProtocol> _bag;
    NSData *_data;
    long long _type;
}

@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)performProvisioning;
- (id)initWithData:(id)arg1 type:(long long)arg2 account:(id)arg3 bag:(id)arg4;

@end

