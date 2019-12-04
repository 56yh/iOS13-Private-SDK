//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class GEOFormattedString, NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEODrivingWalkingSpokenInstruction : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_continueStage;
    NSMutableArray *_executionStages;
    GEOFormattedString *_initialStage;
    GEOFormattedString *_preparationStage;
    GEOFormattedString *_proceedStage;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _shortChainedInstructionIndex;
    struct {
        unsigned int has_shortChainedInstructionIndex:1;
        unsigned int read_unknownFields:1;
        unsigned int read_continueStage:1;
        unsigned int read_executionStages:1;
        unsigned int read_initialStage:1;
        unsigned int read_preparationStage:1;
        unsigned int read_proceedStage:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_continueStage:1;
        unsigned int wrote_executionStages:1;
        unsigned int wrote_initialStage:1;
        unsigned int wrote_preparationStage:1;
        unsigned int wrote_proceedStage:1;
        unsigned int wrote_shortChainedInstructionIndex:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)executionStageType;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasShortChainedInstructionIndex;
@property(nonatomic) unsigned int shortChainedInstructionIndex;
- (id)executionStageAtIndex:(unsigned long long)arg1;
- (unsigned long long)executionStagesCount;
- (void)_addNoFlagsExecutionStage:(id)arg1;
- (void)addExecutionStage:(id)arg1;
- (void)clearExecutionStages;
@property(retain, nonatomic) NSMutableArray *executionStages;
- (void)_readExecutionStages;
@property(retain, nonatomic) GEOFormattedString *preparationStage;
@property(readonly, nonatomic) _Bool hasPreparationStage;
- (void)_readPreparationStage;
@property(retain, nonatomic) GEOFormattedString *initialStage;
@property(readonly, nonatomic) _Bool hasInitialStage;
- (void)_readInitialStage;
@property(retain, nonatomic) GEOFormattedString *continueStage;
@property(readonly, nonatomic) _Bool hasContinueStage;
- (void)_readContinueStage;
@property(retain, nonatomic) GEOFormattedString *proceedStage;
@property(readonly, nonatomic) _Bool hasProceedStage;
- (void)_readProceedStage;
- (id)initWithData:(id)arg1;
- (id)init;

@end

