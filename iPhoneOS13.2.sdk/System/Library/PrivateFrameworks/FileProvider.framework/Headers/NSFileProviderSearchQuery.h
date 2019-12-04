//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSSet, NSString;

@interface NSFileProviderSearchQuery : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _shouldPerformServerSearch;
    NSString *_scopeFragment;
    NSString *_scopedToItemIdentifierBundleId;
    NSString *_keyboardLanguage;
    NSString *_providerDomainID;
    NSSet *_cachedExtensions;
    unsigned long long _trashedItemsMembership;
    NSString *_filename;
    NSSet *_allowedContentTypes;
    NSString *_scopedToItemIdentifier;
    NSString *_searchContainerItemIdentifier;
}

+ (_Bool)supportsSecureCoding;
+ (id)newSearchContainerItemIdentifier;
@property(readonly, copy, nonatomic) NSString *searchContainerItemIdentifier; // @synthesize searchContainerItemIdentifier=_searchContainerItemIdentifier;
@property(readonly, copy, nonatomic) NSString *scopedToItemIdentifier; // @synthesize scopedToItemIdentifier=_scopedToItemIdentifier;
@property(readonly, copy, nonatomic) NSSet *allowedContentTypes; // @synthesize allowedContentTypes=_allowedContentTypes;
@property(readonly, copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(readonly, copy, nonatomic) NSSet *allowedPathExtensions;
@property(copy, nonatomic) NSString *providerDomainID;
@property(copy, nonatomic) NSString *scopeFragment;
- (id)toSpotlightQueryString;
@property(nonatomic) _Bool includesTrashedItems;
@property(nonatomic) unsigned long long trashedItemsMembership;
@property(copy, nonatomic) NSString *keyboardLanguage;
@property(nonatomic) _Bool shouldPerformServerSearch;
@property(copy, nonatomic) NSString *content;
@property(copy, nonatomic) NSString *searchString;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToFileProviderSearchQuery:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithSearchScopedToItemID:(id)arg1;
- (id)initWithSearchScope:(id)arg1;
- (id)predicate;
- (id)allowedContentTypesPredicate;
- (id)filenamePredicate;
- (id)initWithSearchScopedToItemIdentifier:(id)arg1 providerDomainID:(id)arg2 searchContainerItemIdentifier:(id)arg3;

@end

