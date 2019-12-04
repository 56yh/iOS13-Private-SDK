//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/CMMapper.h>

@class EDStyle, EDWorkbook;

__attribute__((visibility("hidden")))
@interface EMCellNumberMapper : CMMapper
{
    double edValue;
    EDStyle *edStyle;
    EDWorkbook *workbook;
    double _columnWidth;
}

@property double columnWidth; // @synthesize columnWidth=_columnWidth;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)insertRedSpanIfNegativeAt:(id)arg1;
- (id)formatValueAsNumber;
- (id)initWithDoubleValue:(double)arg1 style:(id)arg2 columnWidth:(double)arg3 workbook:(id)arg4 parent:(id)arg5;

@end

