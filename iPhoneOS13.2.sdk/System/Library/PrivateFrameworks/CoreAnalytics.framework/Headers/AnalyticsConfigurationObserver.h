//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol AnalyticsConfigurationObserverDelegate, OS_dispatch_queue;

@interface AnalyticsConfigurationObserver : NSObject
{
    struct shared_ptr<(anonymous namespace)::ConfigurationObserverImpl> observer;
    NSObject<OS_dispatch_queue> *_queue;
    id <AnalyticsConfigurationObserverDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <AnalyticsConfigurationObserverDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id).cxx_construct;
- (_Bool)stopObservingConfigurationType:(id)arg1;
- (_Bool)startObservingConfigurationType:(id)arg1;
- (void)setConfigurationObserverDelegate:(id)arg1 queue:(id)arg2;
- (void)dealloc;
- (id)init;

@end

