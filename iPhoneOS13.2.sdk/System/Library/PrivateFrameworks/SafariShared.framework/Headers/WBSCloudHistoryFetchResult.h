//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface WBSCloudHistoryFetchResult : NSObject
{
    NSMutableArray *_mutableCloudHistoryVisits;
    NSMutableArray *_mutableHistoryTombstones;
    NSMutableDictionary *_mutableClientVersions;
    NSData *_serverChangeTokenData;
}

@property(readonly, nonatomic) NSData *serverChangeTokenData; // @synthesize serverChangeTokenData=_serverChangeTokenData;
- (id)description;
- (void)_setServerChangeTokenData:(id)arg1;
- (void)_addHistoryTombstone:(id)arg1;
@property(readonly, nonatomic) NSArray *historyTombstones;
- (void)_updateClientVersion:(unsigned long long)arg1 seenAt:(id)arg2;
@property(readonly, nonatomic) NSDictionary *clientVersions;
- (void)_addCloudHistoryVisit:(id)arg1;
@property(readonly, nonatomic) NSArray *cloudHistoryVisits;
- (id)init;

@end

