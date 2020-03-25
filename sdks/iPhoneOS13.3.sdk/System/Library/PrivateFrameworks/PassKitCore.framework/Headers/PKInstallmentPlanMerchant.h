//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface PKInstallmentPlanMerchant : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_identifier;
    NSString *_name;
    NSUInteger _categoryCode;
    NSString *_city;
    NSString *_state;
    NSString *_postalCode;
    NSString *_country;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(copy, nonatomic) NSString *postalCode; // @synthesize postalCode=_postalCode;
@property(copy, nonatomic) NSString *state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(nonatomic) NSUInteger categoryCode; // @synthesize categoryCode=_categoryCode;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqualToInstallmentPlanMerchant:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
