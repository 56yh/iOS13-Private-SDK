//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSString;

@protocol ECAuthenticatableAccount 
@property(readonly, nonatomic) NSString *oauth2Token;
@property(readonly, nonatomic) NSString *domain;
@property(readonly, copy, nonatomic) NSString *hostname;
@property(readonly, copy) NSString *password;
@property(readonly) NSString *username;
- (void)setMissingPasswordError;
@end

