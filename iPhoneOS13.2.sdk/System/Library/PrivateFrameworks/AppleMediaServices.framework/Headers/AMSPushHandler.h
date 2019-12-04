//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMSPushConfiguration;
@protocol AMSBagProtocol, AMSPushHandlerContract;

@interface AMSPushHandler : NSObject
{
    id <AMSBagProtocol> _bag;
    AMSPushConfiguration *_configuration;
    id <AMSPushHandlerContract> _bagContract;
}

@property(readonly, nonatomic) id <AMSPushHandlerContract> bagContract; // @synthesize bagContract=_bagContract;
@property(readonly, nonatomic) AMSPushConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
- (id)initWithConfiguration:(id)arg1 bagContract:(id)arg2;
- (id)_enabledParsables;
- (_Bool)shouldHandleNotification:(id)arg1;
- (void)handleNotification:(id)arg1;
- (id)initWithConfiguration:(id)arg1 bag:(id)arg2;

@end

