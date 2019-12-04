//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDuetContext/_CDContextualPredicate.h>

#import <CoreDuetContext/_CDDictionaryEncoding-Protocol.h>

@class NSDictionary, NSString;

@interface _CDMDCSContextualPredicate : _CDContextualPredicate <_CDDictionaryEncoding>
{
    NSString *_identifier;
    NSDictionary *_parameters;
}

+ (_Bool)supportsSecureCoding;
+ (id)predicates;
+ (id)predicateWithIdentifier:(id)arg1;
+ (id)predicateForForegroundApp;
+ (id)predicateForBacklightOnStatus;
+ (id)predicateForFirstPartyWorkoutMatchingTypes:(id)arg1 states:(id)arg2;
+ (id)predicateForIsConnectedToAudioBluetoothDevice;
+ (id)predicateForIsConnectedToCar;
+ (id)predicateForNetworkQualityBad;
+ (id)predicateForNetworkQualityFair;
+ (id)predicateForPhotosAppBecameForeground;
+ (id)predicateForUserIsArrivingAtHome;
+ (id)predicateForUserIsLeavingHome;
+ (id)orPredicateWithSubpredicates:(id)arg1 identifier:(id)arg2;
+ (id)andPredicateWithSubpredicates:(id)arg1 identifier:(id)arg2;
+ (id)notPredicateWithSubpredicate:(id)arg1 identifier:(id)arg2;
+ (id)contextualPredicateForKeyPaths:(id)arg1 withPredicate:(id)arg2 identifier:(id)arg3;
+ (id)_predicateForKeyPath:(id)arg1 withPredicate:(id)arg2 identifier:(id)arg3;
+ (id)_predicateForKeyPath:(id)arg1 equalToValue:(id)arg2 identifier:(id)arg3;
+ (id)_predicateForChangeAtKeyPath:(id)arg1 identifier:(id)arg2;
@property(retain, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithPlistDictionary:(id)arg1;
- (id)plistDictionary;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 parameters:(id)arg2;

@end

