//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString, TPPBDisposition;

@interface TPPBDispositionEntry : PBCodable <NSCopying>
{
    TPPBDisposition *_disposition;
    NSString *_peerID;
}

@property(retain, nonatomic) TPPBDisposition *disposition; // @synthesize disposition=_disposition;
@property(retain, nonatomic) NSString *peerID; // @synthesize peerID=_peerID;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasDisposition;
@property(readonly, nonatomic) BOOL hasPeerID;

@end

