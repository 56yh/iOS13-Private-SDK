//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/CMMapper.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CSVMapper : CMMapper
{
    NSMutableArray *mRows;
    NSString *mFileName;
    unsigned long long mColumnCount;
    struct CGSize mPageSize;
}

- (struct CGSize)pageSize;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)initWithRows:(id)arg1 fileName:(id)arg2 columnCount:(unsigned long long)arg3 archiver:(id)arg4;

@end

