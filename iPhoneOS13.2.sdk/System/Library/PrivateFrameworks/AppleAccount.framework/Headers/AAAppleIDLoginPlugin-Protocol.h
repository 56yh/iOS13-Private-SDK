//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSDictionary, NSString;

@protocol AAAppleIDLoginPlugin 
- (void)handleLoginResponse:(NSDictionary *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (NSDictionary *)parametersForLoginRequest;
- (NSDictionary *)parametersForIdentityEstablishmentRequest;
- (NSString *)serviceIdentifier;
@end

