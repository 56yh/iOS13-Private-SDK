//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EmailDaemon/EDSearchableIndexItem.h>

#import <Message/EFLoggable-Protocol.h>

@class NSString;

@interface MFSearchableIndexItem_iOS : EDSearchableIndexItem <EFLoggable>
{
}

+ (id)log;
- (id)fetchIndexableAttachments;
- (_Bool)_shouldAutoDownloadAttachment:(id)arg1;
- (void)addAttachmentAttributesToAttributeSet:(id)arg1;
- (void)setNeedsAllAttributesIndexingType;
- (_Bool)shouldExcludeFromIndex;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

