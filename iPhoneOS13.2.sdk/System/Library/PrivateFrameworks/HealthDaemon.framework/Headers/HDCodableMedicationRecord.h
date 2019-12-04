//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/HDDecoding-Protocol.h>


@class HDCodableMedicalCoding, HDCodableMedicalCodingList, HDCodableMedicalCodingListList, HDCodableMedicalRecord, HDCodableMedicationDosageList, NSData, NSString;

@interface HDCodableMedicationRecord : PBCodable <HDDecoding, NSCopying>
{
    long long _assertionType;
    NSString *_asserter;
    NSData *_assertionDate;
    HDCodableMedicationDosageList *_dosages;
    NSData *_earliestDosageDate;
    NSData *_effectiveEndDate;
    NSData *_effectiveStartDate;
    HDCodableMedicalRecord *_medicalRecord;
    HDCodableMedicalCodingList *_medicationCodings;
    HDCodableMedicalCodingList *_reasonForUseCodings;
    HDCodableMedicalCodingListList *_reasonsNotTakenCodings;
    HDCodableMedicalCoding *_statusCoding;
    _Bool _notTaken;
    struct {
        unsigned int assertionType:1;
        unsigned int notTaken:1;
    } _has;
}

@property(retain, nonatomic) NSData *effectiveEndDate; // @synthesize effectiveEndDate=_effectiveEndDate;
@property(retain, nonatomic) NSData *effectiveStartDate; // @synthesize effectiveStartDate=_effectiveStartDate;
@property(retain, nonatomic) HDCodableMedicalCodingListList *reasonsNotTakenCodings; // @synthesize reasonsNotTakenCodings=_reasonsNotTakenCodings;
@property(nonatomic) _Bool notTaken; // @synthesize notTaken=_notTaken;
@property(retain, nonatomic) HDCodableMedicalCodingList *reasonForUseCodings; // @synthesize reasonForUseCodings=_reasonForUseCodings;
@property(retain, nonatomic) NSData *earliestDosageDate; // @synthesize earliestDosageDate=_earliestDosageDate;
@property(retain, nonatomic) HDCodableMedicationDosageList *dosages; // @synthesize dosages=_dosages;
@property(retain, nonatomic) HDCodableMedicalCoding *statusCoding; // @synthesize statusCoding=_statusCoding;
@property(retain, nonatomic) NSData *assertionDate; // @synthesize assertionDate=_assertionDate;
@property(retain, nonatomic) NSString *asserter; // @synthesize asserter=_asserter;
@property(nonatomic) long long assertionType; // @synthesize assertionType=_assertionType;
@property(retain, nonatomic) HDCodableMedicalCodingList *medicationCodings; // @synthesize medicationCodings=_medicationCodings;
@property(retain, nonatomic) HDCodableMedicalRecord *medicalRecord; // @synthesize medicalRecord=_medicalRecord;
- (void)mergeFrom:(id)arg1;
@property(readonly) NSUInteger hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasEffectiveEndDate;
@property(readonly, nonatomic) _Bool hasEffectiveStartDate;
@property(readonly, nonatomic) _Bool hasReasonsNotTakenCodings;
@property(nonatomic) _Bool hasNotTaken;
@property(readonly, nonatomic) _Bool hasReasonForUseCodings;
@property(readonly, nonatomic) _Bool hasEarliestDosageDate;
@property(readonly, nonatomic) _Bool hasDosages;
@property(readonly, nonatomic) _Bool hasStatusCoding;
@property(readonly, nonatomic) _Bool hasAssertionDate;
@property(readonly, nonatomic) _Bool hasAsserter;
@property(nonatomic) _Bool hasAssertionType;
@property(readonly, nonatomic) _Bool hasMedicationCodings;
@property(readonly, nonatomic) _Bool hasMedicalRecord;
- (_Bool)applyToObject:(id)arg1 error:(out id *)arg2;
- (_Bool)applyToObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

