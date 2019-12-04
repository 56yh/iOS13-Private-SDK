//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKRecordZoneID, NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDModifySubscriptionsURLRequest : CKDURLRequest
{
    CKRecordZoneID *_zoneID;
    id /* block */ _subscriptionModifiedBlock;
    NSArray *_subscriptionsToSave;
    NSArray *_subscriptionIDsToDelete;
    NSMutableDictionary *_subscriptionIDByRequestID;
}

@property(retain, nonatomic) NSMutableDictionary *subscriptionIDByRequestID; // @synthesize subscriptionIDByRequestID=_subscriptionIDByRequestID;
@property(retain, nonatomic) NSArray *subscriptionIDsToDelete; // @synthesize subscriptionIDsToDelete=_subscriptionIDsToDelete;
@property(retain, nonatomic) NSArray *subscriptionsToSave; // @synthesize subscriptionsToSave=_subscriptionsToSave;
@property(copy, nonatomic) id /* block */ subscriptionModifiedBlock; // @synthesize subscriptionModifiedBlock=_subscriptionModifiedBlock;
@property(copy, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (int)operationType;
- (id)initWithSubscriptionsToSave:(id)arg1 subscriptionIDsToDelete:(id)arg2;

@end

