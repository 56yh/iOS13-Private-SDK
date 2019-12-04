//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol TIAnalyticsServiceProvider;

@interface TIAnalyticsService : NSObject
{
    NSMutableDictionary *_eventSpecs;
    id <TIAnalyticsServiceProvider> _provider;
}

+ (void)setMockInstance:(id)arg1;
+ (id)sharedInstance;
@property(readonly, nonatomic) id <TIAnalyticsServiceProvider> provider; // @synthesize provider=_provider;
@property(readonly, nonatomic) NSMutableDictionary *eventSpecs; // @synthesize eventSpecs=_eventSpecs;
- (void)sendCoreAnalyticsEventWithName:(id)arg1 payload:(id)arg2;
- (void)logDispatchErrorsForEventWithName:(id)arg1 errors:(id)arg2;
- (void)appendToErrors:(id)arg1 code:(long long)arg2 message:(id)arg3;
- (id)settingsFromEventSpec:(id)arg1 inputMode:(id)arg2 errors:(id)arg3;
- (id)settingsFromEventSpec:(id)arg1 values:(id)arg2 errors:(id)arg3;
- (void)addSettings:(id)arg1 toPayload:(id)arg2 errors:(id)arg3;
- (_Bool)_dispatchEventWithName:(id)arg1 values:(id)arg2 inputMode:(id)arg3 error:(id *)arg4;
- (_Bool)dispatchEventWithName:(id)arg1 values:(id)arg2 inputMode:(id)arg3 error:(id *)arg4;
- (_Bool)dispatchEventWithName:(id)arg1 values:(id)arg2 error:(id *)arg3;
- (_Bool)dispatchEventWithName:(id)arg1 inputMode:(id)arg2 error:(id *)arg3;
- (_Bool)dispatchEventWithName:(id)arg1 error:(id *)arg2;
- (void)dispatchEventWithName:(id)arg1 values:(id)arg2 inputMode:(id)arg3;
- (void)dispatchEventWithName:(id)arg1 values:(id)arg2;
- (void)dispatchEventWithName:(id)arg1 inputMode:(id)arg2;
- (void)dispatchEventWithName:(id)arg1;
- (id)eventSpecFromName:(id)arg1;
- (_Bool)isEventSpecRegisteredWithName:(id)arg1;
- (_Bool)registerEventSpec:(id)arg1 error:(id *)arg2;
- (void)registerEventSpec:(id)arg1;
- (id)initWithProvider:(id)arg1;
- (id)init;

@end

