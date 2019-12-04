//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <ChatKit/CKComposeChatControllerDelegate-Protocol.h>
#import <ChatKit/CKSMSComposeViewServiceProtocol-Protocol.h>

@class CKModalTranscriptController, NSArray, NSString;
@protocol CKSMSComposeViewServiceControllerDelegate;

@interface CKSMSComposeViewServiceController : UINavigationController <CKComposeChatControllerDelegate, CKSMSComposeViewServiceProtocol>
{
    _Bool _canEditRecipients;
    _Bool _supportsAttachments;
    _Bool _supportsMessageInspection;
    _Bool _forceMMS;
    _Bool _disableCameraAttachments;
    NSArray *_utiTypes;
    NSArray *_contentURLs;
    NSArray *_photoIDs;
    NSArray *_cloudPhotoIDs;
    NSArray *_contentText;
    NSString *_shareSheetSessionID;
    CKModalTranscriptController *_modalTranscriptController;
    id <CKSMSComposeViewServiceControllerDelegate> _composeDelegate;
    id /* block */ _gameCenterPickerBlock;
    id /* block */ _entryViewCompletion;
}

+ (id)_remoteViewControllerInterface;
+ (id)_exportedInterface;
+ (_Bool)_isSecureForRemoteViewService;
@property(copy, nonatomic) id /* block */ entryViewCompletion; // @synthesize entryViewCompletion=_entryViewCompletion;
@property(copy, nonatomic) id /* block */ gameCenterPickerBlock; // @synthesize gameCenterPickerBlock=_gameCenterPickerBlock;
@property(nonatomic) __weak id <CKSMSComposeViewServiceControllerDelegate> composeDelegate; // @synthesize composeDelegate=_composeDelegate;
@property(retain, nonatomic) CKModalTranscriptController *modalTranscriptController; // @synthesize modalTranscriptController=_modalTranscriptController;
- (void)donateInteractionWithConversation:(id)arg1;
- (void)_willAppearInRemoteViewController;
- (_Bool)supportsMessageInspection;
- (_Bool)supportsAttachments;
- (_Bool)composeChatControllerShouldShowBackButtonViewDuringSendAnimation:(id)arg1;
- (void)composeChatController:(id)arg1 didSelectNewConversation:(id)arg2;
- (void)composeChatControllerDidCancelComposition:(id)arg1;
- (_Bool)composeChatControllerCanEditRecipients;
- (void)prewarmCameraIfNecessaryForChatController:(id)arg1;
- (void)chatController:(id)arg1 forwardComposition:(id)arg2;
- (void)chatController:(id)arg1 didReportSpamForConversation:(id)arg2;
- (void)chatController:(id)arg1 didSendCompositionInConversation:(id)arg2;
- (void)chatController:(id)arg1 willSendComposition:(id)arg2 inConversation:(id)arg3;
- (void)composeChatController:(id)arg1 shouldSendComposition:(id)arg2 inConversation:(id)arg3 completion:(id /* block */)arg4;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setTextEntryContentsVisible:(_Bool)arg1;
- (void)disableCameraAttachments;
@property(nonatomic) _Bool canEditRecipients; // @dynamic canEditRecipients;
- (void)setPendingAddresses:(id)arg1;
- (void)setShareSheetSessionID:(id)arg1;
- (id)recipientsFromChatGUID:(id)arg1 groupName:(id)arg2 handles:(id)arg3;
- (void)setText:(id)arg1 subject:(id)arg2 addresses:(id)arg3 chatGUID:(id)arg4 groupName:(id)arg5;
- (void)setText:(id)arg1 subject:(id)arg2 addresses:(id)arg3;
- (void)setGameCenterPickedHandles:(id)arg1 playerNames:(id)arg2;
- (void)setGameCenterModeWithPickerBlock:(id /* block */)arg1;
- (void)forceMMS;
- (void)_forceMMSIfNecessary;
- (void)setContentText:(id)arg1;
- (void)setCloudPhotoIDs:(id)arg1;
- (void)setPhotoIDs:(id)arg1;
- (void)setContentURLs:(id)arg1;
- (void)setUTIs:(id)arg1;
- (void)setUICustomizationData:(id)arg1;
- (void)forceCancelComposition;
- (void)insertRemoteItemForSending:(id)arg1;
- (void)hideEntryViewContent:(_Bool)arg1;
- (void)composeChatController:(id)arg1 didLoadEntryViewContentWithCompletion:(id /* block */)arg2;
- (void)insertRemoteItemForSendingAndCalculateEntryViewFrame:(id)arg1 completion:(id /* block */)arg2;
- (void)insertAttachmentWithURL:(id)arg1 andDescription:(id)arg2;
- (void)_insertAttachmentWithURL:(id)arg1 andDescription:(id)arg2 preview:(id)arg3 isFullyRealized:(_Bool)arg4 appendedVideoURL:(id)arg5 appendedBundleURL:(id)arg6 completion:(id /* block */)arg7;
- (void)insertFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3;
- (_Bool)_hostSandboxAllowsFileReadAtFileURL:(id)arg1;
- (void)showInsertedItemInEntryView;
- (void)_insertFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3 preview:(id)arg4 isFullyRealized:(_Bool)arg5 appendedVideoURL:(id)arg6 completion:(id /* block */)arg7;
- (void)insertData:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3;
- (void)insertFilename:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 options:(id)arg4;
- (void)dealloc;
- (_Bool)_canShowWhileLocked;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

