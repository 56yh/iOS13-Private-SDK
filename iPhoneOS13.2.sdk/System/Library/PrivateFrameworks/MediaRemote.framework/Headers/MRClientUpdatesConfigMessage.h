//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

__attribute__((visibility("hidden")))
@interface MRClientUpdatesConfigMessage : MRProtocolMessage
{
}

- (unsigned long long)type;
@property(readonly, nonatomic) _Bool outputDeviceUpdates;
@property(readonly, nonatomic) _Bool keyboardUpdates;
@property(readonly, nonatomic) _Bool volumeUpdates;
@property(readonly, nonatomic) _Bool artworkUpdates;
@property(readonly, nonatomic) _Bool nowPlayingUpdates;
- (id)initWithNowPlayingUpdates:(_Bool)arg1 artworkUpdates:(_Bool)arg2 volumeUpdates:(_Bool)arg3 keyboardUpdates:(_Bool)arg4 outputDeviceUpdates:(_Bool)arg5;

@end

