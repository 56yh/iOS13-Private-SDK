//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>



@class NSDictionary, NSSet;

@interface HMDStreamingCapabilities : HMFObject <NSSecureCoding>
{
    _Bool _supportsComfortNoise;
    NSDictionary *_supportedAudioCodecs;
    NSSet *_supportedVideoCodecs;
    NSSet *_supportedVideoResolutions;
    NSSet *_supportedH264Profiles;
    NSSet *_supportedH264Levels;
    NSSet *_supportedPacketizationModes;
    NSSet *_supportedBitRateSettings;
    NSSet *_supportedAudioSampleRates;
    unsigned long long _streamingTierType;
}

+ (_Bool)is16x9Resolution:(id)arg1;
+ (_Bool)is4x3Resolution:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (void)translateCapabilities:(id)arg1;
@property(nonatomic) _Bool supportsComfortNoise; // @synthesize supportsComfortNoise=_supportsComfortNoise;
@property(nonatomic) unsigned long long streamingTierType; // @synthesize streamingTierType=_streamingTierType;
@property(readonly, nonatomic) NSSet *supportedAudioSampleRates; // @synthesize supportedAudioSampleRates=_supportedAudioSampleRates;
@property(readonly, nonatomic) NSSet *supportedBitRateSettings; // @synthesize supportedBitRateSettings=_supportedBitRateSettings;
@property(readonly, nonatomic) NSSet *supportedPacketizationModes; // @synthesize supportedPacketizationModes=_supportedPacketizationModes;
@property(readonly, nonatomic) NSSet *supportedH264Levels; // @synthesize supportedH264Levels=_supportedH264Levels;
@property(readonly, nonatomic) NSSet *supportedH264Profiles; // @synthesize supportedH264Profiles=_supportedH264Profiles;
@property(readonly, nonatomic) NSSet *supportedVideoResolutions; // @synthesize supportedVideoResolutions=_supportedVideoResolutions;
@property(readonly, nonatomic) NSSet *supportedVideoCodecs; // @synthesize supportedVideoCodecs=_supportedVideoCodecs;
@property(readonly, nonatomic) NSDictionary *supportedAudioCodecs; // @synthesize supportedAudioCodecs=_supportedAudioCodecs;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateWithRemoteSettings:(id)arg1;
- (void)_updateWithStreamPreference:(id)arg1;
- (id)initWithStreamPreference:(id)arg1;
- (id)description;

@end

