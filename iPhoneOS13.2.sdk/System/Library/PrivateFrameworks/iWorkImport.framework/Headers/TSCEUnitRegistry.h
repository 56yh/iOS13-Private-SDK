//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCEUnitRegistry : NSObject
{
}

+ (int)dimensionForUnit:(int)arg1;
+ (struct TSUDecimal)convert:(const struct TSUDecimal *)arg1 fromUnit:(CDStruct_1ef3fb1f)arg2 toUnit:(CDStruct_1ef3fb1f)arg3;
+ (_Bool)unitIsMetric:(int)arg1;
+ (CDStruct_1ef3fb1f)prefixedUnitForString:(id)arg1;
+ (int)binaryUnitPrefixForChars:(unsigned short)arg1:(unsigned short)arg2;
+ (int)unitPrefixForCharacter:(unsigned short)arg1;
+ (double)multiplierForUnitPrefix:(int)arg1;
+ (int)unitForString:(id)arg1;
+ (int)canonicalUnitForDimension:(int)arg1;
+ (id)currencyCodeForUnit:(int)arg1;
+ (int)unitForCurrencyCode:(id)arg1;
+ (void)initialize;

@end

