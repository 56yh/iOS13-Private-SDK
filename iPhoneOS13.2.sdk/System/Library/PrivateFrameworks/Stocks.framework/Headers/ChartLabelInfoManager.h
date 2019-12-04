//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ChartLabelInfo, NSMutableArray;

@interface ChartLabelInfoManager : NSObject
{
    ChartLabelInfo *_yAxisLabelInfo;
    NSMutableArray *_monthLabelInfoArrays;
    NSMutableArray *_integerLabelInfoArray;
    _Bool _use24hrTime;
}

+ (struct __CFString *)_CFDateFormatterPropertyForMonthLabelLength:(long long)arg1;
+ (id)chartLabelFont;
+ (void)clearSharedManager;
+ (id)sharedLabelInfoManager;
- (void)resetLocale;
- (id)monthLabelInfoArrayForLabelLength:(long long)arg1;
- (_Bool)use24hrTime;
- (id)labelInfoWithUnsignedInteger:(unsigned long long)arg1;
- (id)labelInfoForYAxis;
- (id)labelInfoWithString:(id)arg1;
- (void)dealloc;
- (id)init;

@end

