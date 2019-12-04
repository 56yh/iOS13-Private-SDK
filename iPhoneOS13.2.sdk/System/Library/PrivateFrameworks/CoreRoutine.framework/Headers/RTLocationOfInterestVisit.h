//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSDate, NSUUID, RTLocation;

@interface RTLocationOfInterestVisit : NSObject <NSCopying, NSSecureCoding>
{
    RTLocation *_location;
    NSUUID *_identifier;
    NSDate *_entryDate;
    NSDate *_exitDate;
    double _locationOfInterestConfidence;
    unsigned long long _locationOfInterestSource;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long locationOfInterestSource; // @synthesize locationOfInterestSource=_locationOfInterestSource;
@property(readonly, nonatomic) double locationOfInterestConfidence; // @synthesize locationOfInterestConfidence=_locationOfInterestConfidence;
@property(readonly, nonatomic) NSDate *exitDate; // @synthesize exitDate=_exitDate;
@property(readonly, nonatomic) NSDate *entryDate; // @synthesize entryDate=_entryDate;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) RTLocation *location; // @synthesize location=_location;
- (id)exit;
- (id)entry;
- (id)exitTime;
- (id)entryTime;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 entry:(id)arg2 exit:(id)arg3 location:(id)arg4 locationOfInterestConfidence:(double)arg5 locationOfInterestSource:(unsigned long long)arg6;
- (id)init;

@end

