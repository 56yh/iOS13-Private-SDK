//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSWPStorage.h>

__attribute__((visibility("hidden")))
@interface TSWPTableStorage : TSWPStorage
{
}

- (void)nonUndoableRebuildCellAttributes:(struct TSWPStorageTransaction *)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 string:(id)arg2 kind:(int)arg3 stylesheet:(id)arg4 paragraphStyle:(id)arg5 listStyle:(id)arg6 section:(id)arg7 columnStyle:(id)arg8 paragraphDirection:(int)arg9;

@end

