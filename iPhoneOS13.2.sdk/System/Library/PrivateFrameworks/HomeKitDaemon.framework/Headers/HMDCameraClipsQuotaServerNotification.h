//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSDictionary, NSString;

@interface HMDCameraClipsQuotaServerNotification : HMFObject
{
    NSString *_containerIdentifier;
    long long _reason;
    NSString *_requestID;
    NSString *_userDSID;
}

@property(readonly, copy) NSString *userDSID; // @synthesize userDSID=_userDSID;
@property(readonly, copy) NSString *requestID; // @synthesize requestID=_requestID;
@property(readonly) long long reason; // @synthesize reason=_reason;
@property(readonly, copy) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
@property(readonly, copy) NSDictionary *dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithContainerIdentifier:(id)arg1 reason:(long long)arg2 requestID:(id)arg3 userDSID:(id)arg4;

@end

