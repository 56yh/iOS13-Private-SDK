//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTAvatarStore-Protocol.h>
#import <AvatarUI/AVTAvatarStoreInternal-Protocol.h>
#import <AvatarUI/AVTStoreBackendDelegate-Protocol.h>

@class AVTAvatarRecordImageGenerator, AVTPuppetStore, AVTUIEnvironment, NSString;
@protocol AVTStickerBackend, AVTStickerBackendDelegate, AVTStoreBackend, AVTUILogger, OS_dispatch_queue;

@interface AVTAvatarStore : NSObject <AVTStoreBackendDelegate, AVTAvatarStoreInternal, AVTAvatarStore>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_backendAccessQueue;
    NSObject<OS_dispatch_queue> *_puppetStoreAccessQueue;
    AVTUIEnvironment *_environment;
    id <AVTStoreBackend> _backend;
    AVTPuppetStore *_puppetStore;
    AVTAvatarRecordImageGenerator *_imageGenerator;
    id <AVTUILogger> _logger;
    id <AVTStickerBackend> _stickerBackend;
}

+ (unsigned long long)maximumNumberOfFetchableAvatars;
+ (unsigned long long)maximumNumberOfSavableAvatars;
+ (id)defaultImageGeneratorForEnvironment:(id)arg1;
+ (id)defaultBackendWithWorkQueue:(id)arg1 environment:(id)arg2;
@property(readonly, nonatomic) id <AVTStickerBackend> stickerBackend; // @synthesize stickerBackend=_stickerBackend;
@property(readonly, nonatomic) id <AVTUILogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) AVTAvatarRecordImageGenerator *imageGenerator; // @synthesize imageGenerator=_imageGenerator;
@property(readonly, nonatomic) AVTPuppetStore *puppetStore; // @synthesize puppetStore=_puppetStore;
@property(readonly, nonatomic) id <AVTStoreBackend> backend; // @synthesize backend=_backend;
@property(readonly, nonatomic) AVTUIEnvironment *environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *puppetStoreAccessQueue; // @synthesize puppetStoreAccessQueue=_puppetStoreAccessQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *backendAccessQueue; // @synthesize backendAccessQueue=_backendAccessQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)deleteRecentStickersForChangeTracker:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deleteRecentStickersWithAvatarIdentifier:(id)arg1 stickerIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)didUseStickerWithAvatarIdentifier:(id)arg1 stickerIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)recentStickersForFetchRequest:(id)arg1 error:(id *)arg2;
@property(nonatomic) __weak id <AVTStickerBackendDelegate> stickerBackendDelegate;
- (void)backend:(id)arg1 didChangeRecordsWithIdentifiers:(id)arg2;
- (void)postChangeNotificationForRecordWithIdentifiers:(id)arg1 remote:(_Bool)arg2;
- (void)duplicateAvatar:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)deleteAvatarWithIdentifier:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)deleteAvatar:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)saveAvatarRecord:(id)arg1 thumbnailAvatar:(id)arg2 completionBlock:(id /* block */)arg3 thumbnailGenerationCompletionBlock:(id /* block */)arg4;
- (void)fetchAvatarsForFetchRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)performAsynchronousWork:(id /* block */)arg1;
- (void)performPuppetStoreWork:(id /* block */)arg1;
- (void)performBackendWork:(id /* block */)arg1;
- (id)avatarsForFetchRequest:(id)arg1 error:(id *)arg2;
- (_Bool)canCreateAvatarWithError:(id *)arg1;
- (_Bool)canCreateAvatar;
- (id)initWithBackend:(id)arg1 backendAccessQueue:(id)arg2 puppetStore:(id)arg3 imageGenerator:(id)arg4 stickerBackend:(id)arg5 environment:(id)arg6;
- (id)initWithImageGenerator:(id)arg1 environment:(id)arg2;
- (id)init;
- (id)initWithDomainIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

