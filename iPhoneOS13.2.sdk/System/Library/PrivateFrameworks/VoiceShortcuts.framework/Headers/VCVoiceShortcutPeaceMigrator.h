//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WFDatabase;

@interface VCVoiceShortcutPeaceMigrator : NSObject
{
    WFDatabase *_database;
}

+ (void)migrateFromCloudKitIntoDatabaseIfNecessary:(id)arg1;
+ (void)fetchMigrationFlagWithCompletion:(id /* block */)arg1;
@property(readonly, nonatomic) WFDatabase *database; // @synthesize database=_database;
- (_Bool)saveRecord:(id)arg1 error:(id *)arg2;
- (_Bool)migrateFromManagedObjectContext:(id)arg1 error:(id *)arg2;
- (id)initWithDatabase:(id)arg1;

@end

