//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface AWDMailMessageBody : PBCodable <NSCopying>
{
    NSUInteger _totalTextSize;
    NSString *_mimeSubtype;
    NSString *_mimeType;
    struct {
        unsigned int totalTextSize:1;
    } _has;
}

@property(nonatomic) NSUInteger totalTextSize; // @synthesize totalTextSize=_totalTextSize;
@property(retain, nonatomic) NSString *mimeSubtype; // @synthesize mimeSubtype=_mimeSubtype;
@property(retain, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
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
@property(nonatomic) BOOL hasTotalTextSize;
@property(readonly, nonatomic) BOOL hasMimeSubtype;
@property(readonly, nonatomic) BOOL hasMimeType;
- (id)initWithMIMEBody:(id)arg1;

@end
