//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RelevanceEngine/RERelevanceProviderManager.h>

#import <RelevanceEngine/REPredictorObserver-Protocol.h>
#import <RelevanceEngine/REWorkoutRelevanceProviderManagerProperties-Protocol.h>

@class NSDate, NSString;

@interface REWorkoutRelevanceProviderManager : RERelevanceProviderManager <REPredictorObserver, REWorkoutRelevanceProviderManagerProperties>
{
    unsigned long long _state;
    NSDate *_lastWorkoutDate;
}

+ (_Bool)_wantsSeperateRelevanceQueue;
+ (Class)_relevanceProviderClass;
+ (id)_features;
@property(readonly, nonatomic) unsigned long long state;
- (void)predictorDidUpdate:(id)arg1;
- (void)_prepareForUpdate;
- (void)pause;
- (void)resume;
- (id)_valueForProvider:(id)arg1 feature:(id)arg2;
- (id)initWithQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

