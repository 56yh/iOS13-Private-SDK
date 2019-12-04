//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSBagConsumer-Protocol.h>
#import <AppleMediaServices/AMSRequestEncoding-Protocol.h>

@class ACAccount, AMSProcessInfo, AMSURLRequestEncoder, NSString;
@protocol AMSBagProtocol, AMSMediaTokenServiceProtocol, AMSResponseDecoding;

@interface AMSMediaRequestEncoder : NSObject <AMSBagConsumer, AMSRequestEncoding>
{
    _Bool _disableAccountMediaTypeComponent;
    id <AMSMediaTokenServiceProtocol> _tokenService;
    AMSURLRequestEncoder *_requestEncoder;
}

+ (id)bagSubProfileVersion;
+ (id)bagSubProfile;
+ (id)bagKeySet;
@property(nonatomic) _Bool disableAccountMediaTypeComponent; // @synthesize disableAccountMediaTypeComponent=_disableAccountMediaTypeComponent;
@property(readonly, nonatomic) AMSURLRequestEncoder *requestEncoder; // @synthesize requestEncoder=_requestEncoder;
@property(readonly, nonatomic) id <AMSMediaTokenServiceProtocol> tokenService; // @synthesize tokenService=_tokenService;
- (id)requestByEncodingRequest:(id)arg1 parameters:(id)arg2;
- (id)requestWithComponents:(id)arg1;
@property(nonatomic) _Bool URLKnownToBeTrusted;
@property(retain, nonatomic) id <AMSResponseDecoding> responseDecoder;
@property(retain, nonatomic) NSString *logKey;
@property(nonatomic) _Bool disableResponseDecoding;
@property(retain, nonatomic) AMSProcessInfo *clientInfo;
@property(retain, nonatomic) ACAccount *account;
@property(readonly, nonatomic) id <AMSBagProtocol> bag;
- (id)initWithTokenService:(id)arg1 bag:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

