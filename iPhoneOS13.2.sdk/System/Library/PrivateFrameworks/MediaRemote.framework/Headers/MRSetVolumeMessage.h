//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MRSetVolumeMessage : MRProtocolMessage
{
}

- (unsigned long long)type;
@property(readonly, nonatomic) float volume;
@property(readonly, nonatomic) NSString *outputDeviceUID;
- (id)initWithVolume:(float)arg1 outputDeviceUID:(id)arg2;
- (id)initWithVolume:(float)arg1;

@end

