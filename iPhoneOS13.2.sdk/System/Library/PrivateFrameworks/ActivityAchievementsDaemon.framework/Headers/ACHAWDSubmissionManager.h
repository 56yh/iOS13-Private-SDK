//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivityAchievementsDaemon/HDPeriodicActivityDelegate-Protocol.h>

@class ACHEarnedInstanceStore, HDPeriodicActivity, HDProfile, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface ACHAWDSubmissionManager : NSObject <HDPeriodicActivityDelegate>
{
    HDProfile *_profile;
    ACHEarnedInstanceStore *_earnedInstanceStore;
    HDPeriodicActivity *_scheduler;
    NSMutableDictionary *_serverConnectionsByComponentId;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableDictionary *serverConnectionsByComponentId; // @synthesize serverConnectionsByComponentId=_serverConnectionsByComponentId;
@property(retain, nonatomic) HDPeriodicActivity *scheduler; // @synthesize scheduler=_scheduler;
@property(retain, nonatomic) ACHEarnedInstanceStore *earnedInstanceStore; // @synthesize earnedInstanceStore=_earnedInstanceStore;
@property(retain, nonatomic) HDProfile *profile; // @synthesize profile=_profile;
- (id)_serverConnectionForComponentId:(unsigned int)arg1;
- (_Bool)_submitMetric:(id)arg1 container:(id)arg2 connection:(id)arg3;
- (_Bool)_computeAndSubmitAchievementCountMetric;
- (void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2;
- (void)performPeriodicActivity:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithProfile:(id)arg1 earnedInstanceStore:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

