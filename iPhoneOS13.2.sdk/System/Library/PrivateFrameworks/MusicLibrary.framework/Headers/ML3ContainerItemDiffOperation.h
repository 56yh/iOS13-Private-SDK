//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class ML3DatabaseConnection, NSArray;

@interface ML3ContainerItemDiffOperation : NSOperation
{
    long long _containerPersistentID;
    NSArray *_updatedItemsPersistentIDs;
    ML3DatabaseConnection *_connection;
    NSArray *_containerItemsToUpdate;
    NSArray *_containerItemsToDelete;
}

@property(retain, nonatomic) NSArray *containerItemsToDelete; // @synthesize containerItemsToDelete=_containerItemsToDelete;
@property(retain, nonatomic) NSArray *containerItemsToUpdate; // @synthesize containerItemsToUpdate=_containerItemsToUpdate;
- (void)main;
- (id)initWithContainerPersistentID:(long long)arg1 updatedItemsPersistentIDs:(id)arg2 connection:(id)arg3;

@end

