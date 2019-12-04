//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, PXGLayout, PXGTransition;
@protocol PXGAnimationDelegate;

@interface PXGAnimation : NSObject
{
    _Bool _supportsSpriteTransfer;
    _Bool _isDoubleSided;
    _Bool _supportsPresentationAdjustment;
    float _dampingRatio;
    double _duration;
    long long _curve;
    long long _numberOfOscillations;
    double _maximumDistance;
    id <PXGAnimationDelegate> _delegate;
    NSDictionary *_userData;
    PXGLayout *_layout;
    PXGTransition *_transition;
}

@property(nonatomic) __weak PXGTransition *transition; // @synthesize transition=_transition;
@property(readonly, nonatomic) __weak PXGLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) NSDictionary *userData; // @synthesize userData=_userData;
@property(retain, nonatomic) id <PXGAnimationDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool supportsPresentationAdjustment; // @synthesize supportsPresentationAdjustment=_supportsPresentationAdjustment;
@property(nonatomic, setter=setDoubleSided:) _Bool isDoubleSided; // @synthesize isDoubleSided=_isDoubleSided;
@property(nonatomic) _Bool supportsSpriteTransfer; // @synthesize supportsSpriteTransfer=_supportsSpriteTransfer;
@property(nonatomic) double maximumDistance; // @synthesize maximumDistance=_maximumDistance;
@property(nonatomic) long long numberOfOscillations; // @synthesize numberOfOscillations=_numberOfOscillations;
@property(nonatomic) float dampingRatio; // @synthesize dampingRatio=_dampingRatio;
@property(nonatomic) long long curve; // @synthesize curve=_curve;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void)noteDidComplete;
@property(readonly, nonatomic) double effectiveDuration;
- (id)description;
- (id)initWithLayout:(id)arg1;
- (id)init;

@end

