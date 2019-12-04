//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMSMediaTaskTypeConfig, NSArray, NSDictionary, NSString;
@protocol AMSBagProtocol;

__attribute__((visibility("hidden")))
@interface AMSMediaTaskURLBuilder : NSObject
{
    NSArray *_additionalPlatforms;
    id <AMSBagProtocol> _bag;
    NSArray *_bundleIdentifiers;
    NSString *_clientVersion;
    AMSMediaTaskTypeConfig *_config;
    NSDictionary *_filters;
    NSArray *_includedResultKeys;
    NSArray *_itemIdentifiers;
    NSString *_logKey;
    NSString *_searchTerm;
}

@property(retain, nonatomic) NSString *searchTerm; // @synthesize searchTerm=_searchTerm;
@property(retain, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
@property(retain, nonatomic) NSArray *itemIdentifiers; // @synthesize itemIdentifiers=_itemIdentifiers;
@property(retain, nonatomic) NSArray *includedResultKeys; // @synthesize includedResultKeys=_includedResultKeys;
@property(retain, nonatomic) NSDictionary *filters; // @synthesize filters=_filters;
@property(readonly, nonatomic) AMSMediaTaskTypeConfig *config; // @synthesize config=_config;
@property(readonly, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(retain, nonatomic) NSArray *bundleIdentifiers; // @synthesize bundleIdentifiers=_bundleIdentifiers;
@property(readonly, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
@property(retain, nonatomic) NSArray *additionalPlatforms; // @synthesize additionalPlatforms=_additionalPlatforms;
- (id)_devicePlatform;
- (void)_addSearchIdentifiers:(id)arg1;
- (void)_addItemIdentifiers:(id)arg1;
- (void)_addBundleIdentifiers:(id)arg1;
- (id)_queryItems;
- (id)_pathPromise;
- (id)_hostPromise;
- (id)_verifyConfiguration;
- (id)build;
- (id)initWithConfig:(id)arg1 clientVersion:(id)arg2 bag:(id)arg3;

@end

