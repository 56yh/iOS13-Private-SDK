//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class BSServiceQuality, NSString;

@protocol BSXPCServiceConnectionListenerConfiguring
- (void)setErrorHandler:(void (^)(NSError *))arg1;
- (void)setConnectionHandler:(void (^)(BSXPCServiceConnection *))arg1;
- (void)setServiceQuality:(BSServiceQuality *)arg1;
- (void)setEndpointDescription:(NSString *)arg1;
@end

