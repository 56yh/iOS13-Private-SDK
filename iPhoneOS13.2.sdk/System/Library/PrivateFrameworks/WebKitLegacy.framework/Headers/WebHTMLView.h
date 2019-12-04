//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebCore/WAKView.h>

#import <WebKitLegacy/WebDocumentElement-Protocol.h>
#import <WebKitLegacy/WebDocumentIncrementalSearching-Protocol.h>
#import <WebKitLegacy/WebDocumentOptionsSearching-Protocol.h>
#import <WebKitLegacy/WebDocumentSearching-Protocol.h>
#import <WebKitLegacy/WebDocumentSelection-Protocol.h>
#import <WebKitLegacy/WebDocumentView-Protocol.h>
#import <WebKitLegacy/WebMultipleTextMatches-Protocol.h>

@class NSString, WebHTMLViewPrivate;

@interface WebHTMLView : WAKView <WebDocumentSelection, WebDocumentIncrementalSearching, WebDocumentElement, WebMultipleTextMatches, WebDocumentOptionsSearching, WebDocumentView, WebDocumentSearching>
{
    WebHTMLViewPrivate *_private;
}

+ (id)unsupportedTextMIMETypes;
+ (id)supportedNonImageMIMETypes;
+ (id)supportedImageMIMETypes;
+ (id)supportedMediaMIMETypes;
+ (id)supportedMIMETypes;
- (void)markedTextUpdate:(id)arg1;
- (_Bool)_wantsKeyDownForEvent:(id)arg1;
- (void)makeBaseWritingDirectionNatural:(id)arg1;
- (void)capitalizeWord:(id)arg1;
- (void)lowercaseWord:(id)arg1;
- (void)uppercaseWord:(id)arg1;
- (void)_changeWordCaseWithSelector:(SEL)arg1;
- (void)_applyEditingStyleToSelection:(Ref_8e48ecf0 *)arg1 withUndoAction:(unsigned char)arg2;
- (void)_applyStyleToSelection:(id)arg1 withUndoAction:(unsigned char)arg2;
- (id)_emptyStyle;
- (void)centerSelectionInVisibleArea:(id)arg1;
- (id)_accessibilityParentForSubview:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityFocusedUIElement;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)_setPrinting:(_Bool)arg1 minimumPageLogicalWidth:(float)arg2 logicalHeight:(float)arg3 originalPageWidth:(float)arg4 originalPageHeight:(float)arg5 maximumShrinkRatio:(float)arg6 adjustViewSize:(_Bool)arg7 paginateScreenContent:(_Bool)arg8;
- (void)dataSourceUpdated:(id)arg1;
- (void)setDataSource:(id)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)pressureChangeWithEvent:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)touch:(id)arg1;
- (void)mouseDown:(id)arg1;
- (_Bool)_isSelectionEvent:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawSingleRect:(struct CGRect)arg1;
- (void)setNeedsToApplyStyles:(_Bool)arg1;
- (void)setNeedsLayout:(_Bool)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (_Bool)isOpaque;
- (void)clearFocus;
- (_Bool)searchFor:(id)arg1 direction:(_Bool)arg2 caseSensitive:(_Bool)arg3 wrap:(_Bool)arg4;
- (void)layout;
- (void)layoutToMinimumPageWidth:(float)arg1 height:(float)arg2 originalPageWidth:(float)arg3 originalPageHeight:(float)arg4 maximumShrinkRatio:(float)arg5 adjustingViewSize:(_Bool)arg6;
- (void)reapplyStyles;
- (void)willRemoveSubview:(id)arg1;
- (void)addSubview:(id)arg1;
- (void)viewDidMoveToHostWindow;
- (void)viewWillMoveToHostWindow:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (_Bool)maintainsInactiveSelection;
- (_Bool)acceptsFirstResponder;
- (void)jumpToSelection:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (void)toggleItalic:(id)arg1;
- (void)toggleBold:(id)arg1;
- (void)clearText:(id)arg1;
- (void)yankAndSelect:(id)arg1;
- (void)yank:(id)arg1;
- (void)unscript:(id)arg1;
- (void)underline:(id)arg1;
- (void)transpose:(id)arg1;
- (void)swapWithMark:(id)arg1;
- (void)superscript:(id)arg1;
- (void)subscript:(id)arg1;
- (void)setMark:(id)arg1;
- (void)selectWord:(id)arg1;
- (void)selectToMark:(id)arg1;
- (void)selectSentence:(id)arg1;
- (void)selectParagraph:(id)arg1;
- (void)selectLine:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)pasteAsPlainText:(id)arg1;
- (void)pageUpAndModifySelection:(id)arg1;
- (void)pageUp:(id)arg1;
- (void)pageDownAndModifySelection:(id)arg1;
- (void)pageDown:(id)arg1;
- (void)overWrite:(id)arg1;
- (void)outdent:(id)arg1;
- (void)moveWordRightAndModifySelection:(id)arg1;
- (void)moveWordRight:(id)arg1;
- (void)moveWordLeftAndModifySelection:(id)arg1;
- (void)moveWordLeft:(id)arg1;
- (void)moveWordForwardAndModifySelection:(id)arg1;
- (void)moveWordForward:(id)arg1;
- (void)moveWordBackwardAndModifySelection:(id)arg1;
- (void)moveWordBackward:(id)arg1;
- (void)moveUpAndModifySelection:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)moveToRightEndOfLineAndModifySelection:(id)arg1;
- (void)moveToRightEndOfLine:(id)arg1;
- (void)moveToLeftEndOfLineAndModifySelection:(id)arg1;
- (void)moveToLeftEndOfLine:(id)arg1;
- (void)moveToEndOfSentenceAndModifySelection:(id)arg1;
- (void)moveToEndOfSentence:(id)arg1;
- (void)moveToEndOfParagraphAndModifySelection:(id)arg1;
- (void)moveToEndOfParagraph:(id)arg1;
- (void)moveToEndOfLineAndModifySelection:(id)arg1;
- (void)moveToEndOfLine:(id)arg1;
- (void)moveToEndOfDocumentAndModifySelection:(id)arg1;
- (void)moveToEndOfDocument:(id)arg1;
- (void)moveToBeginningOfSentenceAndModifySelection:(id)arg1;
- (void)moveToBeginningOfSentence:(id)arg1;
- (void)moveToBeginningOfParagraphAndModifySelection:(id)arg1;
- (void)moveToBeginningOfParagraph:(id)arg1;
- (void)moveToBeginningOfLineAndModifySelection:(id)arg1;
- (void)moveToBeginningOfLine:(id)arg1;
- (void)moveToBeginningOfDocumentAndModifySelection:(id)arg1;
- (void)moveToBeginningOfDocument:(id)arg1;
- (void)moveRightAndModifySelection:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)moveParagraphForwardAndModifySelection:(id)arg1;
- (void)moveParagraphBackwardAndModifySelection:(id)arg1;
- (void)moveLeftAndModifySelection:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveForwardAndModifySelection:(id)arg1;
- (void)moveForward:(id)arg1;
- (void)moveDownAndModifySelection:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)moveBackwardAndModifySelection:(id)arg1;
- (void)moveBackward:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (void)makeTextWritingDirectionNatural:(id)arg1;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)insertTabIgnoringFieldEditor:(id)arg1;
- (void)insertTab:(id)arg1;
- (void)insertParagraphSeparator:(id)arg1;
- (void)insertNewlineIgnoringFieldEditor:(id)arg1;
- (void)insertNewline:(id)arg1;
- (void)insertLineBreak:(id)arg1;
- (void)insertBacktab:(id)arg1;
- (void)indent:(id)arg1;
- (void)ignoreSpelling:(id)arg1;
- (void)deleteWordForward:(id)arg1;
- (void)deleteWordBackward:(id)arg1;
- (void)deleteToMark:(id)arg1;
- (void)deleteToEndOfParagraph:(id)arg1;
- (void)deleteToEndOfLine:(id)arg1;
- (void)deleteToBeginningOfParagraph:(id)arg1;
- (void)deleteToBeginningOfLine:(id)arg1;
- (void)deleteForward:(id)arg1;
- (void)deleteBackwardByDecomposingPreviousCharacter:(id)arg1;
- (void)deleteBackward:(id)arg1;
- (void)delete:(id)arg1;
- (void)paste:(id)arg1;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (void)alignRight:(id)arg1;
- (void)alignLeft:(id)arg1;
- (void)alignJustified:(id)arg1;
- (void)alignCenter:(id)arg1;
- (void)executeCoreCommandByName:(const char *)arg1;
- (void)executeCoreCommandBySelector:(SEL)arg1;
- (struct Command)coreCommandByName:(const char *)arg1;
- (struct Command)coreCommandBySelector:(SEL)arg1;
- (_Bool)callDelegateDoCommandBySelectorIfNeeded:(SEL)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)_isTopHTMLView;
- (id)_topHTMLView;
- (void)_setMouseDownEvent:(id)arg1;
- (id)_selectedRange;
- (_Bool)_shouldReplaceSelectionWithText:(id)arg1 givenAction:(long long)arg2;
- (_Bool)_shouldInsertText:(id)arg1 replacingDOMRange:(id)arg2 givenAction:(long long)arg3;
- (_Bool)_shouldInsertFragment:(id)arg1 replacingDOMRange:(id)arg2 givenAction:(long long)arg3;
- (id)_frameView;
- (id)_webView;
- (id)_dataSource;
- (id)_documentRange;
- (id)accessibilityRootElement;
- (double)_adjustedBottomOfPageWithTop:(double)arg1 bottom:(double)arg2 limit:(double)arg3;
- (void)_endScreenPaginationMode;
- (_Bool)_beginScreenPaginationModeWithPageSize:(struct CGSize)arg1 shrinkToFit:(_Bool)arg2;
- (_Bool)_isInScreenPaginationMode;
- (void)_endPrintMode;
- (_Bool)_beginPrintModeWithPageWidth:(float)arg1 height:(float)arg2 shrinkToFit:(_Bool)arg3;
- (_Bool)_beginPrintModeWithMinimumPageWidth:(double)arg1 height:(double)arg2 maximumPageWidth:(double)arg3;
- (_Bool)_isInPrintMode;
- (id)_compositingLayersHostingView;
- (_Bool)_isUsingAcceleratedCompositing;
- (void)close;
- (void)_decreaseSelectionListLevel;
- (id)_increaseSelectionListLevelUnordered;
- (id)_increaseSelectionListLevelOrdered;
- (id)_increaseSelectionListLevel;
- (_Bool)_canDecreaseSelectionListLevel;
- (_Bool)_canIncreaseSelectionListLevel;
- (id)_insertUnorderedList;
- (id)_insertOrderedList;
- (_Bool)_isEditable;
- (_Bool)_hasInsertionPoint;
- (_Bool)_hasSelectionOrInsertionPoint;
- (_Bool)_hasSelection;
- (_Bool)_canAlterCurrentSelection;
- (_Bool)_canEditRichly;
- (_Bool)_canEdit;
- (struct CGRect)_selectionRect;
- (void)setScale:(float)arg1;
- (void)layoutIfNeeded;
- (void)_setToolTip:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (void)viewWillDraw;
- (void)_restoreSubviews;
- (void)_setAsideSubviews;
- (void)_frameOrBoundsChanged;
- (void)mouseMoved:(id)arg1;
- (id)_pluginController;
- (void)_stopAutoscrollTimer;
- (_Bool)_needsLayout;
- (void)_destroyAllWebPlugins;
- (void)_web_updateLayoutAndStyleIfNeededRecursive;
- (void)_layoutIfNeeded;
- (_Bool)_handleEditingKeyEvent:(struct KeyboardEvent *)arg1;
- (void)_executeSavedKeypressCommands;
- (void)closeIfNotCurrentView;
- (id)_frame;
- (_Bool)_canSmartCopyOrDelete;
- (void)_selectionChanged;
- (void)insertText:(id)arg1;
- (void)doCommandBySelector:(SEL)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)unmarkText;
- (_Bool)hasMarkedText;
- (long long)conversationIdentifier;
- (struct _NSRange)markedRange;
- (struct _NSRange)selectedRange;
- (struct CGRect)firstRectForCharacterRange:(struct _NSRange)arg1;
- (unsigned long long)characterIndexForPoint:(struct CGPoint)arg1;
- (_Bool)searchFor:(id)arg1 direction:(_Bool)arg2 caseSensitive:(_Bool)arg3 wrap:(_Bool)arg4 startInSelection:(_Bool)arg5;
- (_Bool)supportsTextEncoding;
- (id)selectedString;
- (id)string;
- (void)deselectAll;
- (void)selectAll;
- (struct CGRect)selectionImageRect;
- (struct CGImage *)selectionImageForcingBlackText:(_Bool)arg1;
- (id)selectionView;
- (id)selectionTextRects;
- (struct CGRect)selectionRect;
- (_Bool)_findString:(id)arg1 options:(unsigned long long)arg2;
- (id)rectsForTextMatches;
- (void)unmarkAllTextMatches;
- (_Bool)markedTextMatchesAreHighlighted;
- (void)setMarkedTextMatchesAreHighlighted:(_Bool)arg1;
- (unsigned long long)countMatchesForText:(id)arg1 inDOMRange:(id)arg2 options:(unsigned long long)arg3 limit:(unsigned long long)arg4 markMatches:(_Bool)arg5;
- (id)elementAtPoint:(struct CGPoint)arg1 allowShadowContent:(_Bool)arg2;
- (id)elementAtPoint:(struct CGPoint)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

