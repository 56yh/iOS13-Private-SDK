//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudDocsDaemon/PQLValuable-Protocol.h>

@interface PBCodable (BRCProtocolBufferAdditions) <PQLValuable>
+ (id)newFromSqliteValue:(struct sqlite3_value )arg1;
- (void)sqliteBind:(struct sqlite3_stmt )arg1 index:(int)arg2;
@end

