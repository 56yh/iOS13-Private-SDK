//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class AWDHomeKitCameraIDSSessionSetup, AWDHomeKitCameraStreamConfigure, AWDHomeKitCameraStreamIDSConnSetup, AWDHomeKitCameraStreamMessaging, AWDHomeKitVendorInformation, NSMutableArray, NSString;

@interface AWDHomeKitCameraStream : PBCodable <NSCopying>
{
    unsigned long long _duration;
    unsigned long long _startupDelay;
    unsigned long long _timestamp;
    int _certified;
    AWDHomeKitCameraStreamMessaging *_controllerMessaging;
    unsigned int _errorCode;
    AWDHomeKitCameraIDSSessionSetup *_idsSessionSetup;
    AWDHomeKitCameraStreamConfigure *_initialConfiguration;
    AWDHomeKitCameraStreamIDSConnSetup *_phoneIDSConnectionSetup;
    unsigned int _receivedFirstFrame;
    NSMutableArray *_reconfigurations;
    AWDHomeKitCameraStreamMessaging *_residentMessaging;
    NSMutableArray *_resolutionCounts;
    int _resolutionOnClose;
    NSString *_sessionID;
    unsigned int _underlyingErrorCode;
    NSString *_underlyingErrorDomain;
    AWDHomeKitVendorInformation *_vendorDetails;
    AWDHomeKitCameraStreamIDSConnSetup *_watchIDSConnectionSetup;
    AWDHomeKitCameraStreamMessaging *_watchMessaging;
    _Bool _isLocal;
    _Bool _isStreamStarted;
    struct {
        unsigned int duration:1;
        unsigned int startupDelay:1;
        unsigned int timestamp:1;
        unsigned int certified:1;
        unsigned int errorCode:1;
        unsigned int receivedFirstFrame:1;
        unsigned int resolutionOnClose:1;
        unsigned int underlyingErrorCode:1;
        unsigned int isLocal:1;
        unsigned int isStreamStarted:1;
    } _has;
}

+ (Class)resolutionCountType;
+ (Class)reconfigurationsType;
@property(retain, nonatomic) NSMutableArray *resolutionCounts; // @synthesize resolutionCounts=_resolutionCounts;
@property(nonatomic) _Bool isStreamStarted; // @synthesize isStreamStarted=_isStreamStarted;
@property(nonatomic) unsigned long long startupDelay; // @synthesize startupDelay=_startupDelay;
@property(nonatomic) unsigned int underlyingErrorCode; // @synthesize underlyingErrorCode=_underlyingErrorCode;
@property(retain, nonatomic) NSString *underlyingErrorDomain; // @synthesize underlyingErrorDomain=_underlyingErrorDomain;
@property(nonatomic) unsigned int receivedFirstFrame; // @synthesize receivedFirstFrame=_receivedFirstFrame;
@property(retain, nonatomic) AWDHomeKitCameraStreamMessaging *residentMessaging; // @synthesize residentMessaging=_residentMessaging;
@property(retain, nonatomic) AWDHomeKitCameraStreamMessaging *controllerMessaging; // @synthesize controllerMessaging=_controllerMessaging;
@property(retain, nonatomic) AWDHomeKitCameraStreamMessaging *watchMessaging; // @synthesize watchMessaging=_watchMessaging;
@property(retain, nonatomic) AWDHomeKitCameraIDSSessionSetup *idsSessionSetup; // @synthesize idsSessionSetup=_idsSessionSetup;
@property(retain, nonatomic) AWDHomeKitCameraStreamIDSConnSetup *phoneIDSConnectionSetup; // @synthesize phoneIDSConnectionSetup=_phoneIDSConnectionSetup;
@property(retain, nonatomic) AWDHomeKitCameraStreamIDSConnSetup *watchIDSConnectionSetup; // @synthesize watchIDSConnectionSetup=_watchIDSConnectionSetup;
@property(retain, nonatomic) NSMutableArray *reconfigurations; // @synthesize reconfigurations=_reconfigurations;
@property(retain, nonatomic) AWDHomeKitCameraStreamConfigure *initialConfiguration; // @synthesize initialConfiguration=_initialConfiguration;
@property(nonatomic) _Bool isLocal; // @synthesize isLocal=_isLocal;
@property(nonatomic) unsigned int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) unsigned long long duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) AWDHomeKitVendorInformation *vendorDetails; // @synthesize vendorDetails=_vendorDetails;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)resolutionCountAtIndex:(unsigned long long)arg1;
- (unsigned long long)resolutionCountsCount;
- (void)addResolutionCount:(id)arg1;
- (void)clearResolutionCounts;
- (int)StringAsResolutionOnClose:(id)arg1;
- (id)resolutionOnCloseAsString:(int)arg1;
@property(nonatomic) _Bool hasResolutionOnClose;
@property(nonatomic) int resolutionOnClose; // @synthesize resolutionOnClose=_resolutionOnClose;
@property(nonatomic) _Bool hasIsStreamStarted;
@property(nonatomic) _Bool hasStartupDelay;
@property(nonatomic) _Bool hasUnderlyingErrorCode;
@property(readonly, nonatomic) _Bool hasUnderlyingErrorDomain;
@property(nonatomic) _Bool hasReceivedFirstFrame;
@property(readonly, nonatomic) _Bool hasResidentMessaging;
@property(readonly, nonatomic) _Bool hasControllerMessaging;
@property(readonly, nonatomic) _Bool hasWatchMessaging;
@property(readonly, nonatomic) _Bool hasIdsSessionSetup;
@property(readonly, nonatomic) _Bool hasPhoneIDSConnectionSetup;
@property(readonly, nonatomic) _Bool hasWatchIDSConnectionSetup;
- (id)reconfigurationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)reconfigurationsCount;
- (void)addReconfigurations:(id)arg1;
- (void)clearReconfigurations;
@property(readonly, nonatomic) _Bool hasInitialConfiguration;
@property(nonatomic) _Bool hasIsLocal;
@property(nonatomic) _Bool hasErrorCode;
@property(nonatomic) _Bool hasDuration;
@property(readonly, nonatomic) _Bool hasSessionID;
@property(nonatomic) _Bool hasTimestamp;
- (int)StringAsCertified:(id)arg1;
- (id)certifiedAsString:(int)arg1;
@property(nonatomic) _Bool hasCertified;
@property(nonatomic) int certified; // @synthesize certified=_certified;
@property(readonly, nonatomic) _Bool hasVendorDetails;

@end

