//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSString;

__attribute__((visibility("hidden")))
@interface AWDAccountsRenewCredentialsBegin : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    NSString *_accountType;
    NSString *_clientBundleID;
    _Bool _avoidUI;
    _Bool _shouldForce;
    struct {
        unsigned int timestamp:1;
        unsigned int avoidUI:1;
        unsigned int shouldForce:1;
    } _has;
}

@property(retain, nonatomic) NSString *clientBundleID; // @synthesize clientBundleID=_clientBundleID;
@property(nonatomic) _Bool shouldForce; // @synthesize shouldForce=_shouldForce;
@property(nonatomic) _Bool avoidUI; // @synthesize avoidUI=_avoidUI;
@property(retain, nonatomic) NSString *accountType; // @synthesize accountType=_accountType;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasClientBundleID;
@property(nonatomic) _Bool hasShouldForce;
@property(nonatomic) _Bool hasAvoidUI;
@property(readonly, nonatomic) _Bool hasAccountType;
@property(nonatomic) _Bool hasTimestamp;

@end

