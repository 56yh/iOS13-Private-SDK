//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SCWatchlistDefaults : NSObject
{
    NSArray *_defaultSymbols;
}

+ (id)_legacyDefaultSymbolsByCountryCode;
+ (id)_iOS7DefaultsForCurrentCountry;
+ (id)_iOS10DefaultsForCurrentCountry;
+ (id)_defaultSymbolsByCountryCode;
+ (id)defaultsHistoryForCurrentCountry;
+ (id)emptyDefaults;
+ (id)defaultsWithDefaultSymbols:(id)arg1;
+ (id)defaultsFromCarrierBundle;
+ (id)defaultsForCurrentCountry;
@property(readonly, copy, nonatomic) NSArray *defaultSymbols; // @synthesize defaultSymbols=_defaultSymbols;
- (id)defaultsByAppendingDefaults:(id)arg1;
- (id)initWithDefaultSymbols:(id)arg1;

@end
