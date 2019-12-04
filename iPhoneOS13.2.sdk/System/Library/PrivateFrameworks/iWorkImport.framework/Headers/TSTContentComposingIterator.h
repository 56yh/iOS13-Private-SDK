//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSTCellRegionIterating-Protocol.h>
#import <iWorkImport/TSTMutableCellIteratorDataUpdating-Protocol.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface TSTContentComposingIterator : NSObject <TSTCellRegionIterating, TSTMutableCellIteratorDataUpdating>
{
    struct TSUCellCoord _minCursorCellID;
    NSMutableArray *_iterators;
    vector_38b190b0 _cursorCellIDs;
}

@property(retain, nonatomic) NSMutableArray *iterators; // @synthesize iterators=_iterators;
@property(nonatomic) vector_38b190b0 cursorCellIDs; // @synthesize cursorCellIDs=_cursorCellIDs;
@property(nonatomic) struct TSUCellCoord minCursorCellID; // @synthesize minCursorCellID=_minCursorCellID;
- (id).cxx_construct;
- (void)terminate;
- (struct TSUCellCoord)advanceToCellID:(struct TSUCellCoord)arg1;
- (struct TSUCellCoord)getNext;
- (void)updateFormulaForCellData:(id)arg1;
- (void)updateCellData:(id)arg1;
- (void)addIterator:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

