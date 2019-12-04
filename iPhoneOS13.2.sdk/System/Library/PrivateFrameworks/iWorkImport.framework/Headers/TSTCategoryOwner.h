//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSTCellWillChangeProtocol-Protocol.h>
#import <iWorkImport/TSTMergeChangeProtocol-Protocol.h>

@class NSArray, NSMutableArray, TSCECalculationEngine, TSTTableInfo, TSTTableModel;

__attribute__((visibility("hidden")))
@interface TSTCategoryOwner : NSObject <TSTCellWillChangeProtocol, TSTMergeChangeProtocol>
{
    TSTTableInfo *_tableInfo;
    TSCECalculationEngine *_calcEngine;
    UUIDData_5fbc143e _baseTableUID;
    UUIDData_5fbc143e _ownerUID;
    NSMutableArray *_groupBys;
}

@property(retain, nonatomic) NSArray *groupBys; // @synthesize groupBys=_groupBys;
@property(nonatomic) UUIDData_5fbc143e ownerUID; // @synthesize ownerUID=_ownerUID;
@property(nonatomic) UUIDData_5fbc143e baseTableUID; // @synthesize baseTableUID=_baseTableUID;
- (id).cxx_construct;
- (void)didAddRows:(const vector_4dc5f307 *)arg1;
- (void)willRemoveRows:(const vector_4dc5f307 *)arg1;
- (void)didUnmergeRange:(struct TSUModelCellRect)arg1;
- (void)didMergeRange:(struct TSUModelCellRect)arg1;
- (void)willApplyConcurrentCellMap:(id)arg1;
- (void)willApplyBaseCellMap:(id)arg1;
- (void)willApplyCell:(id)arg1 baseCellCoord:(struct TSUModelCellCoord)arg2;
- (UUIDData_5fbc143e)p_willApplyCell:(id)arg1 baseCellCoord:(struct TSUModelCellCoord)arg2 refreshCategoryInfo:(_Bool)arg3;
- (void)remapTableUIDsInFormulasWithMap:(const UUIDMap_b66c2694 *)arg1 calcEngine:(id)arg2;
-     // Error parsing type: v32@0:8^{CategoryOwnerArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TST::CategoryOwnerArchive_GroupByArchive>=^{Arena}ii^{Rep}}^{UUID}}16@24, name: saveToArchive:archiver:
-     // Error parsing type: @40@0:8r^{CategoryOwnerArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TST::CategoryOwnerArchive_GroupByArchive>=^{Arena}ii^{Rep}}^{UUID}}16@24r^{UUIDData<TSP::UUIDData>=(?=[16C]{?=CCCCCCCCCCCCCCCC}{?=QQ})}32, name: initWithArchive:unarchiver:forBaseTableUID:
- (void)updateWithDocumentRoot:(id)arg1;
- (id)categoryInfos;
- (void)unregisterGroupBy:(id)arg1;
- (id)registerGroupByForColumns:(id)arg1;
- (id)groupByByUid:(const UUIDData_5fbc143e *)arg1;
- (void)registerGroupBy:(id)arg1;
- (id)calcEngine;
- (void)unregisterFromCalcEngine;
- (int)registerWithCalcEngine:(id)arg1 baseOwnerUID:(const UUIDData_5fbc143e *)arg2;
- (void)teardown;
@property(readonly, nonatomic) TSTTableModel *tableModel;
@property(nonatomic) TSTTableInfo *tableInfo; // @synthesize tableInfo=_tableInfo;
- (void)unregisterFromDistributors;
- (void)registerWithDistributors;
- (id)description;
- (_Bool)hasEnabledGroupBys;
- (void)dealloc;
- (id)initWithBaseTableUID:(const UUIDData_5fbc143e *)arg1;
- (id)initWithBaseTableUID:(const UUIDData_5fbc143e *)arg1 ownerUID:(const UUIDData_5fbc143e *)arg2;

@end

