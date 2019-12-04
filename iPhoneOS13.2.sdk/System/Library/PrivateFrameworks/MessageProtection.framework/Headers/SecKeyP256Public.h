//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MessageProtection/P256PublicKeyProtocol-Protocol.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface SecKeyP256Public : NSObject <P256PublicKeyProtocol>
{
    struct __SecKey *_publicKeyRef;
    NSData *_serializedKey;
}

@property(retain) NSData *serializedKey; // @synthesize serializedKey=_serializedKey;
@property struct __SecKey *publicKeyRef; // @synthesize publicKeyRef=_publicKeyRef;
- (void)dealloc;
- (_Bool)verifySignature:(id)arg1 data:(id)arg2;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)dataRepresentation;
- (id)initWithSecKeyRef:(struct __SecKey *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

