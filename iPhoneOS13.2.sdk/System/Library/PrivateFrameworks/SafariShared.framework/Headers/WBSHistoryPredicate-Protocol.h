//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//




@class WBSSQLiteDatabase, WBSSQLiteStatement, WBSSQLiteStatementCache;

@protocol WBSHistoryPredicate <NSObject, NSSecureCoding>
- (WBSSQLiteStatement *)statementForDatabase:(WBSSQLiteDatabase *)arg1 cache:(WBSSQLiteStatementCache *)arg2 fetchOptions:(unsigned long long)arg3 error:(id *)arg4;
@end

