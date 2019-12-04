//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface PCCAttestation : NSObject
{
    NSString *_certificate;
    NSData *_applicationEnclaveQuote;
    NSData *_quotingEnclaveQuote;
    NSData *_routingToken;
}

@property(retain, nonatomic) NSData *routingToken; // @synthesize routingToken=_routingToken;
@property(retain, nonatomic) NSData *quotingEnclaveQuote; // @synthesize quotingEnclaveQuote=_quotingEnclaveQuote;
@property(retain, nonatomic) NSData *applicationEnclaveQuote; // @synthesize applicationEnclaveQuote=_applicationEnclaveQuote;
@property(retain, nonatomic) NSString *certificate; // @synthesize certificate=_certificate;
- (id)initWithCertificate:(id)arg1 applicationEnclaveQuote:(id)arg2 quotingEnclaveQuote:(id)arg3 routingToken:(id)arg4;

@end

