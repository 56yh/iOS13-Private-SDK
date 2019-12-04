//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WeatherFoundation/WFTask.h>

@class WFLocation;

@interface WFAggregateForecastRequest : WFTask
{
    WFLocation *_location;
    id /* block */ _completionHandler;
}

@property(copy, nonatomic) id /* block */ completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) WFLocation *location; // @synthesize location=_location;
- (void)cleanup;
- (void)handleCancellation;
- (void)handleResponse:(id)arg1;
- (id)initWithLocation:(id)arg1 completionHandler:(id /* block */)arg2;

@end

