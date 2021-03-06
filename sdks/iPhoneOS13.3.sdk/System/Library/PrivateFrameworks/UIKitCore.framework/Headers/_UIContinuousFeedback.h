//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIFeedback.h>

#import <UIKitCore/_UIFeedbackContinuousPlayable-Protocol.h>

@interface _UIContinuousFeedback : _UIFeedback <_UIFeedbackContinuousPlayable>
{
    double _duration;
    long long _type;
}

+ (id)continuousFeedbackForType:(long long)arg1;
+ (id)type;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (id)_debugDictionary;
- (void)_playedAtTime:(double)arg1 engine:(id)arg2;
- (NSUInteger)_effectiveEventType;
- (id)_playableProtocol;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;

@end

