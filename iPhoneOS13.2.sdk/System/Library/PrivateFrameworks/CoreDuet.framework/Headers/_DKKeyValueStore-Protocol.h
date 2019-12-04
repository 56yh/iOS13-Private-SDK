//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDuet/_DKSimpleKeyValueStore-Protocol.h>

@class NSArray, NSData, NSDate, NSDictionary, NSNumber, NSObject, NSString;
@protocol NSSecureCoding;

@protocol _DKKeyValueStore <_DKSimpleKeyValueStore>
- (void)removeObjectForKey:(NSString *)arg1;
- (void)setObject:(NSObject<NSSecureCoding> *)arg1 forKey:(NSString *)arg2;
- (NSObject *)objectForKey:(NSString *)arg1 havingClass:(Class)arg2;
- (void)setString:(NSString *)arg1 forKey:(NSString *)arg2;
- (NSString *)stringForKey:(NSString *)arg1;
- (void)setNumber:(NSNumber *)arg1 forKey:(NSString *)arg2;
- (NSNumber *)numberForKey:(NSString *)arg1;
- (void)setDictionary:(NSDictionary *)arg1 forKey:(NSString *)arg2;
- (NSDictionary *)dictionaryForKey:(NSString *)arg1;
- (void)setDate:(NSDate *)arg1 forKey:(NSString *)arg2;
- (NSDate *)dateForKey:(NSString *)arg1;
- (void)setData:(NSData *)arg1 forKey:(NSString *)arg2;
- (NSData *)dataForKey:(NSString *)arg1;
- (void)setBool:(_Bool)arg1 forKey:(NSString *)arg2;
- (_Bool)boolForKey:(NSString *)arg1;
- (void)setArray:(NSArray *)arg1 forKey:(NSString *)arg2;
- (NSArray *)arrayForKey:(NSString *)arg1;
@end

