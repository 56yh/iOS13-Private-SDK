//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebCoreAudioCaptureSourceIOSListener : NSObject
{
    struct CoreAudioCaptureSourceFactoryIOS *_callback;
}

- (void)sessionMediaServicesWereReset:(id)arg1;
- (void)handleInterruption:(id)arg1;
- (void)invalidate;
- (id)initWithCallback:(struct CoreAudioCaptureSourceFactoryIOS *)arg1;

@end

