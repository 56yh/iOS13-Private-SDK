//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NPKProtoStandaloneResponseHeader, NSMutableArray;

@interface NPKProtoStandalonePaymentPassListResponse : PBCodable <NSCopying>
{
    NSMutableArray *_paymentPasses;
    NPKProtoStandaloneResponseHeader *_responseHeader;
}

+ (Class)paymentPassesType;
@property(retain, nonatomic) NSMutableArray *paymentPasses; // @synthesize paymentPasses=_paymentPasses;
@property(retain, nonatomic) NPKProtoStandaloneResponseHeader *responseHeader; // @synthesize responseHeader=_responseHeader;
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
- (id)paymentPassesAtIndex:(NSUInteger)arg1;
- (NSUInteger)paymentPassesCount;
- (void)addPaymentPasses:(id)arg1;
- (void)clearPaymentPasses;

@end

