//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface CRKApplicationInfo : NSObject
{
    NSString *_bundleIdentifier;
    NSString *_shortVersionString;
}

+ (id)bundleIdentifiersFromDictionaryRepresentations:(id)arg1;
+ (id)bundleIdentifierFromDictionaryRepresentation:(id)arg1;
@property(readonly, copy, nonatomic) NSString *shortVersionString; // @synthesize shortVersionString=_shortVersionString;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 shortVersionString:(id)arg2;

@end

