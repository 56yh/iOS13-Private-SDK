//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _UIVelocityIntegrator;

__attribute__((visibility("hidden")))
@interface _UIDeepPressAnalyzer : NSObject
{
    _UIVelocityIntegrator *_touchForceIntegrator;
    _UIVelocityIntegrator *_locationIntegrator;
}

@property(retain, nonatomic) _UIVelocityIntegrator *locationIntegrator; // @synthesize locationIntegrator=_locationIntegrator;
@property(retain, nonatomic) _UIVelocityIntegrator *touchForceIntegrator; // @synthesize touchForceIntegrator=_touchForceIntegrator;
- (double)_touchForceFromTouches:(id)arg1;
@property(readonly, nonatomic, getter=isDeepPressLikely) _Bool deepPressLikely;
- (void)analyzeTouchForce:(double)arg1 centroidAtLocation:(struct CGPoint)arg2;
- (void)analyzeTouches:(id)arg1;
- (id)init;

@end

