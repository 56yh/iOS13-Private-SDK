//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RelevanceEngine/REFeatureValue.h>

@class NSString;

@interface _REStringFeatureValue : REFeatureValue
{
    NSString *_value;
}

+ (id)featureValueWithString:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)_integralFeatureValue;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)stringValue;
- (unsigned long long)type;
- (id)initWithValue:(id)arg1;

@end

