//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMIrisVideoRecordingCommand : CAMCaptureCommand
{
    _Bool __enabled;
}

@property(readonly, nonatomic, getter=_isEnabled) _Bool _enabled; // @synthesize _enabled=__enabled;
- (void)executeWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVideoRecordingEnabled:(_Bool)arg1;

@end

