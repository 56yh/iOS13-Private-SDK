//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSCETableTranslatorProtocol-Protocol.h>

@class NSArray, NSString, TSCECoordMapper, TSTColumnRowUIDMap, TSTTableInfo, TSTTableModel;

__attribute__((visibility("hidden")))
@interface TSTTableTranslator : NSObject <TSCETableTranslatorProtocol>
{
    TSTTableInfo *_tableInfo;
    TSTTableModel *_baseTableModel;
    TSCECoordMapper *_coordMapper;
}

@property(nonatomic) TSTTableInfo *tableInfo; // @synthesize tableInfo=_tableInfo;
@property(readonly, nonatomic) TSTTableModel *baseTableModel; // @synthesize baseTableModel=_baseTableModel;
- (void)resetViewMapAndNotify;
- (void)resetViewMap;
- (_Bool)areMapsStale;
- (void)forceGroupingChangeReset;
- (_Bool)checkMapsAndAssert:(_Bool)arg1;
- (Class)iteratorClass;
- (_Bool)hasCommentAtCellID:(struct TSUViewCellCoord)arg1;
- (void)didMakeGroupingChangesInRowUIDs:(id)arg1;
- (id)cellAtGroupLevel:(unsigned char)arg1 columnUID:(const UUIDData_5fbc143e *)arg2;
- (void)addReceiverToGroupBy:(id)arg1;
- (unsigned char)categoryGroupLevelAtLabelRow:(struct TSUViewRowIndex)arg1;
- (unsigned char)categoryGroupLevelAtSummaryRow:(struct TSUViewRowIndex)arg1;
- (id)labelRowIndexes;
- (id)summaryRowIndexes;
- (id)populatedCategoryGroupLevelsInColumn:(struct TSUViewColumnIndex)arg1;
- (_Bool)cellExistsAtCellID:(struct TSUViewCellCoord)arg1;
@property(readonly, nonatomic) unsigned long long numberOfComments;
@property(readonly, nonatomic) unsigned long long numberOfPopulatedCells;
- (struct TSUModelColumnIndex)summaryColumnIndexForViewColumnIndex:(struct TSUViewColumnIndex)arg1;
- (id)baseShuffleMapForViewShuffleMap:(id)arg1;
- (id)viewCellRegionForBaseCellRegion:(id)arg1;
- (id)viewCellRegionForBaseCellRect:(struct TSUModelCellRect)arg1;
- (id)baseCellRegionForViewCellRegion:(id)arg1;
- (id)baseCellRegionForViewCellRect:(struct TSUViewCellRect)arg1;
- (id)baseCellRegionForUIDRange:(const UUIDRect_d701734b *)arg1;
- (struct TSUViewCellCoord)viewCellCoordForCellUID:(const struct TSTCellUID *)arg1;
- (struct TSTCellUID)cellUIDForSummaryCellCoord:(const struct TSUModelCellCoord *)arg1;
- (struct TSTCellUID)cellUIDforBaseCellCoord:(const struct TSUModelCellCoord *)arg1;
- (struct TSUModelCellCoord)baseCellCoordForCellUID:(const struct TSTCellUID *)arg1;
- (id)baseTractRefForChromeTractRef:(id)arg1;
- (id)chromeTractRefForBaseTractRef:(id)arg1;
- (id)viewTractRefForBaseTractRef:(id)arg1;
- (id)baseTractRefForViewTractRef:(id)arg1;
- (id)viewTractRefForChromeTractRef:(id)arg1;
- (id)chromeTractRefForViewTractRef:(id)arg1;
- (RefTypeHolder_45a2a752)viewRangeRefForChromeRangeRef:(const RefTypeHolder_8c6da553 *)arg1;
- (RefTypeHolder_8c6da553)chromeRangeRefForViewRangeRef:(const RefTypeHolder_45a2a752 *)arg1;
- (RefTypeHolder_a8d05c9a)baseCellRefForViewCellRef:(const RefTypeHolder_adbccd1a *)arg1;
- (RefTypeHolder_adbccd1a)viewCellRefForChromeCellRef:(const RefTypeHolder_cfaab535 *)arg1;
- (RefTypeHolder_adbccd1a)viewCellRefForBaseCellRef:(const RefTypeHolder_a8d05c9a *)arg1;
- (RefTypeHolder_cfaab535)chromeCellRefForBaseCellRef:(const RefTypeHolder_a8d05c9a *)arg1;
- (RefTypeHolder_cfaab535)chromeCellRefForViewCellRef:(const RefTypeHolder_adbccd1a *)arg1;
- (struct TSUViewCellCoord)viewCellCoordForChromeCellCoord:(struct TSUChromeCellCoord)arg1;
- (struct TSUChromeCellCoord)chromeCellCoordForViewCellCoord:(struct TSUViewCellCoord)arg1;
- (struct TSUChromeCellCoord)chromeCellCoordForBaseCellCoord:(struct TSUModelCellCoord)arg1;
- (struct TSUViewCellCoord)viewCellCoordForSummaryCellCoord:(struct TSUModelCellCoord)arg1;
- (struct TSUViewCellCoord)viewCellCoordForBaseCellCoord:(struct TSUModelCellCoord)arg1;
- (id)viewRowIndexesForUIDs:(const vector_4dc5f307 *)arg1;
- (id)viewColumnIndexesForUIDs:(const vector_4dc5f307 *)arg1;
- (struct TSUModelCellCoord)baseCellCoordForChromeCellCoord:(struct TSUChromeCellCoord)arg1;
- (struct TSUModelCellCoord)baseCellCoordForViewCellCoord:(struct TSUViewCellCoord)arg1;
- (id)baseRowIndexesForUIDs:(const vector_4dc5f307 *)arg1;
- (id)baseColumnIndexesForUIDs:(const vector_4dc5f307 *)arg1;
- (id)mutableBaseRowIndexesForUIDs:(const vector_4dc5f307 *)arg1;
- (id)mutableBaseColumnIndexesForUIDs:(const vector_4dc5f307 *)arg1;
- (vector_4dc5f307)rowUIDsForBaseRowIndexes:(id)arg1;
- (vector_4dc5f307)columnUIDsForBaseColumnIndexes:(id)arg1;
- (struct TSUViewRowIndex)viewRowIndexForRowUID:(const UUIDData_5fbc143e *)arg1;
- (struct TSUViewColumnIndex)viewColumnIndexForColumnUID:(const UUIDData_5fbc143e *)arg1;
- (struct TSUModelRowIndex)baseRowIndexForRowUID:(const UUIDData_5fbc143e *)arg1;
- (struct TSUModelColumnIndex)baseColumnIndexForColumnUID:(const UUIDData_5fbc143e *)arg1;
- (UUIDData_5fbc143e)rowUIDForViewRowIndex:(const struct TSUViewRowIndex *)arg1;
- (UUIDData_5fbc143e)columnUIDForViewColumnIndex:(const struct TSUViewColumnIndex *)arg1;
- (UUIDData_5fbc143e)rowUIDForBaseRowIndex:(const struct TSUModelRowIndex *)arg1;
- (UUIDData_5fbc143e)columnUIDForBaseColumnIndex:(const struct TSUModelColumnIndex *)arg1;
- (id)viewColumnIndexesForChromeColumnIndexes:(id)arg1;
- (id)viewRowIndexesForChromeRowIndexes:(id)arg1;
- (id)chromeRowIndexesForViewRowIndexes:(id)arg1;
- (id)chromeColumnIndexesForViewColumnIndexes:(id)arg1;
- (id)viewColumnGridIndexesForBaseColumnGridIndexes:(id)arg1;
- (id)viewRowIndexesForBaseRowIndexes:(id)arg1;
- (id)viewColumnIndexesForBaseColumnIndexes:(id)arg1;
- (id)baseRowIndexesForViewRowIndexes:(id)arg1;
- (id)baseColumnIndexesForViewColumnIndexes:(id)arg1;
- (struct TSUViewColumnIndex)viewColumnIndexForChromeColumnIndex:(struct TSUChromeColumnIndex)arg1;
- (struct TSUViewRowIndex)viewRowIndexForChromeRowIndex:(struct TSUChromeRowIndex)arg1;
- (struct TSUChromeColumnIndex)chromeColumnIndexForViewColumnIndex:(struct TSUViewColumnIndex)arg1;
- (struct TSUChromeRowIndex)chromeRowIndexForViewRowIndex:(struct TSUViewRowIndex)arg1;
- (struct TSUViewColumnIndex)viewColumnIndexForBaseColumnIndex:(struct TSUModelColumnIndex)arg1;
- (struct TSUChromeColumnIndex)chromeColumnIndexForBaseColumnIndex:(struct TSUModelColumnIndex)arg1;
- (struct TSUChromeRowIndex)chromeRowIndexForBaseRowIndex:(struct TSUModelRowIndex)arg1;
- (struct TSUViewRowIndex)viewRowIndexForBaseRowIndex:(struct TSUModelRowIndex)arg1;
- (struct TSUModelColumnIndex)baseColumnIndexForChromeColumnIndex:(struct TSUChromeColumnIndex)arg1;
- (struct TSUModelColumnIndex)baseColumnIndexForViewColumnIndex:(struct TSUViewColumnIndex)arg1;
- (struct TSUModelRowIndex)baseRowIndexForChromeRowIndex:(struct TSUChromeRowIndex)arg1;
- (struct TSUModelRowIndex)baseRowIndexForViewRowIndex:(struct TSUViewRowIndex)arg1;
- (_Bool)isValidMergeRange:(struct TSUViewCellRect)arg1;
- (vector_1235e7c3)mergeRangesAndCrumbsIntersectingRange:(struct TSUViewCellRect)arg1;
- (vector_1235e7c3)mergeRangesIntersectingCellRegion:(id)arg1;
- (vector_1235e7c3)mergeRangesIntersectingRange:(struct TSUViewCellRect)arg1;
- (void)enumerateMergesIntersectingCellRegion:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)mergeActionForRegion:(id)arg1 nonOriginPartialsOnly:(_Bool)arg2;
- (id)mergeActionForRegion:(id)arg1;
- (id)removeReturningInverseForRegion:(id)arg1;
- (id)shrinkReturningInverseForRegion:(id)arg1;
- (id)expandCellRegionToCoverMergedCells:(id)arg1;
- (struct TSUViewCellRect)expandCellRangeToCoverMergedCells:(struct TSUViewCellRect)arg1;
- (_Bool)hasRangeSpanningRowsForCellRange:(struct TSUViewCellRect)arg1;
- (id)mergedGridIndicesForDimension:(long long)arg1;
- (_Bool)hasMergeRangesIntersectingCellRegion:(id)arg1;
- (_Bool)hasMergeRangeSpanningRowsForCellRange:(struct TSUViewCellRect)arg1;
- (_Bool)mergeRangesPartiallyIntersectCellRegion:(id)arg1;
- (_Bool)mergeRangesPartiallyIntersectCellRange:(struct TSUViewCellRect)arg1;
- (struct TSUViewCellCoord)mergeOriginForCellID:(struct TSUViewCellCoord)arg1;
- (struct TSUViewCellRect)mergeRangeAtCellID:(struct TSUViewCellCoord)arg1;
- (_Bool)hasMergeRanges;
- (_Bool)unmergeCellRange:(struct TSUViewCellRect)arg1;
- (_Bool)mergeCellRange:(struct TSUViewCellRect)arg1;
- (struct TSUViewCellCoord)cellIDForCellContainingRichTextStorage:(id)arg1;
- (id)cellValueFromCell:(id)arg1 atCellID:(struct TSUViewCellCoord)arg2;
- (int)getValue:(out struct TSCEValue *)arg1 atCellID:(struct TSUViewCellCoord)arg2 fetchRichTextAttributesIfPlainText:(_Bool)arg3;
- (id)commentHostingAtCellID:(struct TSUViewCellCoord)arg1;
- (id)commentHostingAtCellID:(struct TSUViewCellCoord)arg1 forCommentStorage:(id)arg2;
- (void)postCommentNotificationForStorage:(id)arg1 atViewCellCoord:(struct TSUViewCellCoord)arg2 notificationKey:(id)arg3;
- (int)removeCommentStorageAtCellUID:(const struct TSTCellUID *)arg1;
- (int)setCommentStorage:(id)arg1 atCellUID:(const struct TSTCellUID *)arg2;
- (void)swapRowAtIndex:(struct TSUViewRowIndex)arg1 withRowAtIndex:(struct TSUViewRowIndex)arg2;
- (void)moveColumnRange:(struct _NSRange)arg1 toColumnIndex:(struct TSUViewColumnIndex)arg2;
- (void)moveRowRange:(struct _NSRange)arg1 toRowIndex:(struct TSUViewRowIndex)arg2;
- (void)removeAnnotationsFromColumnsAtIndexes:(id)arg1;
- (void)removeAnnotationsFromRowsAtIndexes:(id)arg1;
- (void)removeColumnsAtIndexes:(id)arg1;
- (void)removeRowsAtIndexes:(id)arg1;
- (void)removeColumnsAtIndex:(struct TSUViewColumnIndex)arg1 count:(struct TSUViewColumnIndex)arg2;
- (void)removeRowsAtIndex:(struct TSUViewRowIndex)arg1 count:(struct TSUViewRowIndex)arg2;
- (int)insertRowsAtIndex:(struct TSUViewRowIndex)arg1 uids:(const vector_4dc5f307 *)arg2 metadatas:(id)arg3 tableArea:(unsigned long long)arg4 unsetFilterHidingAction:(_Bool)arg5;
- (int)insertColumnsAtIndex:(struct TSUViewColumnIndex)arg1 uids:(const vector_4dc5f307 *)arg2 metadatas:(id)arg3 tableArea:(unsigned long long)arg4;
- (void)setWidth:(double)arg1 ofColumnAtIndex:(struct TSUViewColumnIndex)arg2;
- (void)setHeight:(double)arg1 ofRowAtIndex:(struct TSUViewRowIndex)arg2;
@property(readonly, retain, nonatomic) NSArray *columnWidths;
@property(readonly, retain, nonatomic) NSArray *rowHeights;
- (double)widthOfColumnAtIndex:(struct TSUViewColumnIndex)arg1;
- (double)heightOfRowAtIndex:(struct TSUViewRowIndex)arg1;
- (double)widthOfColumnAtIndex:(struct TSUViewColumnIndex)arg1 isDefault:(out _Bool *)arg2;
- (double)heightOfRowAtIndex:(struct TSUViewRowIndex)arg1 isDefault:(out _Bool *)arg2;
- (struct TSCEFormula *)formulaAtCellID:(struct TSUViewCellCoord)arg1;
- (_Bool)hasFormulaAtCellID:(struct TSUViewCellCoord)arg1;
- (int)setCellsWithCellMap:(id)arg1 ignoreFormulas:(_Bool)arg2 skipDirtyingNonFormulaCells:(_Bool)arg3;
- (int)setCell:(id)arg1 atCellUID:(const struct TSTCellUID *)arg2 ignoreFormula:(_Bool)arg3 clearImportWarnings:(_Bool)arg4;
- (int)getCell:(id)arg1 atCellUID:(const struct TSTCellUID *)arg2;
- (int)getCell:(id)arg1 atCellID:(struct TSUViewCellCoord)arg2;
- (int)getCell:(id)arg1 atCellID:(struct TSUViewCellCoord)arg2 suppressCellBorder:(_Bool)arg3;
- (id)regionForValueOrCommentCellsInRange:(struct TSUViewCellRect)arg1;
- (id)characterFillAtCellID:(struct TSUViewCellCoord)arg1 optionalCell:(id)arg2;
- (id)stringAtCellID:(struct TSUViewCellCoord)arg1 optionalCell:(id)arg2;
- (id)metadataForColumnIndex:(struct TSUViewColumnIndex)arg1;
- (id)metadataForRowIndex:(struct TSUViewRowIndex)arg1;
- (id)conditionalStyleSetAtCellID:(struct TSUViewCellCoord)arg1;
- (id)textStyleAtCellID:(struct TSUViewCellCoord)arg1 isDefault:(out _Bool *)arg2;
- (id)cellStyleAtCellID:(struct TSUViewCellCoord)arg1 isDefault:(out _Bool *)arg2;
- (_Bool)textStyle:(id)arg1 isEqualToDefaultTextStyleForCellID:(struct TSUViewCellCoord)arg2;
- (_Bool)cellStyle:(id)arg1 isEqualToDefaultCellStyleForCellID:(struct TSUViewCellCoord)arg2;
- (id)textStyleForCellWithEmptyStyleAtCellID:(struct TSUViewCellCoord)arg1 isDefault:(out _Bool *)arg2;
- (id)defaultTextStyleForTableStyleArea:(unsigned long long)arg1;
- (id)defaultTextStyleForCellID:(struct TSUViewCellCoord)arg1;
- (id)cellStyleForCellWithEmptyStyleAtCellID:(struct TSUViewCellCoord)arg1 isDefault:(out _Bool *)arg2;
- (id)defaultCellStyleForTableStyleArea:(unsigned long long)arg1;
- (id)defaultCellStyleForCellID:(struct TSUViewCellCoord)arg1;
- (id)textStyleOfColumnAtIndex:(struct TSUViewColumnIndex)arg1 isDefault:(out _Bool *)arg2;
- (id)cellStyleOfColumnAtIndex:(struct TSUViewColumnIndex)arg1 isDefault:(out _Bool *)arg2;
- (int)setTextStyle:(id)arg1 ofColumnAtUID:(const UUIDData_5fbc143e *)arg2;
- (int)setCellStyle:(id)arg1 ofColumnAtUID:(const UUIDData_5fbc143e *)arg2;
- (id)textStyleOfRowAtIndex:(struct TSUViewRowIndex)arg1 isDefault:(out _Bool *)arg2;
- (id)cellStyleOfRowAtIndex:(struct TSUViewRowIndex)arg1 isDefault:(out _Bool *)arg2;
- (int)setTextStyle:(id)arg1 ofRowAtUID:(const UUIDData_5fbc143e *)arg2;
- (int)setCellStyle:(id)arg1 ofRowAtUID:(const UUIDData_5fbc143e *)arg2;
- (int)cellValueTypeAtCellID:(struct TSUViewCellCoord)arg1;
- (int)getDefaultCell:(out id)arg1 forCellUID:(const struct TSTCellUID *)arg2;
- (int)getDefaultCell:(out id)arg1 forCellID:(struct TSUViewCellCoord)arg2;
- (int)getDefaultCell:(out id)arg1 forTableStyleArea:(unsigned long long)arg2;
- (id)translatedCellRangeName:(const RefTypeHolder_45a2a752 *)arg1 usedSymbolicName:(out _Bool *)arg2;
- (unsigned long long)tableAreaForColumn:(struct TSUViewColumnIndex)arg1;
- (unsigned long long)tableAreaForRow:(struct TSUViewRowIndex)arg1;
- (unsigned long long)tableAreaForDroppingRowAtIndex:(struct TSUViewRowIndex)arg1;
- (unsigned long long)tableAreaForCellID:(struct TSUViewCellCoord)arg1;
- (struct TSUViewCellRect)cellRangeForTableArea:(unsigned long long)arg1;
- (unsigned long long)tableStyleAreaForRow:(struct TSUViewRowIndex)arg1;
- (unsigned long long)tableStyleAreaForCellID:(struct TSUViewCellCoord)arg1;
- (unsigned long long)tableStyleAreaForCellUID:(const struct TSTCellUID *)arg1;
- (double)computeDefaultFontHeightForTableStyleArea:(unsigned long long)arg1;
@property(readonly, nonatomic) struct TSUViewCellRect baseColumnRange;
@property(readonly, nonatomic) struct TSUViewCellRect categoryColumnRange;
@property(readonly, nonatomic) struct TSUViewCellRect bottomCornerRange;
@property(readonly, nonatomic) struct TSUViewCellRect topCornerRange;
@property(readonly, nonatomic) struct TSUViewCellRect footerRowRange;
@property(readonly, nonatomic) struct TSUViewCellRect actualHeaderColumnRange;
@property(readonly, nonatomic) struct TSUViewCellRect headerColumnRange;
@property(readonly, nonatomic) struct TSUViewCellRect headerRowRange;
@property(readonly, nonatomic) struct TSUViewCellRect bodyRowRange;
@property(readonly, nonatomic) struct TSUViewCellRect bodyColumnRange;
- (struct TSUViewCellRect)bodyRangeForLowestLevelGroupEnclosingCellAtCellID:(struct TSUCellCoord)arg1;
@property(readonly, nonatomic) struct TSUViewCellRect bodyRange;
@property(readonly, nonatomic) struct TSUViewCellRect range;
@property(readonly, nonatomic) unsigned int maxNumberOfHeaderColumns;
@property(readonly, nonatomic) unsigned int minNumberOfHeaderColumns;
@property(readonly, nonatomic) struct TSUViewColumnIndex numberOfColumns;
@property(readonly, nonatomic) struct TSUViewRowIndex numberOfRows;
@property(nonatomic) struct TSUViewRowIndex numberOfFooterRows;
@property(nonatomic) struct TSUViewColumnIndex numberOfHeaderColumns;
@property(nonatomic) struct TSUViewRowIndex numberOfHeaderRows;
@property(nonatomic) _Bool wasCut;
- (id)documentRoot;
- (id)objectLocale;
@property(readonly, nonatomic) TSTColumnRowUIDMap *viewMap;
@property(readonly, nonatomic) TSTColumnRowUIDMap *summaryMap;
@property(readonly, nonatomic) TSTColumnRowUIDMap *baseMap;
- (id)coordinateMapper;
- (id)init;
- (void)teardown;
- (id)initWithTableInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

