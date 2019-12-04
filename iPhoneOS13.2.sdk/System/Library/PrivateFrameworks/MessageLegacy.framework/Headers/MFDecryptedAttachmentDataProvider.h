//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MessageLegacy/MFAttachmentDataProviderProtocol-Protocol.h>

@class MFMailMessage, NSString;

@interface MFDecryptedAttachmentDataProvider : NSObject <MFAttachmentDataProviderProtocol>
{
    MFMailMessage *_message;
}

- (id)storageLocationForAttachment:(id)arg1 withMessage:(id)arg2;
- (id)messageForAttachment:(id)arg1;
- (void)fetchDataForAttachment:(id)arg1 consumer:(id)arg2 progress:(id)arg3 completion:(id /* block */)arg4;
- (id)fetchLocalDataForAttachment:(id)arg1;
- (void)dealloc;
- (id)initWithDecryptedMessage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

