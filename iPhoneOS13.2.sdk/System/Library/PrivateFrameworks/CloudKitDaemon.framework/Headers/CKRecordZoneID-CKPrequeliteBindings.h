//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKit/CKRecordZoneID.h>

#import <CloudKitDaemon/PQLValuable-Protocol.h>

@class NSString;

@interface CKRecordZoneID (CKPrequeliteBindings) <PQLValuable>
+ (id)newFromSqliteStatement:(struct sqlite3_stmt *)arg1 atIndex:(int)arg2;
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;
@end

