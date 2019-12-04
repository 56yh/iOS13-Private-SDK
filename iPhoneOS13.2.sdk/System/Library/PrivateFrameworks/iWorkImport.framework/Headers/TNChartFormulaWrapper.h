//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TNChartFormulaWrapper : NSObject
{
    struct TSCEFormula *_ptrToFormula;
    long long _cachedNumberOfValues;
    struct TSCEVector *_cachedOutputValueVector;
    struct TSCEVector *_cachedOutputValueVectorWithoutHiddenData;
    vector_38b190b0 _cachedChromeCoords;
    vector_38b190b0 _cachedChromeCoordsWithoutHidden;
}

+ (id)chartFormulaForCellRegion:(id)arg1 inTable:(id)arg2;
+ (id)chartFormulaForTractReference:(id)arg1;
+ (id)chartFormulaForTractAsRangeReferences:(id)arg1;
+ (id)chartFormulaForCellReference:(struct TSCECellRef)arg1;
+ (id)chartFormulaForRangeReference:(struct TSCERangeRef)arg1;
+ (id)chartFormulaForString:(id)arg1;
+ (id)emptyChartFormula;
+ (id)chartFormulaWithCopyOfTSCEFormula:(const struct TSCEFormula *)arg1;
- (id).cxx_construct;
- (id)formulaByTrimmingCategoryLabels:(unsigned long long)arg1 plotByRow:(_Bool)arg2 calcEngine:(id)arg3 inChart:(UUIDData_5fbc143e *)arg4;
- (id)formulaByBakingValuesWithCalcEngine:(id)arg1 inOwner:(const UUIDData_5fbc143e *)arg2;
- (id)formulaByRewriting:(_Bool)arg1 withCalcEngine:(id)arg2 andHostUID:(const UUIDData_5fbc143e *)arg3;
- (id)formulaByProcessingArgumentsWithCalcEngine:(id)arg1 inOwner:(const UUIDData_5fbc143e *)arg2 usingBlock:(id /* block */)arg3;
- (_Bool)isAllStaticValuesWithCalcEngine:(id)arg1 inOwner:(const UUIDData_5fbc143e *)arg2;
- (struct TSCERangeRef)rangeCircumscribingPrecedentsWithCalcEngine:(id)arg1 inOwner:(const UUIDData_5fbc143e *)arg2;
- (id)stringValueForFormulaWithCalcEngine:(id)arg1 inOwner:(const UUIDData_5fbc143e *)arg2;
- (id)argumentCollectionWithCalcEngine:(id)arg1 inChart:(const UUIDData_5fbc143e *)arg2 storeBadRef:(_Bool)arg3;
- (id)argumentCollectionWithCalcEngine:(id)arg1 inChart:(const UUIDData_5fbc143e *)arg2;
- (unsigned long long)numberOfTotalPlotwiseLabelValuesWithCalcEngine:(id)arg1 inChart:(const UUIDData_5fbc143e *)arg2 byRow:(_Bool)arg3 shouldSkipHiddenData:(_Bool)arg4;
- (unsigned long long)numberOfValuesWithCalcEngine:(id)arg1 inChart:(const UUIDData_5fbc143e *)arg2;
- (id)plotwiseLabelValuesWithEvaluationContext:(struct TSCEEvaluationContext *)arg1 byRow:(_Bool)arg2 shouldSkipHiddenData:(_Bool)arg3;
- (vector_06892659)outputVectorValuesWithChromeCoords:(struct TSCEEvaluationContext *)arg1 shouldSkipHiddenData:(_Bool)arg2;
- (struct TSCEVector *)outputValueVector:(struct TSCEEvaluationContext *)arg1 shouldSkipHiddenData:(_Bool)arg2;
- (id)description;
@property(readonly) struct TSCEFormula *formula;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)clearCacheForCalculationEngine:(id)arg1;
- (_Bool)formulaIsEqualTo:(id)arg1;
- (void)dealloc;
- (id)initWithCopyOfTSCEFormula:(const struct TSCEFormula *)arg1;

@end

