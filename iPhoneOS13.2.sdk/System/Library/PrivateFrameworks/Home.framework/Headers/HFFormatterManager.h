//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFormatter;
@protocol HFTemperatureFormatter;

@interface HFFormatterManager : NSObject
{
    NSFormatter<HFTemperatureFormatter> *_temperatureFormatter;
}

+ (id)sharedInstance;
- (id)emptyStringFormatter;
- (id)identityFormatter;
- (id)booleanFormatter;
- (id)luxFormatter;
- (id)arcDegreeFormatter;
- (id)timeIntervalFormatter;
- (id)percentFormatter;
- (id)temperatureFormatter;
- (void)registerTemperatureFormatter:(id)arg1;

@end

