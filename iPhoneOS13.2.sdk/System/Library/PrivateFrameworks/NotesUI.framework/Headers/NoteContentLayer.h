//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NotesUI/NoteHTMLEditorViewActionDelegate-Protocol.h>
#import <NotesUI/NoteHTMLEditorViewDelegate-Protocol.h>
#import <NotesUI/NoteHTMLEditorViewLayoutDelegate-Protocol.h>
#import <NotesUI/UIScrollViewDelegate-Protocol.h>

@class NSArray, NSString, NoteDateLabel, NoteHTMLEditorView;
@protocol NoteContentLayerAttachmentPresentationDelegate, NoteContentLayerDelegate, NotesTextureScrolling;

@interface NoteContentLayer : UIView <NoteHTMLEditorViewDelegate, NoteHTMLEditorViewActionDelegate, NoteHTMLEditorViewLayoutDelegate, UIScrollViewDelegate>
{
    _Bool _containsCJK;
    _Bool _tracksMaximumContentLength;
    _Bool _allowsAttachments;
    _Bool _showsDateLabel;
    _Bool _updatedTitleRange;
    id <NoteContentLayerDelegate> _delegate;
    id <NoteContentLayerAttachmentPresentationDelegate> _attachmentPresentationDelegate;
    id <NotesTextureScrolling> _textureScrollingDelegate;
    NoteHTMLEditorView *_noteHTMLEditorView;
    NSArray *_horizontalConstraints;
    NoteDateLabel *_dateLabel;
}

@property(nonatomic) _Bool updatedTitleRange; // @synthesize updatedTitleRange=_updatedTitleRange;
@property(retain, nonatomic) NoteDateLabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain, nonatomic) NSArray *horizontalConstraints; // @synthesize horizontalConstraints=_horizontalConstraints;
@property(nonatomic) _Bool showsDateLabel; // @synthesize showsDateLabel=_showsDateLabel;
@property(nonatomic) _Bool allowsAttachments; // @synthesize allowsAttachments=_allowsAttachments;
@property(retain, nonatomic) NoteHTMLEditorView *noteHTMLEditorView; // @synthesize noteHTMLEditorView=_noteHTMLEditorView;
@property(nonatomic) _Bool tracksMaximumContentLength; // @synthesize tracksMaximumContentLength=_tracksMaximumContentLength;
@property(nonatomic) __weak id <NotesTextureScrolling> textureScrollingDelegate; // @synthesize textureScrollingDelegate=_textureScrollingDelegate;
@property(nonatomic) _Bool containsCJK; // @synthesize containsCJK=_containsCJK;
@property(nonatomic) __weak id <NoteContentLayerAttachmentPresentationDelegate> attachmentPresentationDelegate; // @synthesize attachmentPresentationDelegate=_attachmentPresentationDelegate;
@property(nonatomic) __weak id <NoteContentLayerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)processMapAttachmentItemProvider:(id)arg1;
- (void)processAttachmentItemProviders:(id)arg1;
- (void)chosenUTI:(id *)arg1 andChosenMIMEType:(id *)arg2 forItemProvider:(id)arg3;
- (_Bool)isNoteHTMLEditorViewVisible:(id)arg1;
- (_Bool)noteHTMLEditorViewShouldPaste:(id)arg1;
- (void)noteHTMLEditorView:(id)arg1 showShareSheetForAttachment:(id)arg2 atPoint:(struct CGPoint)arg3;
- (_Bool)shouldRenderAsAttachment:(id)arg1;
- (id)readerDelegateInNoteHTMLEditorView:(id)arg1;
- (_Bool)noteHTMLEditorView:(id)arg1 acceptContentsFromPasteboard:(id)arg2;
- (void)noteHTMLEditorViewNeedsContentReload:(id)arg1;
- (void)insertImageInNoteHTMLEditorView:(id)arg1;
- (_Bool)canInsertImagesInNoteHTMLEditorView:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)noteHTMLEditorView:(id)arg1 webScrollViewDidScroll:(id)arg2;
- (id)noteHTMLEditorView:(id)arg1 updateAttachments:(id)arg2;
- (void)noteHTMLEditorView:(id)arg1 didInvokeStyleFormattingOption:(long long)arg2;
- (void)noteHTMLEditorView:(id)arg1 didInvokeFormattingCalloutOption:(long long)arg2;
- (_Bool)isNoteManagedForNoteHTMLEditorView:(id)arg1;
- (id)noteHTMLEditorView:(id)arg1 attachmentPresentationForContentID:(id)arg2;
- (id)noteHTMLEditorView:(id)arg1 fileURLForAttachmentWithContentID:(id)arg2;
- (void)noteHTMLEditorView:(id)arg1 openURL:(id)arg2;
- (void)noteHTMLEditorViewDidEndEditing:(id)arg1;
- (void)noteHTMLEditorViewDidBeginEditing:(id)arg1;
- (void)noteHTMLEditorViewWillChange:(id)arg1;
- (void)noteHTMLEditorViewDidChange:(id)arg1;
- (_Bool)noteHTMLEditorViewShouldBeginEditing:(id)arg1 isUserInitiated:(_Bool)arg2;
- (void)noteHTMLEditorView:(id)arg1 didAddAttachmentForMimeType:(id)arg2 filename:(id)arg3 data:(id)arg4;
- (id)noteHTMLEditorView:(id)arg1 createAttachmentPresentationWithFileWrapper:(id)arg2 mimeType:(id)arg3;
- (void)noteHTMLEditorView:(id)arg1 addAttachmentItemProviders:(id)arg2;
- (_Bool)noteHTMLEditorView:(id)arg1 canAddAttachmentItemProviders:(id)arg2;
- (_Bool)allowsAttachmentsInNoteHTMLEditorView:(id)arg1;
- (id)keyCommands;
- (void)traitCollectionDidChange:(id)arg1;
- (void)scrollSelectionToVisible:(_Bool)arg1;
- (void)scrollToTopAnimated:(_Bool)arg1;
- (void)setSelectionToStart;
- (id)viewPrintFormatter;
- (void)copyNoteHTMLToPasteboard;
- (id)webArchive;
- (void)replaceSelectionWithAttachmentPresentation:(id)arg1;
- (struct CGRect)rectForDOMNode:(id)arg1;
- (struct CGRect)rectForSelection;
@property(nonatomic) struct CGPoint contentOffset;
- (_Bool)isFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canResignFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutMarginsDidChange;
- (void)didChangeFullSizeClass;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) _Bool hasFullWidth;
@property(readonly, nonatomic) _Bool hasFullHeight;
- (void)setScrollIndicatorInsets:(struct UIEdgeInsets)arg1;
- (void)flashScrollIndicators;
@property(readonly, nonatomic) _Bool contentContainsValuableContent;
@property(readonly, nonatomic) NSString *title;
- (id)contentAsPlainText:(_Bool)arg1;
@property(nonatomic, getter=isEditable) _Bool editable;
- (void)forcedSetContainsCJK:(_Bool)arg1;
- (void)setContent:(id)arg1 isPlainText:(_Bool)arg2 isCJK:(_Bool)arg3 attachments:(id)arg4;
- (void)setTimestampDate:(id)arg1;
- (void)updateDateLabel;
- (void)reloadInterface;
- (void)updateConstraints;
- (void)updateMarginConstraints;
- (void)invalidateSizeRelatedConstraints;
- (void)updateHorizontalConstraints;
- (void)dealloc;
- (void)insertDateLabel;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

