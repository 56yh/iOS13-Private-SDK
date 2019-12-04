//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSNumber, NSString;

@interface ASDRepairApplicationRequestOptions : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_bundleID;
    NSNumber *_accountDSID;
    long long _claimStyle;
    unsigned long long _exitReason;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long exitReason; // @synthesize exitReason=_exitReason;
@property(readonly, nonatomic) long long claimStyle; // @synthesize claimStyle=_claimStyle;
@property(readonly, nonatomic) NSNumber *accountDSID; // @synthesize accountDSID=_accountDSID;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBundleID:(id)arg1 accountIdentifier:(id)arg2 claimStyle:(long long)arg3;
- (id)initWithBundleID:(id)arg1;

@end

