//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKCoreChatControllerDelegate-Protocol.h>


@class CKChatController, CKComposition, NSString;

@protocol CKChatControllerDelegate <NSObject, CKCoreChatControllerDelegate>
- (void)prewarmCameraIfNecessaryForChatController:(CKChatController *)arg1;
- (void)chatController:(CKChatController *)arg1 forwardComposition:(CKComposition *)arg2;

@optional
- (NSString *)navigationBarBackdropLayerGroupNameForChatController:(CKChatController *)arg1;
- (void)doneButtonPressedForChatController:(CKChatController *)arg1;
@end

