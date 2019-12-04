//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ActionKit/WFMarkupAction.h>

#import <ActionKitUI/QLPreviewControllerDataSource-Protocol.h>
#import <ActionKitUI/QLPreviewControllerDelegate-Protocol.h>

@class NSArray, NSMapTable, NSString;

@interface WFMarkupAction (UIKit) <QLPreviewControllerDelegate, QLPreviewControllerDataSource>
- (void)previewControllerDidDismiss:(id)arg1;
- (void)previewController:(id)arg1 didSaveEditedCopyOfPreviewItem:(id)arg2 atURL:(id)arg3;
- (long long)previewController:(id)arg1 editingModeForPreviewItem:(id)arg2;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (void)finishRunningWithError:(id)arg1;
- (id)editedItems;
- (void)showMarkupWithItems:(id)arg1 userInterface:(id)arg2;
- (void)getPreviewItemsWithInput:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)runWithUIKitUserInterface:(id)arg1 input:(id)arg2;
@property(retain, nonatomic) NSMapTable *editedFileURLsByPreviewItem;
@property(retain, nonatomic) NSArray *previewItems;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;
@end

