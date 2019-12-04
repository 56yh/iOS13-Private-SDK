//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSTCellIterating-Protocol.h>

@class NSMutableIndexSet, NSString, TSTCell, TSTCellRegion, TSTMutableCellIteratorData, TSTTableInfo, TSTTableModel;
@protocol TSTCellRegionIterating, TSTCellRegionIterating><TSTMutableCellIteratorDataUpdating;

__attribute__((visibility("hidden")))
@interface TSTCellIterator : NSObject <TSTCellIterating>
{
    _Bool _returnCellContents;
    _Bool _returnEmptyCells;
    _Bool _returnOneEmptyCell;
    _Bool _terminateRegionIterator;
    _Bool _returnOnlyFormulas;
    unsigned int _rowForColumnIndexesWithMerges;
    TSTTableInfo *_tableInfo;
    TSTTableModel *_tableModel;
    TSTCellRegion *_region;
    TSTCell *_cell;
    TSTMutableCellIteratorData *_cellData;
    id <TSTCellRegionIterating><TSTMutableCellIteratorDataUpdating> _contentIterator;
    id <TSTCellRegionIterating><TSTMutableCellIteratorDataUpdating> _strokeIterator;
    id <TSTCellRegionIterating> _regionIterator;
    id <TSTCellRegionIterating><TSTMutableCellIteratorDataUpdating> _dataStoreIterator;
    NSMutableIndexSet *_columnIndexesWithMerges;
}

@property(retain, nonatomic) NSMutableIndexSet *columnIndexesWithMerges; // @synthesize columnIndexesWithMerges=_columnIndexesWithMerges;
@property(nonatomic) unsigned int rowForColumnIndexesWithMerges; // @synthesize rowForColumnIndexesWithMerges=_rowForColumnIndexesWithMerges;
@property(retain, nonatomic) id <TSTCellRegionIterating><TSTMutableCellIteratorDataUpdating> dataStoreIterator; // @synthesize dataStoreIterator=_dataStoreIterator;
@property(retain, nonatomic) id <TSTCellRegionIterating> regionIterator; // @synthesize regionIterator=_regionIterator;
@property(retain, nonatomic) id <TSTCellRegionIterating><TSTMutableCellIteratorDataUpdating> strokeIterator; // @synthesize strokeIterator=_strokeIterator;
@property(retain, nonatomic) id <TSTCellRegionIterating><TSTMutableCellIteratorDataUpdating> contentIterator; // @synthesize contentIterator=_contentIterator;
@property(nonatomic) _Bool returnOnlyFormulas; // @synthesize returnOnlyFormulas=_returnOnlyFormulas;
@property(nonatomic) _Bool terminateRegionIterator; // @synthesize terminateRegionIterator=_terminateRegionIterator;
@property(nonatomic) _Bool returnOneEmptyCell; // @synthesize returnOneEmptyCell=_returnOneEmptyCell;
@property(nonatomic) _Bool returnEmptyCells; // @synthesize returnEmptyCells=_returnEmptyCells;
@property(retain, nonatomic) TSTMutableCellIteratorData *cellData; // @synthesize cellData=_cellData;
@property(retain, nonatomic) TSTCell *cell; // @synthesize cell=_cell;
@property(readonly, nonatomic) TSTCellRegion *region; // @synthesize region=_region;
@property(retain, nonatomic) TSTTableModel *tableModel; // @synthesize tableModel=_tableModel;
@property(readonly, nonatomic) _Bool returnCellContents; // @synthesize returnCellContents=_returnCellContents;
@property(readonly, retain, nonatomic) TSTTableInfo *tableInfo; // @synthesize tableInfo=_tableInfo;
- (void)p_updateDataForCellID:(struct TSUCellCoord)arg1;
- (void)p_updateDataForMergeAtCellID:(struct TSUCellCoord)arg1;
- (struct TSUCellCoord)p_getNextCellID;
- (void)terminate;
- (_Bool)getNextCellData:(id *)arg1;
- (id)nextCellData;
- (void)iterateCellsUsingBlock:(id /* block */)arg1;
- (id)initWithTableInfo:(id)arg1 region:(id)arg2 flags:(unsigned long long)arg3 searchFlags:(unsigned long long)arg4;
- (id)initWithTableInfo:(id)arg1 range:(struct TSUCellRect)arg2 flags:(unsigned long long)arg3 searchFlags:(unsigned long long)arg4;
- (id)initWithTableInfo:(id)arg1 flags:(unsigned long long)arg2 searchFlags:(unsigned long long)arg3;
- (id)initWithTableInfo:(id)arg1 region:(id)arg2 flags:(unsigned long long)arg3 searchFlags:(unsigned long long)arg4 clampingRange:(struct TSUCellRect)arg5;
- (id)initWithTableInfo:(id)arg1 tableModel:(id)arg2 region:(id)arg3 flags:(unsigned long long)arg4 searchFlags:(unsigned long long)arg5 clampingRange:(struct TSUCellRect)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

