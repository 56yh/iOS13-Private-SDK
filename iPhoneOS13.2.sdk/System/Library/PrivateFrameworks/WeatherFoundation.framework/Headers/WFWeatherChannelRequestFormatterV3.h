//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WeatherFoundation/WFForecastRequestFormatter-Protocol.h>

@class NSString;

@interface WFWeatherChannelRequestFormatterV3 : NSObject <WFForecastRequestFormatter>
{
}

+ (id)forecastRequestForComponents:(id)arg1 location:(id)arg2 locale:(id)arg3 date:(id)arg4 queryItems:(id)arg5;
+ (id)forecastRequest:(id)arg1 forLocation:(id)arg2 locale:(id)arg3 date:(id)arg4 queryItems:(id)arg5 rules:(id)arg6;
+ (id)hostURLForService;
+ (id)forecastRequest:(unsigned long long)arg1 forLocation:(id)arg2 locale:(id)arg3 date:(id)arg4 rules:(id)arg5;
+ (id)forecastRequest:(unsigned long long)arg1 forLocation:(id)arg2 locale:(id)arg3 date:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

