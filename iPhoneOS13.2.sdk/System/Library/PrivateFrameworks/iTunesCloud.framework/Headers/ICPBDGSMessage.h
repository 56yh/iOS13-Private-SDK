//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class ICPBDGSRequest, ICPBDGSResponse;

@interface ICPBDGSMessage : PBCodable <NSCopying>
{
    ICPBDGSRequest *_request;
    ICPBDGSResponse *_response;
}

@property(retain, nonatomic) ICPBDGSResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) ICPBDGSRequest *request; // @synthesize request=_request;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasResponse;
@property(readonly, nonatomic) _Bool hasRequest;

@end

