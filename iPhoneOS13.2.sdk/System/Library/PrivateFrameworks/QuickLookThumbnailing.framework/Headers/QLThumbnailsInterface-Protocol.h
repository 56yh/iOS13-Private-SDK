//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class FPSandboxingURLWrapper, NSArray, NSDate, NSFileHandle, NSString, NSURL, QLThumbnailItem;
@protocol QLIncrementalThumbnailGenerationHandler;

@protocol QLThumbnailsInterface
- (void)getCanGenerateThumbnailsForContentType:(NSString *)arg1 completionHandler:(void (^)(_Bool))arg2;
- (void)reset;
- (void)setLastHitDateOfAllCachedThumbnailsToDate:(NSDate *)arg1 withCompletionHandler:(void (^)(void))arg2;
- (void)removeCachedThumbnailsFromUninstalledFileProvidersWithRemainingFileProviderIdentifiers:(NSArray *)arg1 completionHandler:(void (^)(void))arg2;
- (void)cancelThumbnailRequests:(NSArray *)arg1;
- (void)generateSuccessiveThumbnailRepresentationsForRequests:(NSArray *)arg1 generationHandler:(id <QLIncrementalThumbnailGenerationHandler>)arg2 completionHandler:(void (^)(void))arg3;
- (void)requestThumbnailOfMaximumSize:(struct CGSize)arg1 scale:(double)arg2 forThumbnailItem:(QLThumbnailItem *)arg3 completionHandler:(void (^)(UIImage *))arg4;
- (void)requestWritingThumbnailOfMaximumSize:(struct CGSize)arg1 forThumbnailItem:(QLThumbnailItem *)arg2 toFileHandle:(NSFileHandle *)arg3 atBackgroundPriority:(_Bool)arg4 completionHandler:(void (^)(id <QLThumbnailGenerationRequest>))arg5;
- (void)requestWritingThumbnailOfMaximumSize:(struct CGSize)arg1 forDocumentAtURL:(NSURL *)arg2 sandboxExtension:(NSString *)arg3 toFileHandle:(NSFileHandle *)arg4 atBackgroundPriority:(_Bool)arg5 completionHandler:(void (^)(id <QLThumbnailGenerationRequest>))arg6;
- (void)askThumbnailAdditionIndex:(void (^)(id <QLThumbnailAdditionIndexInterface>))arg1;
- (void)hasThumbnailForURLWrapper:(FPSandboxingURLWrapper *)arg1 updateLastHitDate:(_Bool)arg2 andSize:(unsigned long long)arg3 completion:(void (^)(_Bool))arg4;
- (void)removeThumbnailAdditionsOnURL:(NSURL *)arg1 completionBlock:(void (^)(NSError *))arg2;
- (void)thumbnailsStoreURLForURL:(NSURL *)arg1 completionBlock:(void (^)(NSURL *, NSDictionary *, NSString *, NSError *))arg2;
@end

