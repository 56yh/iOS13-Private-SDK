//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface PGDeduper : NSObject
{
    NSSet *_identifiersOfRequiredItems;
}

@property(copy, nonatomic) NSSet *identifiersOfRequiredItems; // @synthesize identifiersOfRequiredItems=_identifiersOfRequiredItems;
- (id)requiredItemsInItems:(id)arg1;
- (_Bool)itemIsRequired:(id)arg1;
- (id)deduplicatedItemsWithItems:(id)arg1 debugInfo:(id)arg2 progressBlock:(id /* block */)arg3;

@end

