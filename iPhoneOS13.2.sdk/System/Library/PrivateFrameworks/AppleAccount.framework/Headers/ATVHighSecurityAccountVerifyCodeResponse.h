//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleAccount/AAResponse.h>

@class NSString;

@interface ATVHighSecurityAccountVerifyCodeResponse : AAResponse
{
}

@property(readonly, nonatomic) long long errorCode;
@property(readonly, nonatomic) NSString *errorMessage;
@property(readonly, nonatomic) NSString *errorTitle;
@property(readonly, nonatomic) _Bool success;

@end

