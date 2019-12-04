//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class APSOutgoingMessageCheckpointTrace, NSArray, NSData, NSDate, NSDictionary, NSMutableArray, NSNumber, NSString, NSURL;
@protocol IDSBaseMessageSigningSession;

@interface IDSBaseMessage : NSObject <NSCopying>
{
    NSDictionary *_cachedBody;
    NSString *_topic;
    NSDictionary *_userInfo;
    NSData *_serviceData;
    NSDictionary *_clientInfo;
    NSDate *_creationDate;
    NSDictionary *_responseAlert;
    NSString *_dsAuthID;
    NSString *_dataUsageBundleIdentifier;
    id _context;
    int _timeoutRetries;
    _Bool _usingOutgoingPush;
    _Bool _wantsResponse;
    _Bool _wantsMultipleResponses;
    _Bool _wantsIntegerUniqueIDs;
    _Bool _wantsBinaryPush;
    _Bool _forceCellular;
    _Bool _highPriority;
    _Bool _hasReceivedPushAck;
    _Bool _hasAttemptedAPSDelivery;
    _Bool _httpDoNotDecodeData;
    _Bool _ignoreMaxRetryCount;
    id /* block */ _completionBlock;
    id /* block */ _deliveryAcknowledgementBlock;
    double _timeout;
    double _timeSent;
    unsigned long long _uniqueID;
    NSNumber *_retryCount;
    long long _importanceLevel;
    long long _deliveryMechanism;
    id <IDSBaseMessageSigningSession> _signingSession;
    NSString *_service;
    NSString *_subService;
    NSString *_underlyingService;
    NSURL *_URLOverride;
    unsigned long long _sentByteCount;
    unsigned long long _receivedByteCount;
    NSNumber *_pushAckTimestamp;
    _Bool _isMultipleAuthCertCapable;
    APSOutgoingMessageCheckpointTrace *_apsdCheckpointTrace;
    NSDictionary *_responseAlertInfo;
    NSNumber *_originalTimestamp;
    NSDate *_requestStart;
    NSDate *_requestEnd;
    NSDate *_responseReceived;
}

