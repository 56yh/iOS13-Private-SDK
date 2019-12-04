//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NotesShared/ICAttachmentModel.h>

#import <NotesUI/QLPreviewItem-Protocol.h>

@class NSArray, NSString, NSURL;

@interface ICAttachmentModel (UI) <QLPreviewItem>
+ (struct UIImage *)fileIconForURL:(id)arg1 withPreferredSize:(struct CGSize)arg2 uti:(id)arg3;
+ (struct UIImage *)fileIconForURL:(id)arg1 withPreferredSize:(struct CGSize)arg2;
- (void)drawPreviewInRect:(struct CGRect)arg1;
- (struct UIImage *)fileIconWithPreferredSize:(struct CGSize)arg1;
- (id)activityItems;
@property(readonly, nonatomic) NSArray *quicklookPreviewItems;
@property(readonly, nonatomic) id /* block */ genericBrickLargeThumbnailCreator;
@property(readonly, nonatomic) id /* block */ genericBrickThumbnailCreator;
@property(readonly, nonatomic) id /* block */ genericListThumbnailCreator;
@property(readonly, nonatomic) _Bool needToPostProcessAttachment;
- (void)didCancelPreviewGeneratorOperation;
@property(readonly, nonatomic) _Bool requiresNetworkToGeneratePreview;
@property(readonly, nonatomic) _Bool generatePreviewsDuringCloudActivity;
@property(readonly, nonatomic) _Bool generateAsynchronousPreviews;
@property(readonly, nonatomic) _Bool needToGeneratePreviews;
- (void)classifyImageInOperation:(id)arg1;
- (void)generateOCRInOperation:(id)arg1;
- (_Bool)generatePreviewsInOperation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly, nonatomic) NSString *previewItemTitle;
@property(readonly, nonatomic) NSURL *previewItemURL;
@property(readonly) Class superclass;
@end

