//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface CKDFetchZoneChangesRequestOperationResult : NSObject
{
    _Bool _hasPendingArchivedRecords;
    NSData *_resultServerChangeTokenData;
    NSData *_resultClientChangeTokenData;
    long long _status;
}

@property(nonatomic) _Bool hasPendingArchivedRecords; // @synthesize hasPendingArchivedRecords=_hasPendingArchivedRecords;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSData *resultClientChangeTokenData; // @synthesize resultClientChangeTokenData=_resultClientChangeTokenData;
@property(retain, nonatomic) NSData *resultServerChangeTokenData; // @synthesize resultServerChangeTokenData=_resultServerChangeTokenData;
- (id)init;

@end

