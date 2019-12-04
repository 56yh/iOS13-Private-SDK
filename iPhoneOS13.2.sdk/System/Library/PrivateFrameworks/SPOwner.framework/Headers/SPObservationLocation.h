//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSDate, NSNumber;

@interface SPObservationLocation : NSObject <NSCopying, NSSecureCoding>
{
    NSDate *_timestamp;
    double _latitude;
    double _longitude;
    double _horizontalAccuracy;
    double _altitude;
    double _verticalAccuracy;
    double _speed;
    double _speedAccuracy;
    double _course;
    double _courseAccuracy;
    NSNumber *_floorLevel;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSNumber *floorLevel; // @synthesize floorLevel=_floorLevel;
@property(nonatomic) double courseAccuracy; // @synthesize courseAccuracy=_courseAccuracy;
@property(nonatomic) double course; // @synthesize course=_course;
@property(nonatomic) double speedAccuracy; // @synthesize speedAccuracy=_speedAccuracy;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(nonatomic) double verticalAccuracy; // @synthesize verticalAccuracy=_verticalAccuracy;
@property(nonatomic) double altitude; // @synthesize altitude=_altitude;
@property(nonatomic) double horizontalAccuracy; // @synthesize horizontalAccuracy=_horizontalAccuracy;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(copy, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithTimestamp:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 horizontalAccuracy:(double)arg4 altitude:(double)arg5 verticalAccuracy:(double)arg6 speed:(double)arg7 speedAccuracy:(double)arg8 course:(double)arg9 courseAccuracy:(double)arg10 floorLevel:(id)arg11;
- (id)initWithTimestamp:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 horizontalAcuracy:(double)arg4 altitude:(double)arg5 verticalAccuracy:(double)arg6 speed:(double)arg7 speedAccuracy:(double)arg8 course:(double)arg9 courseAccuracy:(double)arg10 floorLevel:(id)arg11;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

