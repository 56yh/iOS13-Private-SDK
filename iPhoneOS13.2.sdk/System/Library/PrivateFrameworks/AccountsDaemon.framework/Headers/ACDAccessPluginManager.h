//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;
@protocol OS_dispatch_queue;

@interface ACDAccessPluginManager : NSObject
{
    NSSet *_accessPlugins;
    NSObject<OS_dispatch_queue> *_accessPluginQueue;
}

- (id)_authorizationPluginForAccountType:(id)arg1;
- (void)revokeAllAccessToAccountsOfType:(id)arg1 store:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)revokeAccessToAccountsOfType:(id)arg1 forClient:(id)arg2 store:(id)arg3 completion:(id /* block */)arg4;
- (void)authorizeAccessToAccountsOfType:(id)arg1 forClient:(id)arg2 store:(id)arg3 completion:(id /* block */)arg4;
- (void)handleAccessRequestToAccountsOfType:(id)arg1 forClient:(id)arg2 withOptions:(id)arg3 store:(id)arg4 allowUserInteraction:(_Bool)arg5 completion:(id /* block */)arg6;
- (id)init;

@end

