//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDictionary, NSString;

@protocol IPNamePreferenceInfoProvider <NSObject>
+ (NSDictionary *)canonicalKeyToValueIdentifierToNumericValueMap;
+ (NSDictionary *)valueIdentifierToValueMapFromCanonicalKey:(NSString *)arg1;
+ (NSDictionary *)valueToValueIdentifierMapFromCanonicalKey:(NSString *)arg1;
+ (NSDictionary *)canonicalNameToNativeKeyName;
+ (NSDictionary *)nativeKeyNameToCanonicalKeyName;
+ (NSString *)domain;
@end

