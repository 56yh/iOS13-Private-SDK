//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TemplateKit/TLKObject.h>

@class NSString;

@interface TLKKeyValueTuple : TLKObject
{
    NSString *_key;
    NSString *_value;
}

+ (id)tuplesForKeys:(id)arg1 values:(id)arg2;
+ (id)tuplesForDictionary:(id)arg1;
+ (id)tupleWithKey:(id)arg1 value:(id)arg2;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;

@end

