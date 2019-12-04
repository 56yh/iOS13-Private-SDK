//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIVectorOperatable-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIInterpolatedTransform : NSObject <UIVectorOperatable>
{
    CDStruct_e79446ac _transform;
    double _rotationEpsilon;
    double _scaleEpsilon;
    double _translationEpsilon;
}

+ (id)zero;
+ (id)epsilon;
+ (id)valueWithDecomposedTransform:(CDStruct_e79446ac)arg1 rotationEpsilon:(double)arg2 scaleEpsilon:(double)arg3 translationEpsilon:(double)arg4;
+ (id)valueWithDecomposedTransform:(CDStruct_e79446ac)arg1;
+ (id)valueWithCATransform3D:(struct CATransform3D)arg1 rotationEpsilon:(double)arg2 scaleEpsilon:(double)arg3 translationEpsilon:(double)arg4;
+ (id)valueWithCATransform3D:(struct CATransform3D)arg1;
- (void)reinitWithVector:(id)arg1;
- (id)multiplyByVector:(id)arg1;
- (id)multiplyByScalar:(double)arg1;
- (id)addVector:(id)arg1;
- (void)integrateWithVelocity:(id)arg1 target:(id)arg2 intermediateTarget:(id)arg3 intermediateTargetVelocity:(id)arg4 parameters:(CDStruct_9e265dec)arg5 state:(CDStruct_289c5ec3)arg6 delta:(double)arg7;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *debugDescription;
- (_Bool)isUndefined;
- (_Bool)isApproximatelyEqualTo:(id)arg1 withinEpsilon:(id)arg2;
- (_Bool)isApproximatelyEqualTo:(id)arg1;
- (id)interpolateTo:(id)arg1 progress:(double)arg2;
- (id)getNSValue;
- (id)getValue;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

