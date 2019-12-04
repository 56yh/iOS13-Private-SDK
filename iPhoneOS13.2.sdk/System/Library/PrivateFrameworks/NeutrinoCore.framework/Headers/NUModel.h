//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface NUModel : NSObject
{
    NSDictionary *_attributes;
}

+ (id)deserializeAttribute:(id)arg1 value:(id)arg2 error:(out id *)arg3;
+ (id)deserializeDictionaryFromDictionary:(id)arg1 key:(id)arg2 error:(out id *)arg3;
+ (id)deserializeArrayFromDictionary:(id)arg1 key:(id)arg2 error:(out id *)arg3;
+ (id)deserializeStringFromDictionary:(id)arg1 key:(id)arg2 error:(out id *)arg3;
+ (id)_deserializeObjectOfClass:(Class)arg1 fromDictionary:(id)arg2 key:(id)arg3 error:(out id *)arg4;
+ (id)reservedPropertyNames;
+ (_Bool)validatePropertyName:(id)arg1 error:(out id *)arg2;
+ (_Bool)validatePattern:(id)arg1 error:(out id *)arg2;
+ (_Bool)validateIdentifier:(id)arg1 error:(out id *)arg2;
+ (_Bool)validateName:(id)arg1 error:(out id *)arg2;
+ (_Bool)validateStringArray:(id)arg1 error:(out id *)arg2;
+ (_Bool)validateArray:(id)arg1 error:(out id *)arg2;
+ (_Bool)validateString:(id)arg1 error:(out id *)arg2;
+ (_Bool)validateNumber:(id)arg1 error:(out id *)arg2;
+ (_Bool)validateBool:(id)arg1 error:(out id *)arg2;
+ (id)requiredAttributes;
+ (id)supportedAttributes;
+ (id)deserializeFromDictionary:(id)arg1 error:(out id *)arg2;
@property(readonly, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
- (_Bool)serializeAttribute:(id)arg1 value:(id)arg2 intoDictionary:(id)arg3 error:(out id *)arg4;
- (_Bool)validateAttribute:(id)arg1 value:(id)arg2 error:(out id *)arg3;
- (_Bool)validateAttributes:(out id *)arg1;
- (id)makeJSValue:(id)arg1 context:(id)arg2 error:(out id *)arg3;
- (id)deserialize:(id)arg1 error:(out id *)arg2;
- (id)serialize:(id)arg1 error:(out id *)arg2;
- (_Bool)serializeIntoDictionary:(id)arg1 error:(out id *)arg2;
- (id)serializeAsDictionary:(out id *)arg1;
- (void)enumerateProperties:(id /* block */)arg1;
- (id)modelForProperty:(id)arg1;
- (_Bool)validate:(id)arg1 error:(out id *)arg2;
- (_Bool)isValid:(out id *)arg1;
- (id)copy:(id)arg1;
- (id)initWithAttributes:(id)arg1;
- (id)init;

@end

