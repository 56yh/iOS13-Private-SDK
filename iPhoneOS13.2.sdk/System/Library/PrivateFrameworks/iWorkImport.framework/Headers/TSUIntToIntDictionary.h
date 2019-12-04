//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




__attribute__((visibility("hidden")))
@interface TSUIntToIntDictionary : NSObject <NSCopying, NSMutableCopying>
{
    struct __CFDictionary *mDictionary;
}

+ (id)dictionary;
- (struct __CFDictionary *)p_cfDictionary;
- (void)enumerateKeysAndValuesUsingBlock:(id /* block */)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)allValues;
- (id)allKeys;
- (id)arrayOfBoxedKeys;
- (void)addIntToIntDictionary:(id)arg1;
- (void)applyFromIntToIntDictionary:(id)arg1;
- (_Bool)containsKey:(long long)arg1;
- (id)keyEnumerator;
- (void)removeAllInts;
- (void)incrementValueForKey:(long long)arg1;
- (void)incrementValueBy:(long long)arg1 forKey:(long long)arg2;
- (void)setInt:(long long)arg1 forKey:(long long)arg2;
- (void)removeIntForKey:(long long)arg1;
- (long long)intForKey:(long long)arg1;
- (_Bool)intIsPresentForKey:(long long)arg1 outValue:(long long *)arg2;
- (unsigned long long)count;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)init;

@end

