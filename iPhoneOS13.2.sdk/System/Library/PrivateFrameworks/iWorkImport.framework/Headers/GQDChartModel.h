//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface GQDChartModel : NSObject
{
    struct __CFArray *mChartData;
    struct __CFArray *mColumnNames;
    struct __CFArray *mRowNames;
    struct __CFDictionary *mPropertyBag;
    long long mDirection;
    struct __CFString *mTitle;
    struct __CFString *mCatagoryTitle;
    struct __CFString *mValueTitle;
    struct __CFString *mValue2Title;
    struct __CFBundle *mProcessorBundle;
    _Bool mIsFormulaChart;
}

- (void)dealloc;
- (_Bool)isFormulaChart;
- (struct __CFString *)value2Title;
- (struct __CFString *)valueTitle;
- (struct __CFString *)catagoryTitle;
- (struct __CFString *)title;
- (long long)direction;
- (_Bool)hasFloatValueForProperty:(struct __CFString *)arg1 forSeriesAtIndex:(long long)arg2 value:(float *)arg3;
- (_Bool)hasIntValueForProperty:(struct __CFString *)arg1 forSeriesAtIndex:(long long)arg2 value:(int *)arg3;
- (_Bool)hasStringValueForProperty:(struct __CFString *)arg1 forSeriesAtIndex:(long long)arg2 value:(const struct __CFString **)arg3;
- (_Bool)hasValueForProperty:(struct __CFString *)arg1 forSeriesAtIndex:(long long)arg2 value:(const void **)arg3;
- (struct __CFDictionary *)propertiesForSeriesAtIndex:(long long)arg1;
- (struct __CFArray *)seriesArray;
- (struct __CFDictionary *)propertyBag;
- (struct __CFArray *)rowNames;
- (struct __CFArray *)columnNames;
- (struct __CFArray *)chartData;
- (void)setProcessorBundle:(struct __CFBundle *)arg1;
- (void)transpose;

@end

