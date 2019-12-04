//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSArray, NSDictionary, NSString, PKOSVersionRequirement;

@interface PKPassUpgradeRequest : NSObject <NSSecureCoding>
{
    unsigned long long _type;
    PKOSVersionRequirement *_minimumOSVersion;
    NSString *_secureElementIdentifier;
    NSArray *_paymentApplicationIdentifiers;
    NSDictionary *_fields;
}

+ (_Bool)supportsSecureCoding;
+ (id)passUpgradeRequestFromDictionary:(id)arg1;
@property(readonly, nonatomic) NSDictionary *fields; // @synthesize fields=_fields;
@property(readonly, nonatomic) NSArray *paymentApplicationIdentifiers; // @synthesize paymentApplicationIdentifiers=_paymentApplicationIdentifiers;
@property(readonly, nonatomic) NSString *secureElementIdentifier; // @synthesize secureElementIdentifier=_secureElementIdentifier;
@property(readonly, nonatomic) PKOSVersionRequirement *minimumOSVersion; // @synthesize minimumOSVersion=_minimumOSVersion;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

