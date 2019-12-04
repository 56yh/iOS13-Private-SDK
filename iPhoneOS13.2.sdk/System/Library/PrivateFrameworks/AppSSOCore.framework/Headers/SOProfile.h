//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SOProfile : NSObject <NSCopying, NSSecureCoding>
{
    long long _type;
    NSArray *_URLPrefix;
    NSArray *_hosts;
    NSString *_extensionBundleIdentifier;
    NSString *_realm;
}

+ (_Bool)supportsSecureCoding;
+ (id)stringWithProfileType:(long long)arg1;
@property(retain, nonatomic) NSString *realm; // @synthesize realm=_realm;
@property(retain, nonatomic) NSString *extensionBundleIdentifier; // @synthesize extensionBundleIdentifier=_extensionBundleIdentifier;
@property(retain, nonatomic) NSArray *hosts; // @synthesize hosts=_hosts;
@property(retain, nonatomic) NSArray *URLPrefix; // @synthesize URLPrefix=_URLPrefix;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end

