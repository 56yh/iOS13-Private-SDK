//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, NoteHTMLEditorView, UIPasteboard;
@protocol _NSReaderDelegate;

@protocol NoteHTMLEditorViewActionDelegate
- (void)insertImageInNoteHTMLEditorView:(NoteHTMLEditorView *)arg1;
- (_Bool)noteHTMLEditorViewShouldPaste:(NoteHTMLEditorView *)arg1;
- (id <_NSReaderDelegate>)readerDelegateInNoteHTMLEditorView:(NoteHTMLEditorView *)arg1;
- (void)noteHTMLEditorView:(NoteHTMLEditorView *)arg1 showShareSheetForAttachment:(NSString *)arg2 atPoint:(struct CGPoint)arg3;
- (_Bool)noteHTMLEditorView:(NoteHTMLEditorView *)arg1 acceptContentsFromPasteboard:(UIPasteboard *)arg2;
- (_Bool)canInsertImagesInNoteHTMLEditorView:(NoteHTMLEditorView *)arg1;
@end
