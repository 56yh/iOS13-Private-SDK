//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PrototypeTools/PTSettings.h>

#import <SpringBoardFoundation/PTSettingsKeyPathObserver-Protocol.h>

@class BSAnimationSettings, NSString, PTPointSettings;

@interface SBFAnimationSettings : PTSettings <PTSettingsKeyPathObserver>
{
    BSAnimationSettings *_exportedSettings;
    long long _animationType;
    double _delay;
    unsigned long long _frameRate;
    unsigned long long _curve;
    PTPointSettings *_controlPoint1Settings;
    PTPointSettings *_controlPoint2Settings;
    double _duration;
    double _mass;
    double _stiffness;
    double _damping;
    double _epsilon;
    double _speed;
}

+ (id)_moduleWithSectionTitle:(id)arg1 delay:(_Bool)arg2 frameRate:(_Bool)arg3;
+ (id)_moduleWithSectionTitle:(id)arg1;
+ (id)settingsControllerModule;
+ (_Bool)ignoresKey:(id)arg1;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(nonatomic) double epsilon; // @synthesize epsilon=_epsilon;
@property(nonatomic) double damping; // @synthesize damping=_damping;
@property(nonatomic) double stiffness; // @synthesize stiffness=_stiffness;
@property(nonatomic) double mass; // @synthesize mass=_mass;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) PTPointSettings *controlPoint2Settings; // @synthesize controlPoint2Settings=_controlPoint2Settings;
@property(retain, nonatomic) PTPointSettings *controlPoint1Settings; // @synthesize controlPoint1Settings=_controlPoint1Settings;
@property(nonatomic) unsigned long long curve; // @synthesize curve=_curve;
@property(nonatomic) unsigned long long frameRate; // @synthesize frameRate=_frameRate;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(nonatomic) long long animationType; // @synthesize animationType=_animationType;
- (id)BSAnimationSettings;
@property(readonly, nonatomic) double calculatedDuration;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (void)setDefaultValues;
- (void)dealloc;
- (id)initWithDefaultValues;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

