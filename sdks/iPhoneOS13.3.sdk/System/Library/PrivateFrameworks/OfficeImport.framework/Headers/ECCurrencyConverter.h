//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ECCurrencyConverter : NSObject
{
    NSMutableDictionary *mXlToLassoCurrencyCode;
    NSMutableDictionary *mLassoToXlCurrencyCode;
    NSMutableDictionary *mXlAccountingFormat;
    NSMutableDictionary *mXlToLassoCurrencyCodeBySymbol;
}

+ (id)currencyConverter;
// - (void).cxx_destruct;
- (int)xlAccountFormatFromLasso:(id)arg1;
- (id)xlCurrencyCodeFromLasso:(id)arg1;
- (id)lassoCurrencyCodeFromXl:(id)arg1;
- (id)lassoCurrencyCodeForDollar;
- (void)populateDictionaries;

@end