@property(retain, nonatomic) NSDate *responseReceived; // @synthesize responseReceived=_responseReceived;
@property(retain, nonatomic) NSDate *requestEnd; // @synthesize requestEnd=_requestEnd;
@property(retain, nonatomic) NSDate *requestStart; // @synthesize requestStart=_requestStart;
@property(nonatomic) unsigned long long receivedByteCount; // @synthesize receivedByteCount=_receivedByteCount;
@property(nonatomic) unsigned long long sentByteCount; // @synthesize sentByteCount=_sentByteCount;
@property(retain) id context; // @synthesize context=_context;
@property(retain) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(copy) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSNumber *originalTimestamp; // @synthesize originalTimestamp=_originalTimestamp;
@property(copy) NSURL *URLOverride; // @synthesize URLOverride=_URLOverride;
@property(copy, nonatomic) NSNumber *retryCount; // @synthesize retryCount=_retryCount;
@property(copy) NSDictionary *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(copy) NSData *serviceData; // @synthesize serviceData=_serviceData;
@property(copy, nonatomic, setter=setDSAuthID:) NSString *dsAuthID; // @synthesize dsAuthID=_dsAuthID;
@property(retain, nonatomic) id <IDSBaseMessageSigningSession> signingSession; // @synthesize signingSession=_signingSession;
@property(nonatomic) _Bool isMultipleAuthCertCapable; // @synthesize isMultipleAuthCertCapable=_isMultipleAuthCertCapable;
@property _Bool ignoreMaxRetryCount; // @synthesize ignoreMaxRetryCount=_ignoreMaxRetryCount;
@property(copy) NSDictionary *responseAlertInfo; // @synthesize responseAlertInfo=_responseAlertInfo;
@property int timeoutRetries; // @synthesize timeoutRetries=_timeoutRetries;
@property _Bool httpDoNotDecodeData; // @synthesize httpDoNotDecodeData=_httpDoNotDecodeData;
@property _Bool wantsMultipleResponses; // @synthesize wantsMultipleResponses=_wantsMultipleResponses;
@property _Bool wantsResponse; // @synthesize wantsResponse=_wantsResponse;
@property _Bool wantsIntegerUniqueIDs; // @synthesize wantsIntegerUniqueIDs=_wantsIntegerUniqueIDs;
@property _Bool wantsBinaryPush; // @synthesize wantsBinaryPush=_wantsBinaryPush;
@property _Bool highPriority; // @synthesize highPriority=_highPriority;
@property _Bool forceCellular; // @synthesize forceCellular=_forceCellular;
@property(copy) NSString *underlyingService; // @synthesize underlyingService=_underlyingService;
@property(copy) NSString *subService; // @synthesize subService=_subService;
@property(copy) NSString *service; // @synthesize service=_service;
@property long long deliveryMechanism; // @synthesize deliveryMechanism=_deliveryMechanism;
@property long long importanceLevel; // @synthesize importanceLevel=_importanceLevel;
@property(retain) NSNumber *pushAckTimestamp; // @synthesize pushAckTimestamp=_pushAckTimestamp;
@property(retain) APSOutgoingMessageCheckpointTrace *apsdCheckpointTrace; // @synthesize apsdCheckpointTrace=_apsdCheckpointTrace;
@property _Bool hasAttemptedAPSDelivery; // @synthesize hasAttemptedAPSDelivery=_hasAttemptedAPSDelivery;
@property _Bool hasReceivedPushAck; // @synthesize hasReceivedPushAck=_hasReceivedPushAck;
@property(retain) NSString *topic; // @synthesize topic=_topic;
@property(copy) id /* block */ deliveryAcknowledgementBlock; // @synthesize deliveryAcknowledgementBlock=_deliveryAcknowledgementBlock;
@property(copy) id /* block */ completionBlock; // @synthesize completionBlock=_completionBlock;
@property double timeSent; // @synthesize timeSent=_timeSent;
@property double timeout; // @synthesize timeout=_timeout;
@property unsigned long long uniqueID; // @synthesize uniqueID=_uniqueID;
@property(retain, setter=_setCachedBody:) NSDictionary *_cachedBody; // @synthesize _cachedBody;
@property(setter=_setUsingOutgoingPush:) _Bool _usingOutgoingPush; // @synthesize _usingOutgoingPush;
- (void)logFailureInfo;
- (void)handleResponseDictionary:(id)arg1;
- (void)handleResponseStatus:(unsigned long long)arg1;
- (void)handleResponseBody:(id)arg1;
- (void)handleResponseHeaders:(id)arg1;
@property(readonly) NSDictionary *messageBody;
@property(readonly) NSDictionary *additionalInternalHeaders;
@property(readonly) NSDictionary *nonStandardMessageHeadersForOutgoingPush;
@property(readonly) NSDictionary *additionalMessageHeadersForOutgoingPush;
@property(readonly) NSDictionary *additionalQueryStringParameters;
@property(readonly) NSDictionary *additionalMessageHeaders;
@property(readonly) NSString *retryCountKey;
@property(readonly) NSString *bagKey;
@property(readonly) long long responseCommand;
@property(readonly) long long command;
@property(readonly) NSString *userAgentHeaderString;
@property(readonly) _Bool wantsUserAgentInHeaders;
@property(readonly) _Bool requiresPushTokenKeys;
@property(readonly) NSArray *requiredKeys;
- (_Bool)hasRequiredKeys:(id *)arg1;
@property(copy, nonatomic) NSNumber *serverTimestampReceivedDate;
@property(copy, nonatomic) NSNumber *serverTimestamp;
@property(readonly, copy, nonatomic) NSData *IDCertificate;
@property(readonly, nonatomic) struct __SecKey *identityPublicKey;
@property(readonly, nonatomic) struct __SecKey *identityPrivateKey;
@property(copy, nonatomic) NSMutableArray *userIDArray;
@property(copy, nonatomic) NSMutableArray *privateKeyArray;
@property(copy, nonatomic) NSMutableArray *publicKeyArray;
@property(copy, nonatomic) NSMutableArray *certDataArray;
@property(copy, nonatomic) NSData *pushToken;
@property(copy, nonatomic) NSData *pushCertificate;
@property(nonatomic) struct __SecKey *pushPublicKey;
@property(nonatomic) struct __SecKey *pushPrivateKey;
- (void)_clearCache;
- (void)_cacheBody;
@property(readonly) NSDictionary *messageBodyUsingCache;
@property(readonly) _Bool isValidMessage;
@property(readonly) _Bool payloadCanBeLogged;
- (_Bool)isIDSMessage;
- (id)messageBodyDataOverride;
@property(readonly) NSString *dataUsageBundleIdentifier;
@property(readonly) double customRetryInterval;
@property(readonly) _Bool wantsCustomRetryInterval;
@property(readonly) _Bool wantsIDSSignatures;
@property(readonly) _Bool wantsBodySignature;
@property(readonly) _Bool isWebTunnelMessage;
@property(readonly) _Bool wantsSignature;
@property(readonly) _Bool ignoresNetworkConnectivity;
@property(readonly) _Bool allowsServerProvidedLenientAnisetteTimeout;
@property(readonly) double anisetteHeadersTimeout;
@property(readonly) _Bool wantsAPSRetries;
@property(readonly) _Bool wantsManagedRetries;
@property(readonly) _Bool wantsExtraTimeoutRetry;
@property(readonly) int maxTimeoutRetries;
@property(readonly) _Bool wantsCFNetworkTimeout;
@property(readonly) _Bool wantsBagKey;
@property(readonly) _Bool allowDualDelivery;
@property(readonly) _Bool wantsHTTPGet;
@property(readonly) _Bool wantsHTTPHeaders;
@property(readonly) _Bool wantsJSONBody;
@property(readonly) _Bool wantsCompressedBody;
@property(readonly) _Bool wantsIDSServer;
@property(readonly) NSString *uniqueIDString;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

