//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FileProvider/FPCollectionDataSource-Protocol.h>
#import <FileProvider/FPItemCollectionItemIDBasedDelegate-Protocol.h>

@class NSArray, NSString;
@protocol FPCollectionDataSourceDelegate;

__attribute__((visibility("hidden")))
@interface _FPUnionDataSource : NSObject <FPCollectionDataSource, FPItemCollectionItemIDBasedDelegate>
{
    NSArray *_collections;
    _Bool _isRunning;
    id <FPCollectionDataSourceDelegate> delegate;
}

@property(nonatomic) __weak id <FPCollectionDataSourceDelegate> delegate; // @synthesize delegate;
@property(readonly, nonatomic) _Bool hasMoreIncoming;
- (void)enumerationMightHaveResumed;
- (void)invalidate;
- (void)start;
- (void)dataForCollectionShouldBeReloaded:(id)arg1;
- (void)collection:(id)arg1 didUpdateObservedItem:(id)arg2;
- (void)collection:(id)arg1 didEncounterError:(id)arg2;
- (void)collection:(id)arg1 didUpdateItems:(id)arg2 replaceItemsByFormerID:(id)arg3 deleteItemsWithIDs:(id)arg4;
- (id)initWithCollections:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

