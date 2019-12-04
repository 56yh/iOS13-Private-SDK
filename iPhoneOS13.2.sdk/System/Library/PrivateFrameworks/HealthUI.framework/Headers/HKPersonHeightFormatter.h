//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLengthFormatter, NSNumber;

@interface HKPersonHeightFormatter : NSObject
{
    NSLengthFormatter *_heightFormatter;
    NSNumber *_usesImperialUnits;
}

+ (id)sharedFormatter;
- (id)localizedStringFromHeightInCentimeters:(id)arg1;
- (double)centimetersFromFeet:(double)arg1 inches:(double)arg2;
- (void)getFeet:(long long *)arg1 inches:(long long *)arg2 fromCentimeters:(double)arg3;
- (id)formattedValueForInches:(double)arg1;
- (id)formattedValueForFeet:(double)arg1;
- (id)formattedValueForCentimeters:(double)arg1;
@property(readonly, nonatomic) _Bool usesImperialUnits;
- (void)_localeChanged:(id)arg1;
- (void)dealloc;
- (id)init;

@end

