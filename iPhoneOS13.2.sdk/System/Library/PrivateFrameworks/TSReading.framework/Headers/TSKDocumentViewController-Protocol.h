//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray;

@protocol TSKDocumentViewController
@property(readonly, nonatomic) NSArray *listLanguages;
@property(readonly, nonatomic) NSArray *bidiLanguages;
@property(readonly, nonatomic) _Bool isBiDiEnabled;
@property(readonly, nonatomic) NSArray *CJKLanguages;
@property(readonly, nonatomic) _Bool isCJKEnabled;
@property(readonly, retain, nonatomic) id documentRoot;
- (_Bool)isInspectorVisible;
- (_Bool)inFindReplaceMode;
- (_Bool)inPrintPreviewMode;
- (void)showInsertPopoverFromRect:(struct CGRect)arg1 popoverType:(int)arg2 withDoneButton:(_Bool)arg3;
- (_Bool)insertControllerIsVisible;
- (_Bool)toolsControllerIsVisible;
@end

