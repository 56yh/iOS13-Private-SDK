//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoSkipThresholdObserving-Protocol.h>

@class NSString;
@protocol SVVideoLoadingStateObserving, SVVideoSkipThreshold;

@interface SVVideoSkipThresholdObserver : NSObject <SVVideoSkipThresholdObserving>
{
    _Bool _loading;
    id /* block */ block;
    id <SVVideoSkipThreshold> _thresholdProvider;
    id <SVVideoLoadingStateObserving> _loadingStateObserver;
}

@property(readonly, nonatomic) id <SVVideoLoadingStateObserving> loadingStateObserver; // @synthesize loadingStateObserver=_loadingStateObserver;
@property(readonly, nonatomic) id <SVVideoSkipThreshold> thresholdProvider; // @synthesize thresholdProvider=_thresholdProvider;
@property(copy, nonatomic, setter=onChange:) id /* block */ block; // @synthesize block;
- (void)loadingCompletedWithThreshold:(double)arg1;
@property(readonly, nonatomic) _Bool loading; // @synthesize loading=_loading;
- (id)initWithLoadingStateObserver:(id)arg1 thresholdProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

