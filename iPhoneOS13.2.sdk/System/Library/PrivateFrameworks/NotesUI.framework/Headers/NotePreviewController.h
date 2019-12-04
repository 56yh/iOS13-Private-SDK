//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <NotesUI/ICNotePreviewing-Protocol.h>
#import <NotesUI/NoteContentLayerAttachmentPresentationDelegate-Protocol.h>
#import <NotesUI/UITextViewDelegate-Protocol.h>

@class ICSearchResult, NSArray, NSString, NoteContentLayer, NoteObject, NotesBackgroundView;

@interface NotePreviewController : UIViewController <UITextViewDelegate, NoteContentLayerAttachmentPresentationDelegate, ICNotePreviewing>
{
    NoteContentLayer *_contentLayer;
    NoteObject *_note;
    ICSearchResult *_searchResult;
    NSArray *_attachmentPresentations;
}

@property(retain, nonatomic) NSArray *attachmentPresentations; // @synthesize attachmentPresentations=_attachmentPresentations;
@property(retain, nonatomic) ICSearchResult *searchResult; // @synthesize searchResult=_searchResult;
@property(retain, nonatomic) NoteObject *note; // @synthesize note=_note;
@property(retain, nonatomic) NoteContentLayer *contentLayer; // @synthesize contentLayer=_contentLayer;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateForceLightContentIfNecessary;
- (void)applicationDidBecomeActive:(id)arg1;
- (id)attachmentPresentationForContentID:(id)arg1;
- (id)noteContentLayer:(id)arg1 attachmentPresentationForContentID:(id)arg2;
- (id)noteContentLayer:(id)arg1 fileURLForAttachmentWithContentID:(id)arg2;
@property(readonly, nonatomic) NotesBackgroundView *backgroundView;
- (id)attachmentContentIDs;
- (void)setupPreviewWithInitialFrame:(struct CGRect)arg1;
- (void)setupPreview;
- (id)initWithNote:(id)arg1;
- (id)initWithNote:(id)arg1 searchResult:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

