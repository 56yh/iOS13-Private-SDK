//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCEGroupByNodeMap : NSObject
{
    struct unordered_map<TSU::UUIDData<TSP::UUIDData>, std::__1::unordered_map<TSU::UUIDData<TSP::UUIDData>, TSCEInternalCellRefSet, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData>>, std::__1::allocator<std::__1::pair<const TSU::UUIDData<TSP::UUIDData>, TSCEInternalCellRefSet>>>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData>>, std::__1::allocator<std::__1::pair<const TSU::UUIDData<TSP::UUIDData>, std::__1::unordered_map<TSU::UUIDData<TSP::UUIDData>, TSCEInternalCellRefSet, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData>>, std::__1::allocator<std::__1::pair<const TSU::UUIDData<TSP::UUIDData>, TSCEInternalCellRefSet>>>>>> _cellRefsByGroupNodeByGroupBy;
    struct unordered_map<TSCEInternalCellReference, std::__1::unordered_set<TSU::UUIDCoord<TSP::UUIDCoord>, std::__1::hash<TSUUuidCoord>, std::__1::equal_to<TSU::UUIDCoord<TSP::UUIDCoord>>, std::__1::allocator<TSU::UUIDCoord<TSP::UUIDCoord>>>, std::__1::hash<TSCEInternalCellReference>, std::__1::equal_to<TSCEInternalCellReference>, std::__1::allocator<std::__1::pair<const TSCEInternalCellReference, std::__1::unordered_set<TSU::UUIDCoord<TSP::UUIDCoord>, std::__1::hash<TSUUuidCoord>, std::__1::equal_to<TSU::UUIDCoord<TSP::UUIDCoord>>, std::__1::allocator<TSU::UUIDCoord<TSP::UUIDCoord>>>>>> _groupNodesByCellRef;
}

- (id).cxx_construct;
-     // Error parsing type: v24@0:8^{GroupByNodeMapArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TSCE::GroupByNodeMapArchive_GroupNodesForGroupBy>=^{Arena}ii^{Rep}}}16, name: encodeToArchive:
-     // Error parsing type: @24@0:8r^{GroupByNodeMapArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TSCE::GroupByNodeMapArchive_GroupNodesForGroupBy>=^{Arena}ii^{Rep}}}16, name: initFromArchive:
- (void)getCellRefs:(struct TSCEReferenceSet *)arg1 inGroupBys:(const vector_4dc5f307 *)arg2;
- (void)getCellRefs:(struct TSCEReferenceSet *)arg1 inGroupBy:(const UUIDData_5fbc143e *)arg2;
- (void)getCellRefs:(struct TSCEReferenceSet *)arg1 forGroupRootInGroupBy:(const UUIDData_5fbc143e *)arg2;
- (_Bool)getCellRefs:(struct TSCEReferenceSet *)arg1 referringToGroupNodes:(const vector_4dc5f307 *)arg2 inGroupBy:(const UUIDData_5fbc143e *)arg3;
- (void)removeAllCellRefsInOwner:(unsigned short)arg1;
- (void)removeCellRef:(const struct TSCEInternalCellReference *)arg1;
- (void)removeCellRef:(const struct TSCEInternalCellReference *)arg1 usingCategoryRef:(const struct TSCECategoryRef *)arg2;
- (void)addCellRef:(const struct TSCEInternalCellReference *)arg1 usingCategoryRef:(const struct TSCECategoryRef *)arg2;
- (id)description;

@end

