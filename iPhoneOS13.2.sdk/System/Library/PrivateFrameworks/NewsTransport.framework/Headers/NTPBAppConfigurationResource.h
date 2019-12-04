//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSData, NSString, NTPBDate;

@interface NTPBAppConfigurationResource : PBCodable <NSCopying>
{
    long long _maxAge;
    NSString *_etag;
    NSData *_gzippedConfigurationData;
    NTPBDate *_lastFetchedDate;
    NTPBDate *_lastModifiedDate;
    NSString *_lastModifiedString;
    NSString *_resourceID;
    NSString *_sourceURL;
    struct {
        unsigned int maxAge:1;
    } _has;
}

@property(retain, nonatomic) NSString *resourceID; // @synthesize resourceID=_resourceID;
@property(nonatomic) long long maxAge; // @synthesize maxAge=_maxAge;
@property(retain, nonatomic) NSString *lastModifiedString; // @synthesize lastModifiedString=_lastModifiedString;
@property(retain, nonatomic) NTPBDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property(retain, nonatomic) NTPBDate *lastFetchedDate; // @synthesize lastFetchedDate=_lastFetchedDate;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(retain, nonatomic) NSString *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(retain, nonatomic) NSData *gzippedConfigurationData; // @synthesize gzippedConfigurationData=_gzippedConfigurationData;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasResourceID;
@property(nonatomic) _Bool hasMaxAge;
@property(readonly, nonatomic) _Bool hasLastModifiedString;
@property(readonly, nonatomic) _Bool hasLastModifiedDate;
@property(readonly, nonatomic) _Bool hasLastFetchedDate;
@property(readonly, nonatomic) _Bool hasEtag;
@property(readonly, nonatomic) _Bool hasSourceURL;
@property(readonly, nonatomic) _Bool hasGzippedConfigurationData;
- (void)dealloc;

@end

