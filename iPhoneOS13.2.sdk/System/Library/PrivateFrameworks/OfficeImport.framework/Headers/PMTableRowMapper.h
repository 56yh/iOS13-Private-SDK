//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/CMMapper.h>

@class OADTable, OADTableRow;

__attribute__((visibility("hidden")))
@interface PMTableRowMapper : CMMapper
{
    OADTable *mTable;
    OADTableRow *mRow;
    unsigned long long mRowIndex;
}

- (void)mapAt:(id)arg1 withState:(id)arg2;
- (unsigned long long)cellCount;
- (float)height;
- (id)initWithOadTable:(id)arg1 rowIndex:(unsigned long long)arg2 parent:(id)arg3;

@end

