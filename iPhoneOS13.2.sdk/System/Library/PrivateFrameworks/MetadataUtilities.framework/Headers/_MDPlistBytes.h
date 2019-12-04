//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _MDPlistBytes : NSObject
{
    unsigned long long _byteVector;
    unsigned int _byteVectorCnt;
    unsigned int _byteVectorCapacity;
    id /* block */ _deallocator;
    unsigned int _isBad:16;
    unsigned int _isMutable:1;
    unsigned int _isMutating:1;
    unsigned int _didFinalize:1;
    unsigned int _useMalloc:1;
    struct __CFArray *_rleQueue;
    unsigned long long *_wrapperPtr;
    unsigned long long *_uidVector;
    int _uidCount;
    int _uidCapacity;
    struct _malloc_zone_t *_zone;
}

+ (struct __MDPlistBytes *)nullObjectPlistBytes;
+ (void)enumerateObjectsFromPlistBytes:(char *)arg1 count:(unsigned int)arg2 shouldDeallocate:(_Bool)arg3 usingBlock:(id /* block */)arg4;
+ (struct __MDPlistBytes *)emptyDictionaryPlistBytes;
+ (struct __MDPlistBytes *)emptyArrayPlistBytes;
+ (struct __MDPlistBytes *)createPlistBytes:(id)arg1;
+ (struct __MDPlistBytes *)createDictionaryPlistBytesUsingBlock:(id /* block */)arg1;
+ (struct __MDPlistBytes *)createArrayPlistBytesUsingBlock:(id /* block */)arg1;
- (void)enumerateObjectsUsingBlock:(id /* block */)arg1;
- (void)dumpUIDs;
- (struct __CFData *)copyDataWithBytesNoCopy;
- (struct __CFData *)copyData;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (unsigned long long)_cfTypeID;
- (void)dealloc;
- (id)initWithByteVector:(char *)arg1 count:(unsigned int)arg2 deallocator:(id /* block */)arg3;
- (id)initWithByteVector:(char *)arg1 count:(unsigned int)arg2 shouldDeallocate:(_Bool)arg3;
- (id)initWithByteVector:(char *)arg1 count:(unsigned int)arg2 trusted:(unsigned char)arg3 deallocator:(id /* block */)arg4;
- (void)enumerateQueryResults:(unsigned long long)arg1 stringCache:(CDStruct_6130f9a9 *)arg2 usingBlock:(id /* block */)arg3;
- (_Bool)enumerateQueryResults:(unsigned long long)arg1 attributeSize:(unsigned long long)arg2 stringCache:(CDStruct_6130f9a9 *)arg3 usingBlock:(id /* block */)arg4;

@end

