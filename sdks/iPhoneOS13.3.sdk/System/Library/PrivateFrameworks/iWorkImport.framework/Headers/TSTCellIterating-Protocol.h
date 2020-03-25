//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class TSTTableInfo;
@protocol TSTCellIteratorData;

@protocol TSTCellIterating <NSObject>
- (void)terminate;
- (BOOL)getNextCellData:(id )arg1;
- (id <TSTCellIteratorData>)nextCellData;
- (void)iterateCellsUsingBlock:(void (^)(id <TSTCellIteratorData>, BOOL ))arg1;

@optional
@property(readonly, retain, nonatomic) TSTTableInfo *tableInfo;
@end
