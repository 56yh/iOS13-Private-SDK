//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@interface PBBProtoPopToControllerType : PBCodable <NSCopying>
{
    double _intendedFireDate;
    unsigned int _controllerType;
    CDStruct_88f5f09d _has;
}

@property(nonatomic) double intendedFireDate; // @synthesize intendedFireDate=_intendedFireDate;
@property(nonatomic) unsigned int controllerType; // @synthesize controllerType=_controllerType;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasIntendedFireDate;

@end

