//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSKAccessControllerDelegate-Protocol.h>

@class NSURL, SFUCryptoKey, TSKCommandExecutor, TSKDocumentRoot, TSKSharingState, TSUDocumentSerializationToken;
@protocol NSFilePresenter, TSKCollaborationCommandReceiver, TSKCollaborationSessionContext, TSKDocumentInfo, TSULogContext;

@protocol TSKDocumentRootDelegate <TSKAccessControllerDelegate>
@property(readonly, nonatomic) id <TSULogContext> logContext;
@property(readonly, nonatomic) NSURL *fileURL;

@optional
@property(readonly, nonatomic) struct __CFRunLoop primaryRunLoop;
@property(readonly, nonatomic) BOOL shouldInitiallySuspendCollaborationSessionForOfflineCatchUp;
@property(readonly, nonatomic) id <TSKCollaborationSessionContext> collaborationSessionContext;
@property(readonly, nonatomic) id <TSKDocumentInfo> tskDocumentInfo;
@property(readonly, retain) SFUCryptoKey *encryptionKey;
@property(readonly, nonatomic) id <NSFilePresenter> cloudFilePresenter;
- (id <TSKCollaborationCommandReceiver>)commandReceiverWithExecutor:(TSKCommandExecutor *)arg1;
- (void)documentRootDidRollbackBlockedCommands:(TSKDocumentRoot *)arg1;
- (void)sharingStateRefreshed:(TSKSharingState *)arg1 isUserInitiated:(BOOL)arg2 parentDocumentSerializationToken:(TSUDocumentSerializationToken *)arg3 completionBlock:(void (^)(void))arg4;
- (TSKSharingState *)sharingState;
- (NSUInteger)documentType;
@end

