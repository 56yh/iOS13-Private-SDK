//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSMappedBundleInfo : NSObject
{
    NSString *_bundleIdentifier;
    NSString *_clientName;
    NSString *_clientVersion;
    NSString *_scheme;
    NSString *_secureScheme;
    NSString *_accountMediaType;
}

+ (id)_clientVersionFromProcessInfo:(id)arg1 clientName:(id)arg2;
+ (id)_clientNameFromProcessInfo:(id)arg1;
+ (id)_accountMediaTypeForClientName:(id)arg1 bundleID:(id)arg2;
+ (id)currentBundleInfo;
+ (id)bundleInfoForProcessInfo:(id)arg1;
+ (id)accountMediaTypeInfoForProcessInfo:(id)arg1;
@property(retain, nonatomic) NSString *accountMediaType; // @synthesize accountMediaType=_accountMediaType;
@property(retain, nonatomic) NSString *secureScheme; // @synthesize secureScheme=_secureScheme;
@property(retain, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(retain, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(retain, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)_initWithClient:(long long)arg1 processInfo:(id)arg2;

@end

