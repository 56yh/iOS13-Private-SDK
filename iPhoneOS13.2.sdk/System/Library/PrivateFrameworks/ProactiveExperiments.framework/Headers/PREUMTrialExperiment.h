//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSString;

@interface PREUMTrialExperiment : PBCodable <NSCopying>
{
    NSString *_experimentId;
    NSString *_treatmentId;
    NSString *_treatmentModelName;
}

@property(retain, nonatomic) NSString *treatmentModelName; // @synthesize treatmentModelName=_treatmentModelName;
@property(retain, nonatomic) NSString *treatmentId; // @synthesize treatmentId=_treatmentId;
@property(retain, nonatomic) NSString *experimentId; // @synthesize experimentId=_experimentId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasTreatmentModelName;
@property(readonly, nonatomic) _Bool hasTreatmentId;
@property(readonly, nonatomic) _Bool hasExperimentId;

@end

