//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@protocol AKCredential, AKCredentialRequestProtocol;

@interface AKAuthorization : NSObject <NSSecureCoding>
{
    id <AKCredentialRequestProtocol> _authorizedRequest;
    id <AKCredential> _credential;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) id <AKCredential> credential; // @synthesize credential=_credential;
@property(retain, nonatomic) id <AKCredentialRequestProtocol> authorizedRequest; // @synthesize authorizedRequest=_authorizedRequest;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

