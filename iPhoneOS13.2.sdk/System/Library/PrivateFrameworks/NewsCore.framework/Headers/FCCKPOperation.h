//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSString;

@interface FCCKPOperation : PBCodable <NSCopying>
{
    NSString *_operationUUID;
    int _type;
    _Bool _last;
    _Bool _synchronousMode;
    struct {
        unsigned int type:1;
        unsigned int last:1;
        unsigned int synchronousMode:1;
    } _has;
}

@property(nonatomic) _Bool last; // @synthesize last=_last;
@property(nonatomic) _Bool synchronousMode; // @synthesize synchronousMode=_synchronousMode;
@property(retain, nonatomic) NSString *operationUUID; // @synthesize operationUUID=_operationUUID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasLast;
@property(nonatomic) _Bool hasSynchronousMode;
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) _Bool hasOperationUUID;
- (void)dealloc;

@end

