//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosImagingFoundation/IPAGeometryOperator.h>

@interface IPAPerspectiveOperator : IPAGeometryOperator
{
    double _xAngle;
    double _yAngle;
    double _dx;
    double _dy;
}

+ (id)operatorWithIdentifier:(id)arg1 angleX:(double)arg2 Y:(double)arg3 dx:(double)arg4 dy:(double)arg5;
+ (id)operatorWithAngleX:(double)arg1 Y:(double)arg2 dx:(double)arg3 dy:(double)arg4;
- (id)description;
- (id)transformForGeometry:(id)arg1;

@end

