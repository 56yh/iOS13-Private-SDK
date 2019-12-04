//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@interface GEOLocationShiftFunctionResponse : NSObject <NSSecureCoding>
{
    CDStruct_2c43369c _originalCoordinate;
    double _params[9];
    double _radius;
    _Bool _shouldUsePolyShiftFunction;
    unsigned int _version;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned int version; // @synthesize version=_version;
@property(readonly, nonatomic) double radius; // @synthesize radius=_radius;
@property(readonly, nonatomic) CDStruct_c3b9c2ee originalCoordinate; // @synthesize originalCoordinate=_originalCoordinate;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isValidForCoordinate:(CDStruct_c3b9c2ee)arg1;
- (CDStruct_c3b9c2ee)shiftedCoordinateForCoordinate:(CDStruct_c3b9c2ee)arg1 accuracy:(double *)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPolyLocationShiftResponse:(id)arg1 originalCoordinate:(CDStruct_c3b9c2ee)arg2 version:(unsigned int)arg3;

@end

