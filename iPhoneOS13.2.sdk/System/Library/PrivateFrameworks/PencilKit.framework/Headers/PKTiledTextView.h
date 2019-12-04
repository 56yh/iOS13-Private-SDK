//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PencilKit/PKTiledView.h>

@class PKAttachmentView, UIButton;

@interface PKTiledTextView : PKTiledView
{
    PKAttachmentView *_standInEndAttachmentView;
    UIButton *_tapToRadarButton;
}

@property(retain, nonatomic) UIButton *tapToRadarButton; // @synthesize tapToRadarButton=_tapToRadarButton;
@property(retain, nonatomic) PKAttachmentView *standInEndAttachmentView; // @synthesize standInEndAttachmentView=_standInEndAttachmentView;
- (id)saveTempData:(id)arg1 name:(id)arg2;
- (void)appendPath:(id)arg1 attachmentString:(id)arg2;
- (void)_tapToRadarButtonTapped:(id)arg1;
- (void)_setupTapToRadarButton;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGRect)frameOfEndAttachment;
- (_Bool)insertAttachmentIfInBlankSpace:(struct CGPoint)arg1;
- (_Bool)hasEndAttachment;
- (void)updateEndAttachment;
- (void)_layoutSubviews;
- (void)layoutSubviews;
- (void)setLinedPaper:(id)arg1;
- (void)canvasViewDidEndDrawing:(id)arg1;
- (void)canvasViewWillBeginNewStroke:(id)arg1 withTouch:(id)arg2;
- (_Bool)canAddStroke;
- (id)standInAttachmentView;
- (_Bool)_shouldUpdateHeightOfAttachments;
- (void)textDidEndEditing:(id)arg1;
- (void)textDidBeginEditing:(id)arg1;
- (void)textDidChange:(id)arg1;
- (id)initInScrollView:(id)arg1;

@end

