//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSString;

@interface TPPBPolicyProhibits : PBCodable <NSCopying>
{
    unsigned long long _policyVersion;
    NSString *_candidateCategory;
    NSString *_explanation;
    NSString *_sponsorCategory;
    NSString *_sponsorId;
    CDStruct_0e29c504 _has;
}

@property(retain, nonatomic) NSString *explanation; // @synthesize explanation=_explanation;
@property(retain, nonatomic) NSString *candidateCategory; // @synthesize candidateCategory=_candidateCategory;
@property(retain, nonatomic) NSString *sponsorCategory; // @synthesize sponsorCategory=_sponsorCategory;
@property(retain, nonatomic) NSString *sponsorId; // @synthesize sponsorId=_sponsorId;
@property(nonatomic) unsigned long long policyVersion; // @synthesize policyVersion=_policyVersion;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasExplanation;
@property(readonly, nonatomic) _Bool hasCandidateCategory;
@property(readonly, nonatomic) _Bool hasSponsorCategory;
@property(readonly, nonatomic) _Bool hasSponsorId;
@property(nonatomic) _Bool hasPolicyVersion;

@end

