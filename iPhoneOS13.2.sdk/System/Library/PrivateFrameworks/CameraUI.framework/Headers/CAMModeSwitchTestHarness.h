//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraUI/CAMModeAndDeviceConfigurationTestHarness.h>

@class CAMViewfinderViewController;

@interface CAMModeSwitchTestHarness : CAMModeAndDeviceConfigurationTestHarness
{
    _Bool _testingAnimation;
    CAMViewfinderViewController *_viewfinderViewController;
    long long _desiredMode;
}

@property(readonly, nonatomic, getter=isTestingAnimation) _Bool testingAnimation; // @synthesize testingAnimation=_testingAnimation;
@property(readonly, nonatomic) long long desiredMode; // @synthesize desiredMode=_desiredMode;
@property(readonly, nonatomic) CAMViewfinderViewController *viewfinderViewController; // @synthesize viewfinderViewController=_viewfinderViewController;
- (void)_ensureCaptureMode:(long long)arg1 thenPerform:(id /* block */)arg2;
- (void)handleDidOpenViewfinderForReason:(long long)arg1;
- (void)startTesting;
- (id)initWithTestName:(id)arg1 viewfinderViewController:(id)arg2 mode:(long long)arg3 testingAnimation:(_Bool)arg4;

@end

