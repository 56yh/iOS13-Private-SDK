//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UIFeedback.h>

#import <UIKitCore/_UIFeedbackContinuousPlayable-Protocol.h>

@class NSString;

@interface _UIContinuousFeedback : _UIFeedback <_UIFeedbackContinuousPlayable>
{
    double _duration;
    long long _type;
}

+ (id)continuousFeedbackForType:(long long)arg1;
+ (id)type;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (id)_debugDictionary;
- (void)_playedAtTime:(double)arg1 engine:(id)arg2;
- (unsigned long long)_effectiveEventType;
- (id)_playableProtocol;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
@property(readonly) Class superclass;

@end

