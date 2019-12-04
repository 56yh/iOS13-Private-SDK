//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DocumentManagerExecutables/FPItemCollectionMinimalDelegate-Protocol.h>

@class FPItemCollection, NSArray, NSDictionary;

@protocol FPItemCollectionIndexPathBasedDelegate <FPItemCollectionMinimalDelegate>
- (void)collection:(FPItemCollection *)arg1 didPerformBatchUpdateWithReplayBlock:(void (^)(void))arg2;
- (void)collection:(FPItemCollection *)arg1 didUpdateItemsAtIndexPaths:(NSArray *)arg2 changes:(NSDictionary *)arg3;
- (void)collection:(FPItemCollection *)arg1 didDeleteItemsAtIndexPaths:(NSArray *)arg2;
- (void)collection:(FPItemCollection *)arg1 didMoveItemsFromIndexPaths:(NSArray *)arg2 toIndexPaths:(NSArray *)arg3;
- (void)collection:(FPItemCollection *)arg1 didInsertItemsAtIndexPaths:(NSArray *)arg2;
@end

