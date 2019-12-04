//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKit/CKDatabaseOperationInfo.h>

@class CKDPCSCache;
@protocol CKSQLiteItem;

__attribute__((visibility("hidden")))
@interface CKDPCSCacheFetchOperationInfo : CKDatabaseOperationInfo
{
    id <CKSQLiteItem> _itemID;
    CKDPCSCache *_cache;
    unsigned long long _options;
}

@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(retain, nonatomic) CKDPCSCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) id <CKSQLiteItem> itemID; // @synthesize itemID=_itemID;

@end

