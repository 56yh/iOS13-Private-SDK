//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIViewController.h>

#import <UIKitCore/UIActionSheetPresentationControllerDelegate-Protocol.h>
#import <UIKitCore/_UIRemoteViewControllerContaining-Protocol.h>
#import <UIKitCore/_UISharingPublicController-Protocol.h>

@class CKContainer, CKContainerSetupInfo, CKShare, NSDictionary, NSObject, NSString, UIImage, _UIRemoteViewController, _UIResilientRemoteViewContainerViewController, _UIShareInvitationRemoteViewController;
@protocol OS_dispatch_semaphore, UICloudSharingControllerDelegate, _UICloudSharingControllerDelegate_Internal;

@interface UICloudSharingController : UIViewController <_UISharingPublicController, UIActionSheetPresentationControllerDelegate, _UIRemoteViewControllerContaining>
{
    _Bool _isDelayingPresentation;
    NSObject<OS_dispatch_semaphore> *_viewServiceValidSema;
    _Bool _shareNeedsDeletion;
    _Bool _primaryAuxiliarySwitchState;
    _Bool _secondaryAuxiliarySwitchState;
    id <UICloudSharingControllerDelegate> _delegate;
    CKShare *_share;
    unsigned long long _availablePermissions;
    _UIResilientRemoteViewContainerViewController *_childViewController;
    _UIShareInvitationRemoteViewController *_remoteViewController;
    CKContainer *_container;
    CKContainerSetupInfo *_containerSetupInfo;
    NSDictionary *_participantDetails;
    id /* block */ _preparationHandler;
    UIViewController *_originalPresentingViewController;
    UIViewController *_strongReferenceToOurself;
    NSString *_primaryAuxiliarySwitchTitle;
    NSString *_secondaryAuxiliarySwitchTitle;
    NSString *_rootFolderTitle;
    NSString *_folderSubitemName;
    UIImage *_headerPrimaryImage;
    UIImage *_headerSecondaryImage;
    id <_UICloudSharingControllerDelegate_Internal> _internalDelegate;
}

@property(nonatomic) __weak id <_UICloudSharingControllerDelegate_Internal> internalDelegate; // @synthesize internalDelegate=_internalDelegate;
@property(retain, nonatomic, getter=_headerSecondaryImage, setter=_setHeaderSecondaryImage:) UIImage *headerSecondaryImage; // @synthesize headerSecondaryImage=_headerSecondaryImage;
@property(retain, nonatomic, getter=_headerPrimaryImage, setter=_setHeaderPrimaryImage:) UIImage *headerPrimaryImage; // @synthesize headerPrimaryImage=_headerPrimaryImage;
@property(retain, nonatomic, getter=_folderSubitemName, setter=_setFolderSubitemName:) NSString *folderSubitemName; // @synthesize folderSubitemName=_folderSubitemName;
@property(retain, nonatomic, getter=_rootFolderTitle, setter=_setRootFolderTitle:) NSString *rootFolderTitle; // @synthesize rootFolderTitle=_rootFolderTitle;
@property(nonatomic, getter=_secondaryAuxiliarySwitchState, setter=_setSecondaryAuxiliarySwitchState:) _Bool secondaryAuxiliarySwitchState; // @synthesize secondaryAuxiliarySwitchState=_secondaryAuxiliarySwitchState;
@property(retain, nonatomic, getter=_secondaryAuxiliarySwitchTitle, setter=_setSecondaryAuxiliarySwitchTitle:) NSString *secondaryAuxiliarySwitchTitle; // @synthesize secondaryAuxiliarySwitchTitle=_secondaryAuxiliarySwitchTitle;
@property(nonatomic, getter=_primaryAuxiliarySwitchState, setter=_setPrimaryAuxiliarySwitchState:) _Bool primaryAuxiliarySwitchState; // @synthesize primaryAuxiliarySwitchState=_primaryAuxiliarySwitchState;
@property(retain, nonatomic, getter=_primaryAuxiliarySwitchTitle, setter=_setPrimaryAuxiliarySwitchTitle:) NSString *primaryAuxiliarySwitchTitle; // @synthesize primaryAuxiliarySwitchTitle=_primaryAuxiliarySwitchTitle;
@property(retain, nonatomic, getter=_strongReferenceToOurself, setter=_setStrongReferenceToOurself:) UIViewController *strongReferenceToOurself; // @synthesize strongReferenceToOurself=_strongReferenceToOurself;
@property(nonatomic, getter=_originalPresentingViewController, setter=_setOriginalPresentingViewController:) __weak UIViewController *originalPresentingViewController; // @synthesize originalPresentingViewController=_originalPresentingViewController;
@property(copy, nonatomic) id /* block */ preparationHandler; // @synthesize preparationHandler=_preparationHandler;
@property(retain, nonatomic, getter=_participantDetails, setter=_setParticipantDetails:) NSDictionary *participantDetails; // @synthesize participantDetails=_participantDetails;
@property(retain, nonatomic) CKContainerSetupInfo *containerSetupInfo; // @synthesize containerSetupInfo=_containerSetupInfo;
@property(retain, nonatomic) CKContainer *container; // @synthesize container=_container;
@property(readonly, nonatomic, getter=_remoteViewController) _UIShareInvitationRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(retain, nonatomic, getter=_childViewController, setter=_setChildViewController:) _UIResilientRemoteViewContainerViewController *childViewController; // @synthesize childViewController=_childViewController;
@property(nonatomic) unsigned long long availablePermissions; // @synthesize availablePermissions=_availablePermissions;
@property(retain, nonatomic) CKShare *share; // @synthesize share=_share;
@property(nonatomic) __weak id <UICloudSharingControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
- (void)_requestSavedShareWithCompletion:(id /* block */)arg1;
- (void)_performHeaderActionWithCompletion:(id /* block */)arg1;
- (void)_performAuxiliaryActionWithCompletion:(id /* block */)arg1;
- (void)_sendDidStopSharingDelegate;
- (void)_shareWasMadePrivate;
- (void)_shareDidChange:(id)arg1;
- (void)_cloudSharingControllerDidActivateShowSharedFolder;
- (void)_cloudSharingControllerDidModifySecondarySwitch:(_Bool)arg1;
- (void)_cloudSharingControllerDidModifyPrimarySwitch:(_Bool)arg1;
- (void)_representFullscreenAfterActivityDismissal:(id /* block */)arg1;
- (void)_dismissForActivityRepresentation:(id /* block */)arg1;
- (id)_sharingViewPresentationController;
- (id)_customPresentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (_Bool)_requiresCustomPresentationController;
- (id)activityItemSource;
- (void)_dismissViewControllerWithError:(id)arg1;
- (void)_deleteShareAfterDismissalWithoutSave:(id /* block */)arg1;
- (void)_didDismiss;
- (void)_callPreparationHandler:(id /* block */)arg1;
- (void)__viewControllerWillBePresented:(_Bool)arg1;
- (void)dealloc;
- (id)initWithPreparationHandler:(id /* block */)arg1;
- (id)initWithShare:(id)arg1 preparationHandler:(id /* block */)arg2;
- (id)initWithShare:(id)arg1 container:(id)arg2;
- (_Bool)_commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

