//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVConference/VCAudioStreamConfig.h>

@class VCAudioRuleCollection;

__attribute__((visibility("hidden")))
@interface VCSessionParticipantAudioStreamConfig : VCAudioStreamConfig
{
    VCAudioRuleCollection *_audioRules;
    VCAudioRuleCollection *_audioRulesNegotiated;
}

@property(retain, nonatomic) VCAudioRuleCollection *audioRules; // @synthesize audioRules=_audioRules;
@property(retain, nonatomic) VCAudioRuleCollection *audioRulesNegotiated; // @synthesize audioRulesNegotiated=_audioRulesNegotiated;
- (void)dealloc;

@end

