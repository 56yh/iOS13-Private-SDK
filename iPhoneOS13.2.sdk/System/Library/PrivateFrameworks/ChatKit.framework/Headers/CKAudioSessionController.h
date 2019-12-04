//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CKAudioSessionController : NSObject
{
    _Bool _active;
    _Bool _dirty;
    unsigned long long _options;
}

+ (id)queue;
+ (id)shareInstance;
@property unsigned long long options; // @synthesize options=_options;
@property(getter=isDirty) _Bool dirty; // @synthesize dirty=_dirty;
@property(getter=isActive) _Bool active; // @synthesize active=_active;
- (void)audioSessionMediaServicesWereReset:(id)arg1;
- (void)audioSessionMediaServicesWereLost:(id)arg1;
- (void)audioSessionInterruption:(id)arg1;
- (void)audioSessionRouteChange:(id)arg1;
- (void)configureAudioSessionWithOptions:(unsigned long long)arg1;
- (void)setActive:(_Bool)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
@property(readonly) _Bool shouldDuckOthers;
@property(readonly) _Bool shouldStopPlayingWhenSilent;
@property(readonly) _Bool shouldUseSpeaker;
- (void)deactivate;
- (void)activateWithOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)dealloc;

@end

