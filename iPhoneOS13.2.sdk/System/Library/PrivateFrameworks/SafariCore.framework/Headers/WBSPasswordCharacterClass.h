//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WBSPasswordCharacterClass : NSObject
{
    long long _type;
    NSString *_value;
}

+ (id)unicodeCharacterClass;
+ (id)specialCharacterClass;
+ (id)uppercaseCharacterClass;
+ (id)lowercaseCharacterClass;
+ (id)digitCharacterClass;
+ (id)asciiPrintableCharacterClass;
+ (id)namedCharacterClassWithType:(long long)arg1;
+ (id)customCharacterClassWithValue:(id)arg1;
@property(readonly, copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithType:(long long)arg1 value:(id)arg2;

@end

