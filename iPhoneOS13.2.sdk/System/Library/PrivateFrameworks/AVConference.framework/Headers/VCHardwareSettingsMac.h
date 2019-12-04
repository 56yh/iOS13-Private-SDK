//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVConference/VCHardwareSettings.h>

#import <AVConference/VCHardwareSettingsMacProtocol-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCHardwareSettingsMac : VCHardwareSettings <VCHardwareSettingsMacProtocol>
{
    _Bool _hiDefEncoding;
    int _hardwareScore;
    int _numProcessors;
    int _mhrtz;
    int _isG5;
    int _machineType;
    int _cpuFamily;
    NSString *_cpuType;
    NSString *_machineName;
    _Bool _isGVAEncoderAvailableInitialized;
    _Bool _isGVAEncoderAvailable;
}

+ (long long)deviceClass;
+ (id)sharedInstance;
@property(readonly, nonatomic) _Bool supportsHEIFEncoding;
@property(readonly, nonatomic) _Bool isDeviceLargeScreen;
@property(readonly, nonatomic) unsigned int maxActiveVideoDecoders;
@property(readonly, nonatomic) unsigned int maxActiveVideoEncoders;
@property(readonly, nonatomic) _Bool useSoftFramerateSwitching;
@property(readonly, nonatomic) int hardwareScore;
@property(readonly, nonatomic) NSString *machineName;
@property(readonly, nonatomic) unsigned int hwEncoderEnterBitrate;
@property(readonly, nonatomic) unsigned int hwEncoderExitBitrate;
@property(readonly, nonatomic) _Bool isIMac;
@property(readonly, nonatomic) _Bool isMacPro;
@property(readonly, nonatomic) _Bool isMacBookWVGA;
@property(readonly, nonatomic) _Bool canDoHiDefDecoding;
@property(readonly, nonatomic) _Bool canDoHEVC;
@property(readonly, nonatomic) _Bool canDoHiDefEncoding;
- (_Bool)isGVAEncoderAvailable;
- (_Bool)_isModel:(id)arg1;
- (_Bool)_isMachineNewerThanSandybridge:(int)arg1;
- (id)_getCPUTypeStringForMachineType:(int)arg1;
- (int)_getCPUFamilyType;
- (void)dealloc;
- (id)init;

@end

