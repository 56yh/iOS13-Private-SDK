//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSArray, NSMutableArray, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface PXImportAssetCollection : NSObject <NSCopying>
{
    NSObject<OS_dispatch_queue> *_assetQueue;
    NSMutableArray *_assetList;
    NSArray *_arrangedAssetList;
    NSMutableSet *_assetUUIDs;
    _Bool _needsSorting;
    _Bool _alreadyImportedGroup;
    NSString *_identifier;
}

+ (id)dayFormatter;
@property(nonatomic) _Bool alreadyImportedGroup; // @synthesize alreadyImportedGroup=_alreadyImportedGroup;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)localizedTitle;
- (long long)indexOfItem:(id)arg1;
- (id)itemAtIndex:(unsigned long long)arg1;
- (id)unsortedObjects;
- (void)arrangedObjects:(id /* block */)arg1;
- (id)arrangedObjects;
- (long long)numberOfItems;
- (void)removeObjectsInRange:(struct _NSRange)arg1;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (void)addObject:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

