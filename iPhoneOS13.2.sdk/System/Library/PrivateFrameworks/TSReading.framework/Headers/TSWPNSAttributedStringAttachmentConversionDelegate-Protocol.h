//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSAttributedString, NSString, NSURL, TSWPAttachment, TSWPHyperlinkField;

@protocol TSWPNSAttributedStringAttachmentConversionDelegate 

@optional
- (NSURL *)urlForHyperlinkField:(TSWPHyperlinkField *)arg1;
- (NSAttributedString *)attachmentStringForDrawableAttachment:(TSWPAttachment *)arg1;
- (NSAttributedString *)textualEquivalentForDrawableAttachment:(TSWPAttachment *)arg1 withString:(NSString *)arg2 atCharIndex:(unsigned long long)arg3;
@end

