//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDEntityEncoder.h>

@interface _HDCDASampleEntityEncoder : HDEntityEncoder
{
}

- (_Bool)applyPropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(struct HDSQLiteRow *)arg3 error:(id *)arg4;
- (id)createBareObject;
- (_Bool)generateCodableRepresentationsForPersistentID:(long long)arg1 row:(struct HDSQLiteRow *)arg2 maxBytesPerRepresentation:(long long)arg3 error:(id *)arg4 handler:(id /* block */)arg5;
- (id)codableRepresentationForPersistentID:(long long)arg1 row:(struct HDSQLiteRow *)arg2 error:(id *)arg3;
- (id)orderedProperties;

@end

