//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/RESingleton.h>

@class REObserverStore;

@interface REObservableSingleton : RESingleton
{
    REObserverStore *_store;
}

// - (void).cxx_destruct;
- (void)enumerateObservers:(id /* CDUnknownBlockType */)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) NSUInteger numberOfObservers;
- (id)_init;

@end

