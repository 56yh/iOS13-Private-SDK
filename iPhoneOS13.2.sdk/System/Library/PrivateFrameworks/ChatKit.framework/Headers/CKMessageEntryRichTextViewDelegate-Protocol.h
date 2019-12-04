//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/UITextViewDelegate-Protocol.h>

@class CKMediaObject, CKMessageEntryRichTextView, NSArray, NSString, UIGestureRecognizer;

@protocol CKMessageEntryRichTextViewDelegate <UITextViewDelegate>
- (void)messageEntryRichTextViewDidTapHandwritingKey:(CKMessageEntryRichTextView *)arg1;
- (void)messageEntryRichTextView:(CKMessageEntryRichTextView *)arg1 pastedURL:(NSString *)arg2;
- (void)messageEntryRichTextViewWasTapped:(CKMessageEntryRichTextView *)arg1 isLongPress:(_Bool)arg2;
- (_Bool)messageEntryRichTextView:(CKMessageEntryRichTextView *)arg1 shouldRecognizeGesture:(UIGestureRecognizer *)arg2;
- (void)messageEntryRichTextView:(CKMessageEntryRichTextView *)arg1 didTapMediaObject:(CKMediaObject *)arg2;
- (_Bool)messageEntryRichTextView:(CKMessageEntryRichTextView *)arg1 shouldPasteMediaObjects:(NSArray *)arg2;
- (double)maxWidthForPreviewImagesInMessageEntryRichTextView:(CKMessageEntryRichTextView *)arg1;
@end

