//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface MFMessageWriter : NSObject
{
    Class _messageClassToInstantiate;
    unsigned int _allows8BitMimeParts:1;
    unsigned int _allowsBinaryMimeParts:1;
    unsigned int _writeSizeDispositionParameter:1;
    unsigned int _allowsQuotedPrintable:1;
    _Bool _shouldWriteAttachmentPlaceholders;
    id _delegate;
    NSDictionary *_compositionSpecification;
}

@property(nonatomic) _Bool shouldWriteAttachmentPlaceholders; // @synthesize shouldWriteAttachmentPlaceholders=_shouldWriteAttachmentPlaceholders;
@property(readonly, nonatomic) NSDictionary *compositionSpecification; // @synthesize compositionSpecification=_compositionSpecification;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
- (void)setMessageClassToInstantiate:(Class)arg1;
- (void)setWriteSizeDispositionParameter:(_Bool)arg1;
- (void)setAllowsQuotedPrintable:(_Bool)arg1;
- (_Bool)allowsQuotedPrintable;
- (void)setAllowsBinaryMimeParts:(_Bool)arg1;
- (_Bool)allowsBinaryMimeParts;
- (void)setAllows8BitMimeParts:(_Bool)arg1;
- (_Bool)allows8BitMimeParts;
- (id)createMessageWithHtmlString:(id)arg1 attachments:(id)arg2 headers:(id)arg3;
- (id)createMessageWithHtmlString:(id)arg1 plainTextAlternative:(id)arg2 otherHtmlStringsAndAttachments:(id)arg3 charsets:(id)arg4 headers:(id)arg5;
- (id)createMessageWithHtmlString:(id)arg1 plainTextAlternative:(id)arg2 otherHtmlStringsAndAttachments:(id)arg3 headers:(id)arg4;
- (id)createMessageWithPlainTextDocumentsAndAttachments:(id)arg1 headers:(id)arg2;
- (id)createMessageWithString:(id)arg1 headers:(id)arg2;
- (void)appendDataForMimePart:(id)arg1 toData:(id)arg2 withPartData:(id)arg3;
- (void)dealloc;
- (id)initWithCompositionSpecification:(id)arg1;
- (id)init;

@end

