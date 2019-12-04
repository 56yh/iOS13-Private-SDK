//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface AVTAvatarFetchRequest : NSObject
{
    NSArray *_identifiers;
    NSArray *_excludingIdentifiers;
    long long _criteria;
    long long _fetchLimit;
}

+ (id)requestForStorePrimaryAvatar;
+ (id)requestForCustomAvatarsWithLimit:(long long)arg1;
+ (id)requestForCustomAvatars;
+ (id)requestForPredefinedAvatars;
+ (id)requestForAvatarsWithIdentifiers:(id)arg1;
+ (id)requestForAvatarWithIdentifier:(id)arg1;
+ (id)requestForAllAvatarsExcluding:(id)arg1;
+ (id)requestForAllAvatars;
@property(readonly, nonatomic) long long fetchLimit; // @synthesize fetchLimit=_fetchLimit;
@property(readonly, nonatomic) long long criteria; // @synthesize criteria=_criteria;
@property(readonly, copy, nonatomic) NSArray *excludingIdentifiers; // @synthesize excludingIdentifiers=_excludingIdentifiers;
@property(readonly, copy, nonatomic) NSArray *identifiers; // @synthesize identifiers=_identifiers;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCriteria:(long long)arg1 identifiers:(id)arg2 excludedIdentifiers:(id)arg3 fetchLimit:(long long)arg4;
- (id)initWithCriteria:(long long)arg1 identifier:(id)arg2;
- (id)initWithCriteria:(long long)arg1;

@end

