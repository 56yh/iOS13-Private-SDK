//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SAAceClientState.h>

@class NSArray, NSString;

@interface SALocalSearchGeoClientState : SAAceClientState
{
}

+ (id)geoClientStateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)geoClientState;
+ (id)uniqueObjectIdentifier;
+ (id)syncKey;
+ (id)persistencePolicy;
+ (id)deliveryDeadline;
@property(copy, nonatomic) NSString *environment;
@property(copy, nonatomic) NSArray *additionalEnabledTransitMarkets;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

