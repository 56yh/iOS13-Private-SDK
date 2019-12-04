//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSSet, NSString;

@interface REFeatureValue : NSObject <NSCopying>
{
}

+ (id)featureValueWithSet:(id)arg1;
+ (id)featureValueWithString:(id)arg1;
+ (id)featureValueWithDouble:(double)arg1;
+ (id)featureValueWithInt64:(long long)arg1;
+ (id)featureValueWithBool:(_Bool)arg1;
+ (id)featureValueWithDictionary:(id)arg1;
+ (id)nullValueForFeature:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
@property(readonly, nonatomic) NSSet *setValue;
@property(readonly, copy, nonatomic) NSString *stringValue;
@property(readonly, nonatomic) double doubleValue;
@property(readonly, nonatomic) unsigned long long int64Value;
@property(readonly, nonatomic) _Bool boolValue;
@property(readonly, nonatomic) unsigned long long type;
- (id)dictionaryEncoding;
- (unsigned long long)_integralFeatureValue;

@end

