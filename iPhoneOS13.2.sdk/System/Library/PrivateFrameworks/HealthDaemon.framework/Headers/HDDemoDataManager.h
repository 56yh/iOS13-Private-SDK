//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDHealthDaemonReadyObserver-Protocol.h>

@class HDDemoDataGenerator, HDProfile, NSString;
@protocol OS_dispatch_queue;

@interface HDDemoDataManager : NSObject <HDHealthDaemonReadyObserver>
{
    NSObject<OS_dispatch_queue> *_demoDataQueue;
    HDProfile *_profile;
    HDDemoDataGenerator *_generator;
}

@property(readonly, nonatomic) HDDemoDataGenerator *generator; // @synthesize generator=_generator;
@property(readonly, nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
- (void)daemonReady:(id)arg1;
- (void)_queue_generateDemoDataIfNeeded;
- (id)initWithProfile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

