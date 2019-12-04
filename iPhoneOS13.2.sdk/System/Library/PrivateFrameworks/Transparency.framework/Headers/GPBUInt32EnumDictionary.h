//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Transparency/GPBDictionaryInternalsProtocol-Protocol.h>


@class GPBMessage, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface GPBUInt32EnumDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;
    NSMutableDictionary *_dictionary;
    CDUnknownFunctionPointerType _validationFunc;
}

@property(readonly, nonatomic) CDUnknownFunctionPointerType validationFunc; // @synthesize validationFunc=_validationFunc;
- (void)setEnum:(int)arg1 forKey:(unsigned int)arg2;
- (void)removeAll;
- (void)removeEnumForKey:(unsigned int)arg1;
- (void)setRawValue:(int)arg1 forKey:(unsigned int)arg2;
- (void)addRawEntriesFromDictionary:(id)arg1;
- (void)enumerateKeysAndEnumsUsingBlock:(id /* block */)arg1;
- (_Bool)getRawValue:(int *)arg1 forKey:(unsigned int)arg2;
- (_Bool)getEnum:(int *)arg1 forKey:(unsigned int)arg2;
- (void)enumerateForTextFormat:(id /* block */)arg1;
- (void)setGPBGenericValue:(CDUnion_88782d86 *)arg1 forGPBGenericValueKey:(CDUnion_88782d86 *)arg2;
- (id)serializedDataForUnknownValue:(int)arg1 forKey:(CDUnion_88782d86 *)arg2 keyDataType:(unsigned char)arg3;
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;
- (void)enumerateKeysAndRawValuesUsingBlock:(id /* block */)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1 capacity:(unsigned long long)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1 rawValues:(const int *)arg2 forKeys:(const unsigned int *)arg3 count:(unsigned long long)arg4;
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1;
- (id)init;

@end

