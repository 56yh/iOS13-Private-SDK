//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UIMotionEffectEvent.h>

__attribute__((visibility("hidden")))
@interface _UIMotionEffectAttitudeEvent : _UIMotionEffectEvent
{
    struct {
        double x;
        double y;
        double z;
        double w;
    } _attitude;
}

@property(readonly, nonatomic) CDStruct_d2b197d1 attitude; // @synthesize attitude=_attitude;
- (double)velocityRelativeToPreviousEvent:(id)arg1;
- (id)copyWithTimestamp:(double)arg1;
- (id)initWithTimestamp:(double)arg1 attitude:(CDStruct_d2b197d1)arg2;

@end

