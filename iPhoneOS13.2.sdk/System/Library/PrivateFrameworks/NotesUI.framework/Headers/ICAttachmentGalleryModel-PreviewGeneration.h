//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NotesShared/ICAttachmentGalleryModel.h>

@interface ICAttachmentGalleryModel (PreviewGeneration)
- (_Bool)generatePreviewsInOperation:(id)arg1;
- (_Bool)needToGeneratePreviews;
- (void)drawPreviewInRect:(struct CGRect)arg1;
- (id)fileURLForTypeIdentifier:(id)arg1;
- (id)providerFileTypes;
- (id)activityItems;
- (id)quicklookPreviewItems;
- (id /* block */)genericBrickThumbnailCreator;
- (id /* block */)genericListThumbnailCreator;
@end

