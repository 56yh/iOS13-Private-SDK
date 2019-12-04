//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class ICPBDGSFinishDelegationResponse, ICPBDGSStartDelegationResponse;

@interface ICPBDGSResponse : PBCodable <NSCopying>
{
    ICPBDGSFinishDelegationResponse *_finishDelegationResponse;
    unsigned int _requestUniqueID;
    ICPBDGSStartDelegationResponse *_startDelegationResponse;
    struct {
        unsigned int requestUniqueID:1;
    } _has;
}

@property(retain, nonatomic) ICPBDGSFinishDelegationResponse *finishDelegationResponse; // @synthesize finishDelegationResponse=_finishDelegationResponse;
@property(retain, nonatomic) ICPBDGSStartDelegationResponse *startDelegationResponse; // @synthesize startDelegationResponse=_startDelegationResponse;
@property(nonatomic) unsigned int requestUniqueID; // @synthesize requestUniqueID=_requestUniqueID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasFinishDelegationResponse;
@property(readonly, nonatomic) _Bool hasStartDelegationResponse;
@property(nonatomic) _Bool hasRequestUniqueID;

@end

