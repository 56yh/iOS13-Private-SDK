//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

#import <CacheDelete/CacheDeleteServiceProtocol-Protocol.h>

@interface CacheDeleteRemoteExtensionContext : NSExtensionContext <CacheDeleteServiceProtocol>
{
}

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;
- (void)servicePing:(id /* block */)arg1;
- (void)serviceNotify:(id)arg1 replyBlock:(id /* block */)arg2;
- (void)serviceCallback:(id)arg1 replyBlock:(id /* block */)arg2;
- (void)servicePeriodic:(int)arg1 info:(id)arg2 replyBlock:(id /* block */)arg3;
- (void)serviceCancelPurge:(id /* block */)arg1;
- (void)servicePurge:(int)arg1 info:(id)arg2 replyBlock:(id /* block */)arg3;
- (void)servicePurgeable:(int)arg1 info:(id)arg2 replyBlock:(id /* block */)arg3;
- (id)init;

@end

