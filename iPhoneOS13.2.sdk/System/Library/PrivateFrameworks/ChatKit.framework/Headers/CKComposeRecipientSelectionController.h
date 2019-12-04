//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKRecipientSelectionController.h>

#import <ChatKit/UITextFieldDelegate-Protocol.h>

@class NSArray, NSString, UIView;
@protocol CKComposeRecipientSelectionControllerDelegate;

@interface CKComposeRecipientSelectionController : CKRecipientSelectionController <UITextFieldDelegate>
{
    UIView *_pillContainerView;
    id /* block */ _sendBlock;
}

@property(copy, nonatomic) id /* block */ sendBlock; // @synthesize sendBlock=_sendBlock;
@property(retain, nonatomic) UIView *pillContainerView; // @synthesize pillContainerView=_pillContainerView;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (id)_handlesForRecipients:(id)arg1;
- (_Bool)recipientIsiMessagable:(id)arg1;
- (_Bool)_updateBackfillForNewRecipients;
- (id)autocompleteResultIdentifier:(id)arg1;
- (id)conversationGUIDForRecipient:(id)arg1;
- (_Bool)shouldInvalidateIDSRequests;
- (_Bool)_hasExistingConversationWithAddedRecipient:(id)arg1;
- (id)conversationList;
- (_Bool)alwaysShowSearchResultsTable;
- (_Bool)shouldSuppressSearchResultsTable;
- (_Bool)homogenizePreferredServiceForiMessage;
- (_Bool)shouldAtomizeToConversationName;
- (void)recipientSelectionControllerDidChange;
- (void)reset;
- (void)atomizeAndSendTimeoutHandler;
- (void)atomizeAndInvokeBlock:(id /* block */)arg1;
- (void)_legacyAddRecipient:(id)arg1;
- (id)_subscriptionContextForSimID:(id)arg1 phoneNumber:(id)arg2;
- (void)addRecipient:(id)arg1;
- (void)_atomizeToConversationNameIfNecessary:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *proposedRecipients;
@property(readonly, nonatomic) NSArray *expandedRecipients;
- (void)_updatePillViewIfNeededIfIsNewConversation:(_Bool)arg1;
- (_Bool)_canShowWhileLocked;
- (_Bool)deviceHasMultipleSubscriptions;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <CKComposeRecipientSelectionControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

