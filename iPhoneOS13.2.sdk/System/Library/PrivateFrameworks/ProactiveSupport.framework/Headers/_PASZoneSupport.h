//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _PASZoneSupport : NSObject
{
}

+ (id)deepCopyObject:(id)arg1 toZone:(struct _NSZone *)arg2 strategy:(CDStruct_d3566df9)arg3;
+ (id)copyUUID:(id)arg1 toZone:(struct _NSZone *)arg2;
+ (id)copyDate:(id)arg1 toZone:(struct _NSZone *)arg2;
+ (id)copyNumber:(id)arg1 toZone:(struct _NSZone *)arg2;
+ (id)mutableCopyData:(id)arg1 toZone:(struct _NSZone *)arg2;
+ (id)copyData:(id)arg1 toZone:(struct _NSZone *)arg2;
+ (id)newMutableDataInZone:(struct _NSZone *)arg1 length:(unsigned long long)arg2;
+ (id)newMutableDataInZone:(struct _NSZone *)arg1 capacity:(unsigned long long)arg2;
+ (id)newMutableDataInZone:(struct _NSZone *)arg1;
+ (id)mutableCopyString:(id)arg1 toZone:(struct _NSZone *)arg2;
+ (id)copyString:(id)arg1 toZone:(struct _NSZone *)arg2;
+ (id)newMutableStringInZone:(struct _NSZone *)arg1 capacity:(unsigned long long)arg2;
+ (id)newMutableStringInZone:(struct _NSZone *)arg1;
+ (id)mutableCopySet:(id)arg1 toZone:(struct _NSZone *)arg2;
+ (id)copySet:(id)arg1 toZone:(struct _NSZone *)arg2;
+ (id)newMutableSetInZone:(struct _NSZone *)arg1 capacity:(unsigned long long)arg2;
+ (id)newMutableSetInZone:(struct _NSZone *)arg1;
+ (id)mutableCopyDictionary:(id)arg1 toZone:(struct _NSZone *)arg2;
+ (id)copyDictionary:(id)arg1 toZone:(struct _NSZone *)arg2;
+ (id)newMutableDictionaryInZone:(struct _NSZone *)arg1 capacity:(unsigned long long)arg2;
+ (id)newMutableDictionaryInZone:(struct _NSZone *)arg1;
+ (id)mutableCopyArray:(id)arg1 toZone:(struct _NSZone *)arg2;
+ (id)copyArray:(id)arg1 toZone:(struct _NSZone *)arg2;
+ (id)newMutableArrayInZone:(struct _NSZone *)arg1 capacity:(unsigned long long)arg2;
+ (id)newMutableArrayInZone:(struct _NSZone *)arg1;

@end

