//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/NFCopying-Protocol.h>

@class NSArray, NSDictionary, NSString;
@protocol FCPersonalizationAggregate;

@protocol FCDerivedPersonalizationData <NSObject, NFCopying>
- (id <FCPersonalizationAggregate>)aggregateForFeatureKey:(NSString *)arg1;
- (NSDictionary *)aggregatesForFeatureKeys:(NSArray *)arg1;
@end
