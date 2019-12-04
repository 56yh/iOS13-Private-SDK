//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssistantServices/STSiriModelObject.h>

@class NSNumber, STTemperature;

@interface STWeatherAttributes : STSiriModelObject
{
    long long _condition;
    STTemperature *_temperature;
    STTemperature *_highTemperature;
    STTemperature *_lowTemperature;
    NSNumber *_chanceOfPrecipitation;
}

+ (_Bool)supportsSecureCoding;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)chanceOfPrecipitation;
- (id)lowTemperature;
- (id)highTemperature;
- (id)temperature;
- (long long)condition;
- (id)_initWithCondition:(long long)arg1 temperature:(id)arg2 highTemperature:(id)arg3 lowTemperature:(id)arg4 chanceOfPrecipitation:(id)arg5;

@end

