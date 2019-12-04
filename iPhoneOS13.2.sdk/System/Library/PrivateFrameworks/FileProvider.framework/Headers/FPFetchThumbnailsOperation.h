//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FileProvider/FPOperation.h>

#import <FileProvider/FPOperationProgressDelegate-Protocol.h>

@class FPItemManager, NSArray, NSMutableArray, NSOperationQueue, NSString;

@interface FPFetchThumbnailsOperation : FPOperation <FPOperationProgressDelegate>
{
    NSArray *_items;
    struct CGSize _desiredSize;
    double _screenScale;
    FPItemManager *_itemManager;
    NSOperationQueue *_subOperationQueue;
    NSMutableArray *_subOperations;
    id /* block */ _perThumbnailCompletionBlock;
    id /* block */ _thumbnailsFetchCompletionBlock;
}

@property(copy, nonatomic) id /* block */ thumbnailsFetchCompletionBlock; // @synthesize thumbnailsFetchCompletionBlock=_thumbnailsFetchCompletionBlock;
@property(copy, nonatomic) id /* block */ perThumbnailCompletionBlock; // @synthesize perThumbnailCompletionBlock=_perThumbnailCompletionBlock;
- (void)_perItemCompletionBlockFor:(id)arg1 thumbnail:(id)arg2 contentType:(id)arg3 error:(id)arg4;
- (void)operation:(id)arg1 didReceiveProgressInfo:(id)arg2 error:(id)arg3;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)cancel;
- (void)main;
- (id)initWithItems:(id)arg1 desiredSize:(struct CGSize)arg2 screenScale:(double)arg3 itemManager:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
