//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSString, TSCHChartEditor, TSCHSelectionPath, TSCHTextEditing;

@protocol TSCHSupportsTextEditing 
- (double)frameHeightChangeForPath:(TSCHSelectionPath *)arg1;
- (void)useEditedString:(NSString *)arg1;
- (TSCHTextEditing *)textEditorForSelectionPath:(TSCHSelectionPath *)arg1 chartEditor:(TSCHChartEditor *)arg2;
- (struct CGRect)frameForEditingTextForSelectionPath:(TSCHSelectionPath *)arg1;
- (_Bool)canEditTextForSelectionPath:(TSCHSelectionPath *)arg1;
@end

