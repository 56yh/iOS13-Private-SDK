//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>


#import <iWorkImport/TSTCellMapChangeDescriptorDelivering-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TSTConcurrentCellMap : TSPObject <NSCopying, TSTCellMapChangeDescriptorDelivering>
{
    _Bool _uidBased;
    _Bool _mayModifyFormulasInCells;
    _Bool _mayModifyValuesReferencedByFormulas;
    _Bool _applyingToTable;
    NSMutableArray *_mergeActions;
    NSMutableArray *_cellLists;
    NSMutableArray *_inverseMergeActions;
    vector_4dc5f307 _cachedRowUIDs;
    vector_4dc5f307 _cachedColumnUIDs;
}

@property(nonatomic) _Bool applyingToTable; // @synthesize applyingToTable=_applyingToTable;
@property(nonatomic) vector_4dc5f307 cachedColumnUIDs; // @synthesize cachedColumnUIDs=_cachedColumnUIDs;
@property(nonatomic) vector_4dc5f307 cachedRowUIDs; // @synthesize cachedRowUIDs=_cachedRowUIDs;
@property(retain, nonatomic) NSMutableArray *inverseMergeActions; // @synthesize inverseMergeActions=_inverseMergeActions;
@property(retain, nonatomic) NSMutableArray *cellLists; // @synthesize cellLists=_cellLists;
@property(retain, nonatomic) NSMutableArray *mergeActions; // @synthesize mergeActions=_mergeActions;
@property(nonatomic) _Bool mayModifyValuesReferencedByFormulas; // @synthesize mayModifyValuesReferencedByFormulas=_mayModifyValuesReferencedByFormulas;
@property(nonatomic) _Bool mayModifyFormulasInCells; // @synthesize mayModifyFormulasInCells=_mayModifyFormulasInCells;
@property(nonatomic, getter=isUIDBased) _Bool uidBased; // @synthesize uidBased=_uidBased;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)clearMerges;
- (_Bool)containsMergeChanges;
- (void)pushInverseMergeAction:(id)arg1;
- (void)addMergeActions:(id)arg1;
- (void)addMergeAction:(id)arg1;
- (void)convertToInverseCellMap;
- (void)willApplyToTable:(id)arg1;
- (void)enumerateCustomFormatsBeingAddedUsingReplacementBlock:(id /* block */)arg1;
- (void)enumerateRowCellCountDiffUsingBlock:(id /* block */)arg1;
- (void)enumerateColumnCellCountDiffUsingBlock:(id /* block */)arg1;
- (void)updateDataListsConcurrentlyUsingCommentStorageBlock:(id /* block */)arg1 conditionalStyleSetBlock:(id /* block */)arg2 controlCellSpecBlock:(id /* block */)arg3 formulaBlock:(id /* block */)arg4 formulaErrorBlock:(id /* block */)arg5 importWarningSetBlock:(id /* block */)arg6 richTextBlock:(id /* block */)arg7 stringBlock:(id /* block */)arg8 styleBlock:(id /* block */)arg9 customFormatBlock:(id /* block */)arg10 formatBlock:(id /* block */)arg11 preBNCBlock:(id /* block */)arg12;
- (void)enumerateRowsOfCellsConcurrentlyUsingBlock:(id /* block */)arg1;
- (void)gatherRowState:(id /* block */)arg1;
- (void)p_enumerateCellsAddedAndRemovedForFormatsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateCellsAddedAndRemovedOfType:(long long)arg1 withOptions:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (void)p_enumerateNewAndOldCellsSeriallyUsingPreBNCBlock:(id /* block */)arg1;
- (void)p_enumerateNewAndOldCellsSeriallyUsingBlock:(id /* block */)arg1;
- (void)enumerateSeriallyUsingBlock:(id /* block */)arg1;
- (id)affectedBaseColumnAndRowIndexes;
- (void)clearDataListIDs;
- (id)changeDescriptorsForTable:(id)arg1;
- (void)appendCellLists:(id)arg1;
- (void)appendCellList:(id)arg1;
- (void)accumulateCurrentCellsConcurrentlyUsingBlock:(id /* block */)arg1;
- (const vector_4dc5f307 *)columnUIDs;
- (const vector_4dc5f307 *)rowUIDs;
- (void)p_cacheRowColumnUIDs;
- (vector_793e6c56)cellUIDRanges;
- (vector_1235e7c3)viewCellRects;
- (_Bool)hasMultipleCells;
- (_Bool)hasCells;
- (_Bool)containsCellBorderChanges;
- (_Bool)containsCellChanges;
- (void)convertToUuidBasedCellMapUsingTableInfo:(id)arg1 pruneCategorizedCells:(_Bool)arg2;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 uidBased:(_Bool)arg2;

@end

