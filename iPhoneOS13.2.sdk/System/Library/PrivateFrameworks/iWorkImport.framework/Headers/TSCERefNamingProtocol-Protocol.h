//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSString, TSCECalculationEngine, TSCERefNamingContext, TSCEWrappedRangeRef;

@protocol TSCERefNamingProtocol 
- (NSString *)nameForWrappedRangeRef:(TSCEWrappedRangeRef *)arg1 namingContext:(TSCERefNamingContext *)arg2;
- (NSString *)nameForChromeColumnIndex:(const struct TSUChromeColumnIndex *)arg1 inTable:(const UUIDData_5fbc143e *)arg2 useSymbolicNames:(_Bool)arg3;
- (NSString *)cellRangeNameFromChromeRangeRef:(const RefTypeHolder_8c6da553 *)arg1 namingContext:(TSCERefNamingContext *)arg2;
- (NSString *)nameForChromeRangeRef:(const RefTypeHolder_8c6da553 *)arg1 namingContext:(TSCERefNamingContext *)arg2;
- (NSString *)nameForBaseRangeRef:(const RefTypeHolder_1140c985 *)arg1 namingContext:(TSCERefNamingContext *)arg2;
- (id)initWithCalcEngine:(TSCECalculationEngine *)arg1;
@end

