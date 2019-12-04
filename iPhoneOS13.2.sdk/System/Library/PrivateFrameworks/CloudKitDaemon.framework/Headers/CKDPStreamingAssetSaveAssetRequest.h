//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>



@class NSString;

__attribute__((visibility("hidden")))
@interface CKDPStreamingAssetSaveAssetRequest : PBRequest <NSCopying>
{
    long long _requestedSize;
    long long _uploadedSize;
    NSString *_uploadReceipt;
    struct {
        unsigned int requestedSize:1;
        unsigned int uploadedSize:1;
    } _has;
}

@property(retain, nonatomic) NSString *uploadReceipt; // @synthesize uploadReceipt=_uploadReceipt;
@property(nonatomic) long long uploadedSize; // @synthesize uploadedSize=_uploadedSize;
@property(nonatomic) long long requestedSize; // @synthesize requestedSize=_requestedSize;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasUploadReceipt;
@property(nonatomic) _Bool hasUploadedSize;
@property(nonatomic) _Bool hasRequestedSize;

@end

