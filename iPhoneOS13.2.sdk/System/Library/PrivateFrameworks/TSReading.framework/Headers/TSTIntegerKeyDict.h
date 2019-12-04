//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSTIntegerKeyDict : NSObject
{
    struct unordered_map<unsigned int, SFUtility::ObjcSharedPtr, TSTIntHasher, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, SFUtility::ObjcSharedPtr>>> *mMap;
}

- (id)allValues;
- (long long)count;
- (void)transformWithFunction:(CDUnknownFunctionPointerType)arg1 withState:(void *)arg2;
- (void)applyFunction:(CDUnknownFunctionPointerType)arg1 withState:(void *)arg2 andState:(void *)arg3;
- (void)applyFunction:(CDUnknownFunctionPointerType)arg1 withState:(void *)arg2;
- (void)makeObjectsPerformSelector:(SEL)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(unsigned int)arg1;
- (void)removeFirstObject;
- (void)setObject:(id)arg1 forKey:(unsigned int)arg2;
- (id)objectForKey:(unsigned int)arg1;
- (void)dealloc;
- (id)init;

@end

