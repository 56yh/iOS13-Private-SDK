//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class CLPLocation, NSString;

@interface CLPAppLocation : PBCodable <NSCopying>
{
    double _age;
    NSString *_appBundleId;
    int _appState;
    CLPLocation *_location;
    int _loiType;
    int _routineMode;
    int _serverHash;
    struct {
        unsigned int age:1;
        unsigned int loiType:1;
        unsigned int routineMode:1;
        unsigned int serverHash:1;
    } _has;
}

@property(nonatomic) int serverHash; // @synthesize serverHash=_serverHash;
@property(retain, nonatomic) CLPLocation *location; // @synthesize location=_location;
@property(nonatomic) double age; // @synthesize age=_age;
@property(nonatomic) int appState; // @synthesize appState=_appState;
@property(retain, nonatomic) NSString *appBundleId; // @synthesize appBundleId=_appBundleId;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasLoiType;
@property(nonatomic) int loiType; // @synthesize loiType=_loiType;
@property(nonatomic) BOOL hasRoutineMode;
@property(nonatomic) int routineMode; // @synthesize routineMode=_routineMode;
@property(nonatomic) BOOL hasServerHash;
@property(nonatomic) BOOL hasAge;

@end

