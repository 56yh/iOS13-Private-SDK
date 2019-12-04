//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface ICURLBagLibraryDAAPConfiguration : NSObject
{
    NSDictionary *_bagDictionary;
}

@property(readonly, nonatomic) unsigned long long maxSyncRetryIntervalSeconds;
@property(readonly, nonatomic) long long autoUpdatePollingFrequencySeconds;
@property(readonly, nonatomic) long long updatePollingFrequencySeconds;
@property(readonly, nonatomic) long long subscribedContainerPollingFrequencySeconds;
@property(readonly, nonatomic) long long playDataBatchIntervalInMinutes;
@property(readonly, nonatomic, getter=isOnlineGeniusForMatchEnabled) _Bool onlineGeniusForMatchEnabled;
@property(readonly, nonatomic) NSString *baseURL;
@property(readonly, nonatomic) NSString *databaseName;
@property(readonly, nonatomic) long long databaseID;
- (id)description;
- (id)initWithBagLibraryDAAPDictionary:(id)arg1;

@end

