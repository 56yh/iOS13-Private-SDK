//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/RETrainingContext.h>

@class NSMutableArray, RERemoteTrainingServer;

@interface RERemoteTrainingContext : RETrainingContext
{
    NSMutableArray *_trainingElements;
    NSMutableArray *_trainingEvents;
    NSMutableArray *_trainingInteractions;
    RERemoteTrainingServer *_trainingServer;
}

// - (void).cxx_destruct;
- (void)_queue_setRemoteAttribute:(id)arg1 forKey:(id)arg2;
- (void)_queue_performRemoteTraining;
- (void)_queue_enqueueRemoteTrainingForElement:(id)arg1 isPositiveEvent:(BOOL)arg2 interaction:(id)arg3;
- (void)becomeCurrent;
- (BOOL)isCurrent;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (void)trainWithElement:(id)arg1 isPositiveEvent:(BOOL)arg2 interaction:(id)arg3;
- (id)initWithProcessName:(id)arg1;
- (void)_didSetAttributeForRemoteTraining;
- (void)_willSetAttributeForRemoteTraining;
- (void)_didPerformRemoteTraining;
- (void)_willPerformRemoteTraining;
- (void)trainWithPredictionElement:(id)arg1 isPositiveEvent:(BOOL)arg2 interaction:(id)arg3;

@end

