//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/MFCollectingDataConsumer-Protocol.h>

@class NSArray, NSString;

@interface _MFSecCMSDecoder : NSObject <MFCollectingDataConsumer>
{
    int _SecCMSError;
    struct SecCmsMessageStr *_message;
    struct SecCmsDigestContextStr *_digest;
    NSArray *_signers;
    struct SecCmsSignedDataStr *_signedData;
    struct SecCmsEnvelopedDataStr *_envelopedData;
    _Bool _isEncrypted;
}

@property(readonly, nonatomic) NSArray *signers; // @synthesize signers=_signers;
@property(readonly, nonatomic) int lastSecCMSError; // @synthesize lastSecCMSError=_SecCMSError;
- (_Bool)containsSignedContent;
- (id)signedData;
- (_Bool)isContentSigned;
- (_Bool)isContentEncrypted;
- (id)verifyAgainstSenders:(id)arg1 signingError:(id *)arg2;
- (id)data;
- (void)done;
- (long long)appendData:(id)arg1;
- (void)dealloc;
- (id)initWithPartData:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

