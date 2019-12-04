//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

@class TSTTableInfo;

__attribute__((visibility("hidden")))
@interface TSTSummaryCellVendor : TSPObject
{
    _Bool _hasCustomFormatsToPaste;
    TSTTableInfo *_tableInfo;
    map_cd95b0b7 _cellUIDMap;
}

@property(nonatomic) _Bool hasCustomFormatsToPaste; // @synthesize hasCustomFormatsToPaste=_hasCustomFormatsToPaste;
@property(readonly, nonatomic) map_cd95b0b7 *cellUIDMap; // @synthesize cellUIDMap=_cellUIDMap;
@property(readonly, nonatomic) __weak TSTTableInfo *tableInfo; // @synthesize tableInfo=_tableInfo;
- (id).cxx_construct;
-     // Error parsing type: v32@0:8^{SummaryCellVendorArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TST::SummaryCellVendorArchive_SummaryCellEntry>=^{Arena}ii^{Rep}}^{Reference}}16@24, name: saveToArchive:archiver:
- (void)saveToArchiver:(id)arg1;
-     // Error parsing type: v32@0:8r^{SummaryCellVendorArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TST::SummaryCellVendorArchive_SummaryCellEntry>=^{Arena}ii^{Rep}}^{Reference}}16@24, name: loadFromArchive:unarchiver:
- (void)loadFromUnarchiver:(id)arg1;
- (void)addPasteboardCustomFormatsToDocumentAndUpdateCells;
- (void)reassignPasteboardCustomFormatKeys;
- (void)runChange:(id)arg1 withSummaryCellMap:(id)arg2 migrationHelper:(id)arg3;
- (id)cellMapForWildcardCells;
- (void)removeCellsInColumnUid:(UUIDData_5fbc143e *)arg1;
- (int)getCell:(id)arg1 atCellUID:(const struct TSTCellUID *)arg2;
- (id)cellAtCellUID:(const struct TSTCellUID *)arg1;
- (void)setCell:(id)arg1 atCellUID:(const struct TSTCellUID *)arg2;
- (id)p_cellSpecForAggregateType:(unsigned char)arg1 forColumnUID:(UUIDData_5fbc143e)arg2 atGroupLevel:(unsigned char)arg3;
- (void)setAggregateType:(unsigned char)arg1 forColumnUID:(UUIDData_5fbc143e)arg2 atGroupLevel:(unsigned char)arg3;
- (void)enumerateCellsUsingBlock:(id /* block */)arg1;
- (void)setTableInfoForGSSP:(id)arg1;
- (id)initWithTableInfo:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 tableInfo:(id)arg2;

@end

