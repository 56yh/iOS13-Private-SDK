//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface TSCHChartSeriesType : NSObject
{
    NSArray *mSeriesRendererClasses;
}

+ (id)inspectorDefaultLocalizedValueLabelsDisclosureTitle;
+ (id)inspectorDefaultLocalizedValueLabelsTabName;
+ (Class)sceneObjectClass;
+ (id)allSeriesTypes;
+ (id)styleArchTypes;
+ (id)expandProperties:(id)arg1;
+ (id)stackedBar3DSeries;
+ (id)bar3DSeries;
+ (id)stackedColumn3DSeries;
+ (id)donut3DSeries;
+ (id)pie3DSeries;
+ (id)stackedArea3DSeries;
+ (id)area3DSeries;
+ (id)line3DSeries;
+ (id)column3DSeries;
+ (id)bubbleSeries;
+ (id)mixedAreaSeries;
+ (id)mixedLineSeries;
+ (id)mixedColumnSeries;
+ (id)stackedAreaSeries;
+ (id)stackedBarSeries;
+ (id)stackedColumnSeries;
+ (id)areaSeries;
+ (id)lineSeries;
+ (id)barSeries;
+ (id)columnSeries;
+ (id)scatterSeries;
+ (id)donutSeries;
+ (id)pieSeries;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)_singletonAlloc;
- (id)seriesFillLabelUIString;
- (id)inspectorLocalizedValueLabelsDisclosureTitle;
- (id)inspectorLocalizedValueLabelsTabName;
- (_Bool)supportsFillSetFill;
- (int)specificFillSetFillProperty;
- (int)fillSetFillProperty;
- (int)seriesStrokeProperty;
- (_Bool)supportsCalloutLines;
- (id)supportedValueLabelsAxisCombinations;
- (id)axisTypesForValueLabels;
- (int)defaultSymbolType;
- (id)userInterfaceName;
- (id)coordinateAxisForSeries:(id)arg1;
- (id)valueAxisForSeries:(id)arg1;
- (id)p_axisForSeries:(id)arg1 isCategory:(_Bool)arg2;
- (Class)sceneObjectClass;
- (_Bool)supportsValueLabelsAxisOption;
- (_Bool)supportsValueLabelsSeriesName;
- (_Bool)supportsValueLabels;
- (unsigned long long)numberOfSeriesForCalculatingBarWidth:(id)arg1;
- (unsigned long long)seriesIndexForDrawing:(id)arg1;
- (double)beginDataValueForSeries:(id)arg1 groupIndex:(unsigned long long)arg2 valueAxisID:(id)arg3;
- (double)beginValueForSeries:(unsigned long long)arg1 index:(unsigned long long)arg2 unitSpaceIntercept:(double)arg3 relativelyPositive:(_Bool)arg4 valueAxis:(id)arg5;
- (id)resetSeriesStorage:(id)arg1 forSeries:(id)arg2;
- (_Bool)chunkedBuildsIncludeInterceptValues;
- (_Bool)supportsLineConnectionStyle;
- (_Bool)supportsLineTypeNone;
- (_Bool)supportsSymbolFillForSymbolType:(int)arg1;
- (id)p_supportedSymbolsIfSymbolsSupported;
- (_Bool)supportsShadowOffset;
- (id)supportedSymbols;
- (_Bool)supportsSymbolTypeEditing;
- (_Bool)supportsSymbolDrawing;
- (_Bool)supportsSeriesStroke;
- (_Bool)supportsSeries3DFill;
- (_Bool)supportsSeriesGradientFill;
- (_Bool)supportsSeriesFill;
- (id)cdeFillForSeries:(id)arg1;
- (id)propertiesForReferenceColors;
- (id)legendStrokeForSeries:(id)arg1;
- (id)legendFillForSeries:(id)arg1;
- (int)legendBadgeType;
- (id)genericToSpecificPropertyMap;
- (unsigned int)filterChartLabelPosition:(unsigned int)arg1 forSeries:(id)arg2;
- (unsigned int)filterChartLabelPosition:(unsigned int)arg1;
- (unsigned int)adjustLabelPosition:(unsigned int)arg1 forAxisValue:(double)arg2 intercept:(double)arg3;
- (id)userInterfaceNameForLabelPosition:(id)arg1;
- (id)legalChartLabelPositions;
- (_Bool)isVertical;
- (_Bool)supportsRoundedCorners;
- (_Bool)supportsBarGap;
- (_Bool)supportsSetGap;
- (_Bool)useInBarGapCalculations;
- (id)elementBuilder;
- (id)seriesRendererClasses;
- (unsigned long long)valueDimensions;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)fillPropertyType;
- (id)fillPropertyTypeName;
- (_Bool)canUseEstimatedValueLabelsDrawingRect;
- (_Bool)floatValueForLabelExplosion:(float *)arg1 series:(id)arg2;

@end

