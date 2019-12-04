//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface TSCEWarning : NSObject
{
    _Bool _ignored;
    NSDictionary *_metadata;
}

+ (void)reportComparisonWarningInContext:(struct TSCEWarningReportingContext *)arg1 leftType:(int)arg2 rightType:(int)arg3;
+ (void)reportAutomaticUnitConversionWarningInContext:(struct TSCEWarningReportingContext *)arg1;
+ (void)reportLossOfUnitsWarningInContext:(struct TSCEWarningReportingContext *)arg1;
+ (void)reportMismatchedSizesWarningInContext:(struct TSCEWarningReportingContext *)arg1;
+ (void)reportBoolToNumberConversionWarningInContext:(struct TSCEWarningReportingContext *)arg1;
+ (void)reportDayOutOfRangeWarningInContext:(struct TSCEWarningReportingContext *)arg1;
+ (void)reportMonthOutOfRangeWarningInContext:(struct TSCEWarningReportingContext *)arg1;
+ (void)reportNonNumericCellWarningInContext:(struct TSCEWarningReportingContext *)arg1 reference:(id)arg2;
+ (_Bool)setHasVisibleWarnings:(id)arg1;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) _Bool ignored; // @synthesize ignored=_ignored;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)displayStringWithCalculationEngine:(id)arg1 forTable:(const UUIDData_5fbc143e *)arg2 andCellID:(struct TSUCellCoord)arg3;
- (_Bool)isIgnored;
- (id)type;
- (id)copyByRemappingEntityIDs:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;

@end

