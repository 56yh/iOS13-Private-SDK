//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@interface GEONetworkSessionTaskTransactionMetrics : PBCodable <NSCopying>
{
    double _connectEnd;
    double _connectStart;
    double _domainLookupEnd;
    double _domainLookupStart;
    double _fetchStart;
    double _requestEnd;
    double _requestStart;
    double _responseEnd;
    double _responseStart;
    double _secureConnectEnd;
    double _secureConnectStart;
    int _protocolName;
    int _resourceFetchType;
    _Bool _proxyConnection;
    _Bool _reusedConnection;
    CDStruct_60b58840 _flags;
}

+ (_Bool)isValid:(id)arg1;
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
- (int)StringAsResourceFetchType:(id)arg1;
- (id)resourceFetchTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasResourceFetchType;
@property(nonatomic) int resourceFetchType;
@property(nonatomic) _Bool hasReusedConnection;
@property(nonatomic) _Bool reusedConnection;
@property(nonatomic) _Bool hasProxyConnection;
@property(nonatomic) _Bool proxyConnection;
- (int)StringAsProtocolName:(id)arg1;
- (id)protocolNameAsString:(int)arg1;
@property(nonatomic) _Bool hasProtocolName;
@property(nonatomic) int protocolName;
@property(nonatomic) _Bool hasResponseEnd;
@property(nonatomic) double responseEnd;
@property(nonatomic) _Bool hasResponseStart;
@property(nonatomic) double responseStart;
@property(nonatomic) _Bool hasRequestEnd;
@property(nonatomic) double requestEnd;
@property(nonatomic) _Bool hasRequestStart;
@property(nonatomic) double requestStart;
@property(nonatomic) _Bool hasConnectEnd;
@property(nonatomic) double connectEnd;
@property(nonatomic) _Bool hasSecureConnectEnd;
@property(nonatomic) double secureConnectEnd;
@property(nonatomic) _Bool hasSecureConnectStart;
@property(nonatomic) double secureConnectStart;
@property(nonatomic) _Bool hasConnectStart;
@property(nonatomic) double connectStart;
@property(nonatomic) _Bool hasDomainLookupEnd;
@property(nonatomic) double domainLookupEnd;
@property(nonatomic) _Bool hasDomainLookupStart;
@property(nonatomic) double domainLookupStart;
@property(nonatomic) _Bool hasFetchStart;
@property(nonatomic) double fetchStart;

@end

