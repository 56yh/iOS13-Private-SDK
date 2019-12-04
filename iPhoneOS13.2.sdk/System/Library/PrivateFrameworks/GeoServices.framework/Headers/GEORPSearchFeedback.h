//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class GEORPSearchFeedbackContext, GEORPSearchFeedbackCorrections, PBDataReader, PBUnknownFields;

@interface GEORPSearchFeedback : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPSearchFeedbackContext *_context;
    GEORPSearchFeedbackCorrections *_corrections;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    CDStruct_5bb8e4f8 _flags;
}

+ (_Bool)isValid:(id)arg1;
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
@property(retain, nonatomic) GEORPSearchFeedbackCorrections *corrections;
@property(readonly, nonatomic) _Bool hasCorrections;
- (void)_readCorrections;
@property(retain, nonatomic) GEORPSearchFeedbackContext *context;
@property(readonly, nonatomic) _Bool hasContext;
- (void)_readContext;
- (id)initWithData:(id)arg1;
- (id)init;

@end

