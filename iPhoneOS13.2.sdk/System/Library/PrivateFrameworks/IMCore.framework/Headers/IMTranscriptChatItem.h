//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMCore/IMChatItem.h>

#import <IMCore/IMChatTranscriptItem-Protocol.h>

@class IMHandle, IMServiceImpl, NSAttributedString, NSDate, NSString;

@interface IMTranscriptChatItem : IMChatItem <IMChatTranscriptItem>
{
    NSString *_guid;
    unsigned char _contiguousType;
    unsigned char _attachmentContiguousType;
    unsigned int _contiguousLoaded:1;
}

@property(copy, nonatomic, setter=_setGUID:) NSString *guid; // @synthesize guid=_guid;
- (void)_setAttachmentContiguousType:(unsigned char)arg1;
- (void)_setContiguousType:(unsigned char)arg1;
- (void)_setContiguousLoaded:(_Bool)arg1;
- (_Bool)_isContiguousLoaded;
@property(readonly, nonatomic) IMHandle *handle;
@property(readonly, nonatomic) IMServiceImpl *service;
@property(readonly, nonatomic) NSDate *transcriptDate;
@property(readonly, copy, nonatomic) NSAttributedString *transcriptText;
@property(readonly, nonatomic) _Bool wantsTail;
@property(readonly, nonatomic, getter=isFromMe) _Bool fromMe;
@property(readonly, nonatomic, getter=isContiguous) _Bool contiguous;
@property(readonly, nonatomic) unsigned char attachmentContiguousType;
@property(readonly, nonatomic) unsigned char contiguousType;
- (_Bool)isAttachmentContiguousWithChatItem:(id)arg1;
- (_Bool)isContiguousWithChatItem:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

