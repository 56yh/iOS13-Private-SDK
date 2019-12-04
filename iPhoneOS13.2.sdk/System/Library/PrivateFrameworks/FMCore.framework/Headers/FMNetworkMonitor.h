//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NWPathEvaluator;

@interface FMNetworkMonitor : NSObject
{
    NWPathEvaluator *_evaluator;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NWPathEvaluator *evaluator; // @synthesize evaluator=_evaluator;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)registerNetworkMonitorLaunchEvent:(_Bool)arg1;
- (_Bool)isNetworkUp;
- (_Bool)isMonitoring;
- (void)stopMonitoring;
- (void)startMonitoring;

@end

