//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Message/MFAttachmentComposeManager.h>

@interface MFAttachmentLibraryManager : MFAttachmentComposeManager
{
}

- (id)attachmentsForMessage:(id)arg1 withSchemes:(id)arg2;
- (void)removeProviderForBaseURL:(id)arg1;
- (id)_dataProviderForAttachmentURL:(id)arg1 error:(id *)arg2;
- (void)_messageAttachmentStorageLocationsDidChangeNotification:(id)arg1;
- (id)initWithPrimaryLibrary:(id)arg1;

@end

