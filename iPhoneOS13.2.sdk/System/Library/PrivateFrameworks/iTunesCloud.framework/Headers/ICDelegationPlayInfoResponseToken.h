//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSString;

@interface ICDelegationPlayInfoResponseToken : NSObject
{
    NSData *_tokenData;
    NSDate *_expirationDate;
    NSString *_storefrontIdentifier;
}

@property(copy, nonatomic) NSString *storefrontIdentifier; // @synthesize storefrontIdentifier=_storefrontIdentifier;
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSData *tokenData; // @synthesize tokenData=_tokenData;

@end

