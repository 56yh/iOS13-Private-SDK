//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSSet, NSString, NSURL;

@interface PKTransitPartner : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    NSString *_localizedDisplayName;
    NSURL *_purchaseURL;
    NSSet *_supportedTransitNetworkIdentifiers;
    long long _maxNotificationCount;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long maxNotificationCount; // @synthesize maxNotificationCount=_maxNotificationCount;
@property(readonly, copy, nonatomic) NSSet *supportedTransitNetworkIdentifiers; // @synthesize supportedTransitNetworkIdentifiers=_supportedTransitNetworkIdentifiers;
@property(readonly, copy, nonatomic) NSURL *purchaseURL; // @synthesize purchaseURL=_purchaseURL;
@property(readonly, copy, nonatomic) NSString *localizedDisplayName; // @synthesize localizedDisplayName=_localizedDisplayName;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 localizedDisplayName:(id)arg2 purchaseURL:(id)arg3 supportedTransitNetworkIdentifiers:(id)arg4;
- (id)initWithIdentifier:(id)arg1 localizedDisplayName:(id)arg2;

@end
