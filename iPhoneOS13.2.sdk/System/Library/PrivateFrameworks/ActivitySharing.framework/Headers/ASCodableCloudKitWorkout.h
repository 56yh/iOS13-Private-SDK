//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class ASCodableCloudKitSample, NSString;

@interface ASCodableCloudKitWorkout : PBCodable <NSCopying>
{
    long long _amm;
    double _duration;
    double _goalInCanonicalUnit;
    long long _goalType;
    double _totalBasalEnergyBurnedInCanonicalUnit;
    double _totalDistanceInCanonicalUnit;
    double _totalEnergyBurnedInCanonicalUnit;
    long long _type;
    NSString *_bundleID;
    NSString *_deviceManufacturer;
    NSString *_deviceModel;
    ASCodableCloudKitSample *_sample;
    _Bool _isIndoorWorkout;
    _Bool _isWatchWorkout;
    struct {
        unsigned int amm:1;
        unsigned int duration:1;
        unsigned int goalInCanonicalUnit:1;
        unsigned int goalType:1;
        unsigned int totalBasalEnergyBurnedInCanonicalUnit:1;
        unsigned int totalDistanceInCanonicalUnit:1;
        unsigned int totalEnergyBurnedInCanonicalUnit:1;
        unsigned int type:1;
        unsigned int isIndoorWorkout:1;
        unsigned int isWatchWorkout:1;
    } _has;
}

@property(nonatomic) long long amm; // @synthesize amm=_amm;
@property(retain, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
@property(retain, nonatomic) NSString *deviceManufacturer; // @synthesize deviceManufacturer=_deviceManufacturer;
@property(nonatomic) _Bool isIndoorWorkout; // @synthesize isIndoorWorkout=_isIndoorWorkout;
@property(nonatomic) _Bool isWatchWorkout; // @synthesize isWatchWorkout=_isWatchWorkout;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(nonatomic) double goalInCanonicalUnit; // @synthesize goalInCanonicalUnit=_goalInCanonicalUnit;
@property(nonatomic) long long goalType; // @synthesize goalType=_goalType;
@property(nonatomic) double totalDistanceInCanonicalUnit; // @synthesize totalDistanceInCanonicalUnit=_totalDistanceInCanonicalUnit;
@property(nonatomic) double totalBasalEnergyBurnedInCanonicalUnit; // @synthesize totalBasalEnergyBurnedInCanonicalUnit=_totalBasalEnergyBurnedInCanonicalUnit;
@property(nonatomic) double totalEnergyBurnedInCanonicalUnit; // @synthesize totalEnergyBurnedInCanonicalUnit=_totalEnergyBurnedInCanonicalUnit;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) ASCodableCloudKitSample *sample; // @synthesize sample=_sample;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasAmm;
@property(readonly, nonatomic) _Bool hasDeviceModel;
@property(readonly, nonatomic) _Bool hasDeviceManufacturer;
@property(nonatomic) _Bool hasIsIndoorWorkout;
@property(nonatomic) _Bool hasIsWatchWorkout;
@property(readonly, nonatomic) _Bool hasBundleID;
@property(nonatomic) _Bool hasGoalInCanonicalUnit;
@property(nonatomic) _Bool hasGoalType;
@property(nonatomic) _Bool hasTotalDistanceInCanonicalUnit;
@property(nonatomic) _Bool hasTotalBasalEnergyBurnedInCanonicalUnit;
@property(nonatomic) _Bool hasTotalEnergyBurnedInCanonicalUnit;
@property(nonatomic) _Bool hasDuration;
@property(nonatomic) _Bool hasType;
@property(readonly, nonatomic) _Bool hasSample;
- (_Bool)isAmm;

@end

