//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UILegacyEffectConverter : NSObject
{
}

+ (id)sharedConverter;
- (void)applyVibrancyConfig:(id)arg1 toEffectDescriptor:(id)arg2;
- (void)applyBackdropSettings:(id)arg1 toEffectDescriptor:(id)arg2 environment:(id)arg3;
- (id)vibrancyConfigForReducedTransperancyVibrancyStyle:(long long)arg1;
- (id)vibrancyConfigForLowQualityVibrancyStyle:(long long)arg1;
- (id)vibrancyConfigForHighQualityVibrancyStyle:(long long)arg1;
- (id)backdropSettingsForBlurStyle:(long long)arg1;

@end

