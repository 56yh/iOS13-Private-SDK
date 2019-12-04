//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVContentKeyRequest, NSArray, NSData, NSDate, NSDictionary, NSError, NSNumber, NSString, NSURL, TVPContentKeySession;

@interface TVPContentKeyRequest : NSObject
{
    _Bool _isRenewal;
    _Bool _isLowValueKey;
    _Bool _allowManualRenewal;
    _Bool _wantsOfflineKeysIfPossible;
    NSURL *_keyIdentifier;
    unsigned long long _requestID;
    NSString *_eventReportingID;
    long long _type;
    NSDate *_requestStartDate;
    NSDate *_requestEndDate;
    NSData *_keyRequestData;
    NSDictionary *_additionalRequestParams;
    NSDate *_serverRequestStartDate;
    NSArray *_keyFormatVersions;
    NSData *_offlineKeyData;
    NSData *_secureInvalidationNonceData;
    id _context;
    NSData *_keyResponseData;
    NSDate *_renewalDate;
    NSNumber *_renewalInterval;
    NSDate *_expirationDate;
    NSString *_contentID;
    NSNumber *_playbackDuration;
    NSDictionary *_additionalRequestParamsFromResponse;
    NSError *_error;
    AVContentKeyRequest *_avContentKeyRequest;
    TVPContentKeySession *_contentKeySession;
}

+ (id)secureInvalidationRequestForIdentifier:(id)arg1 offlineKeyData:(id)arg2 additionalRequestParams:(id)arg3 contentID:(id)arg4;
+ (void)initialize;
@property(nonatomic) _Bool wantsOfflineKeysIfPossible; // @synthesize wantsOfflineKeysIfPossible=_wantsOfflineKeysIfPossible;
@property(nonatomic) __weak TVPContentKeySession *contentKeySession; // @synthesize contentKeySession=_contentKeySession;
@property(readonly, nonatomic) AVContentKeyRequest *avContentKeyRequest; // @synthesize avContentKeyRequest=_avContentKeyRequest;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSDictionary *additionalRequestParamsFromResponse; // @synthesize additionalRequestParamsFromResponse=_additionalRequestParamsFromResponse;
@property(nonatomic) _Bool allowManualRenewal; // @synthesize allowManualRenewal=_allowManualRenewal;
@property(retain, nonatomic) NSNumber *playbackDuration; // @synthesize playbackDuration=_playbackDuration;
@property(nonatomic) _Bool isLowValueKey; // @synthesize isLowValueKey=_isLowValueKey;
@property(retain, nonatomic) NSString *contentID; // @synthesize contentID=_contentID;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) NSNumber *renewalInterval; // @synthesize renewalInterval=_renewalInterval;
@property(retain, nonatomic) NSDate *renewalDate; // @synthesize renewalDate=_renewalDate;
@property(retain, nonatomic) NSData *keyResponseData; // @synthesize keyResponseData=_keyResponseData;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(retain, nonatomic) NSData *secureInvalidationNonceData; // @synthesize secureInvalidationNonceData=_secureInvalidationNonceData;
@property(retain, nonatomic) NSData *offlineKeyData; // @synthesize offlineKeyData=_offlineKeyData;
@property(retain, nonatomic) NSArray *keyFormatVersions; // @synthesize keyFormatVersions=_keyFormatVersions;
@property(retain, nonatomic) NSDate *serverRequestStartDate; // @synthesize serverRequestStartDate=_serverRequestStartDate;
@property(retain, nonatomic) NSDictionary *additionalRequestParams; // @synthesize additionalRequestParams=_additionalRequestParams;
@property(retain, nonatomic) NSData *keyRequestData; // @synthesize keyRequestData=_keyRequestData;
@property(retain, nonatomic) NSDate *requestEndDate; // @synthesize requestEndDate=_requestEndDate;
@property(retain, nonatomic) NSDate *requestStartDate; // @synthesize requestStartDate=_requestStartDate;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) _Bool isRenewal; // @synthesize isRenewal=_isRenewal;
@property(readonly, nonatomic) NSString *eventReportingID; // @synthesize eventReportingID=_eventReportingID;
@property(readonly, nonatomic) unsigned long long requestID; // @synthesize requestID=_requestID;
@property(retain, nonatomic) NSURL *keyIdentifier; // @synthesize keyIdentifier=_keyIdentifier;
- (void)finishByRequestingOfflineKeysIfPossible;
- (void)finish;
- (id)offlineKeyDataFromServerKeyData:(id)arg1 error:(id *)arg2;
- (void)makeKeyRequestDataForCertificateData:(id)arg1 assetIDData:(id)arg2 completion:(id /* block */)arg3;
- (id)description;
@property(readonly, nonatomic) _Bool isCancelled;
- (id)initWithAVContentKeyRequest:(id)arg1;

@end

