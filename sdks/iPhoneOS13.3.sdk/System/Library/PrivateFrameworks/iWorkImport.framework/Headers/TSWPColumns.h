//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSSPropertyValueArchiving-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSWPColumns : NSObject <TSSPropertyValueArchiving>
{
    double _widthArray[10];
    double _gapArray[9];
    BOOL _equalWidth;
    NSUInteger _columnCount;
}

+ (id)instanceWithArchive:(const struct Message )arg1 unarchiver:(id)arg2;
+ (id)columns;
@property(readonly, nonatomic) BOOL equalWidth; // @synthesize equalWidth=_equalWidth;
@property(readonly, nonatomic) NSUInteger columnCount; // @synthesize columnCount=_columnCount;
- (BOOL)p_validate:(BOOL)arg1;
- (id)p_description;
- (id)description;
- (void)p_setGap:(double)arg1 forColumnIndex:(NSUInteger)arg2 bodyWidth:(double)arg3;
- (id)copyWithGap:(double)arg1 forColumnIndex:(NSUInteger)arg2 bodyWidth:(double)arg3;
- (double)p_maxEqualGapForBodyWidth:(double)arg1;
- (void)p_setWidth:(double)arg1 forColumnIndex:(NSUInteger)arg2 bodyWidth:(double)arg3;
- (id)copyWithWidth:(double)arg1 forColumnIndex:(NSUInteger)arg2 bodyWidth:(double)arg3;
- (double)p_equalWidthForEqualGap:(double)arg1;
- (double)p_equalGapForEqualWidth:(double)arg1;
- (double)positionForColumnIndex:(NSUInteger)arg1 bodyWidth:(double)arg2 outWidth:(double )arg3 outGap:(double )arg4;
- (double)gapForColumnIndex:(NSUInteger)arg1 bodyWidth:(double)arg2;
- (double)widthForColumnIndex:(NSUInteger)arg1 bodyWidth:(double)arg2;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)p_setColumnCount:(NSUInteger)arg1;
- (id)copyWithColumnCount:(NSUInteger)arg1;
- (void)p_setColumnCount:(NSUInteger)arg1 gapFraction:(double)arg2;
- (void)p_setEqualWidth:(double)arg1 equalGap:(double)arg2;
- (void)saveToArchive:(struct ColumnsArchive )arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct ColumnsArchive )arg1 unarchiver:(id)arg2;
- (id)copyWithEqualWidth:(BOOL)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithEqualColumnCount:(NSUInteger)arg1 gapFraction:(double)arg2 assert:(BOOL)arg3;
- (id)initWithEqualColumnCount:(NSUInteger)arg1 gapFraction:(double)arg2;
- (id)initWithColumnCount:(NSUInteger)arg1 equalWidth:(BOOL)arg2 widthArray:(double )arg3 gapArray:(double )arg4 assert:(BOOL)arg5;
- (id)initWithColumnCount:(NSUInteger)arg1 equalWidth:(BOOL)arg2 widthArray:(double )arg3 gapArray:(double )arg4;
- (id)init;
- (id)initWithColumnCount:(NSUInteger)arg1;

@end

