//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable, NSMutableArray;
@protocol ICLRUCacheDelegate;

@interface ICLRUCache : NSObject
{
    NSMapTable *mData;
    NSMutableArray *mOrderedKeys;
    unsigned long long mMax;
    id <ICLRUCacheDelegate> _delegate;
}

+ (void)purgeAllCaches;
+ (id)cacheCollection;
@property(nonatomic) __weak id <ICLRUCacheDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long maxSize; // @synthesize maxSize=mMax;
- (void)p_removeOldestObject;
@property(readonly, nonatomic) NSArray *allKeys;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)initWithMaxSize:(unsigned long long)arg1;

@end

