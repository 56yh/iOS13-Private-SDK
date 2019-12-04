//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface TSCERemoteDataSpecifierSet : NSObject <NSCopying>
{
    struct NSMutableSet *_hotData;
    NSMutableDictionary *_coldDataByYear;
    unsigned long long _coldSpecifierCount;
}

+ (id)setWithSpecifiers:(id)arg1;
+ (id)setWithSpecifier:(id)arg1;
+ (id)set;
@property(readonly, nonatomic) unsigned long long coldSpecifierCount; // @synthesize coldSpecifierCount=_coldSpecifierCount;
@property(retain, nonatomic) NSMutableDictionary *coldDataByYear; // @synthesize coldDataByYear=_coldDataByYear;
@property(retain, nonatomic) NSMutableSet *hotData; // @synthesize hotData=_hotData;
- (id)shortDescription;
- (id)description;
- (id)p_description:(_Bool)arg1;
- (id)setOfSpecifiersWithDate:(id)arg1;
- (id)setOfSpecifiersWithSymbol:(id)arg1;
- (id)setByIntersectingWithSymbolsOfSet:(id)arg1;
- (id)setOfSpecifiersPassingTest:(id /* block */)arg1;
- (id)setByRemovingSpecifiersWithSymbols:(id)arg1;
- (id)setByRemovingSpecifiersFromSet:(id)arg1;
- (id)setByIntersectingWithSet:(id)arg1;
- (id)setOfSpecifiersNotContainedInSet:(id)arg1;
- (id)setOfSpecifiersContainedInSet:(id)arg1;
- (id)yearsReferenced;
- (id)hotSpecifierSet;
- (id)coldSpecifierSet;
- (void)enumerateSpecifiersWithBlock:(id /* block */)arg1;
- (id)allSymbols;
- (id)sortedArrayOfSpecifiers;
- (id)coldSpecifiers;
- (id)hotSpecifiers;
- (id)allSpecifiers;
- (_Bool)containsColdSpecifiers;
- (_Bool)containsSpecifiersWithSymbol:(id)arg1;
- (_Bool)containsSpecifiersFromSet:(id)arg1;
- (_Bool)containsSpecifier:(id)arg1;
- (void)removeAllSpecifiers;
- (void)removeSpecifiersFromSet:(id)arg1;
- (void)insertSpecifiersFromSet:(id)arg1;
- (void)removeSpecifier:(id)arg1;
- (void)insertSpecifier:(id)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSpecifiers:(id)arg1;
- (id)init;
- (void)p_revalidateColdCount;
- (struct NSMutableSet *)p_setForSpecifier:(id)arg1;
- (struct NSMutableSet *)p_setForYear:(id)arg1;

@end

