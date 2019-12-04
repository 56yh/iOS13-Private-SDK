//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Transparency/GPBDictionaryInternalsProtocol-Protocol.h>


@class GPBMessage;

__attribute__((visibility("hidden")))
@interface GPBBoolFloatDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;
    float _values[2];
    _Bool _valueSet[2];
}

- (void)removeAll;
- (void)removeFloatForKey:(_Bool)arg1;
- (void)setFloat:(float)arg1 forKey:(_Bool)arg2;
- (void)addEntriesFromDictionary:(id)arg1;
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;
- (void)enumerateKeysAndFloatsUsingBlock:(id /* block */)arg1;
- (void)enumerateForTextFormat:(id /* block */)arg1;
- (void)setGPBGenericValue:(CDUnion_88782d86 *)arg1 forGPBGenericValueKey:(CDUnion_88782d86 *)arg2;
- (_Bool)getFloat:(float *)arg1 forKey:(_Bool)arg2;
@property(readonly, nonatomic) unsigned long long count;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFloats:(const float *)arg1 forKeys:(const _Bool *)arg2 count:(unsigned long long)arg3;
- (id)init;

@end

