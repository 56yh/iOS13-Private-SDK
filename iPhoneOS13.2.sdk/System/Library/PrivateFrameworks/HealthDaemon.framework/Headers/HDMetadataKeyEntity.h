//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

@interface HDMetadataKeyEntity : HDHealthEntity
{
}

+ (id)_keyForPersistentID:(id)arg1 database:(id)arg2;
+ (id)_insertEntityWithKey:(id)arg1 database:(id)arg2 error:(id *)arg3;
+ (id)_entityForKey:(id)arg1 database:(id)arg2 error:(id *)arg3;
+ (id)insertEntityWithKey:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (id)entityForKey:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (long long)protectionClass;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)databaseTable;

@end
