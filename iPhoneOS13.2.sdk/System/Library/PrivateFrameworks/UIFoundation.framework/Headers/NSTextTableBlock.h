//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIFoundation/NSTextBlock.h>



@class NSTextTable;

@interface NSTextTableBlock : NSTextBlock <NSSecureCoding>
{
    NSTextTable *_table;
    long long _rowNum;
    long long _colNum;
    long long _rowSpan;
    long long _colSpan;
    void *_tableBlockPrimary;
    void *_tableBlockSecondary;
}

+ (_Bool)supportsSecureCoding;
+ (void)initialize;
- (void)drawBackgroundWithFrame:(struct CGRect)arg1 inView:(id)arg2 characterRange:(struct _NSRange)arg3 layoutManager:(id)arg4;
- (struct CGRect)boundsRectForContentRect:(struct CGRect)arg1 inRect:(struct CGRect)arg2 textContainer:(id)arg3 characterRange:(struct _NSRange)arg4;
- (struct CGRect)rectForLayoutAtPoint:(struct CGPoint)arg1 inRect:(struct CGRect)arg2 textContainer:(id)arg3 characterRange:(struct _NSRange)arg4;
- (void)_setColumnSpan:(long long)arg1;
- (void)_setRowSpan:(long long)arg1;
- (long long)columnSpan;
- (long long)startingColumn;
- (long long)rowSpan;
- (long long)startingRow;
- (id)table;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithTable:(id)arg1 startingRow:(long long)arg2 rowSpan:(long long)arg3 startingColumn:(long long)arg4 columnSpan:(long long)arg5;
- (id)init;

@end

