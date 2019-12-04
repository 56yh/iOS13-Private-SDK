//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Catalyst/CATSessionMessage.h>

@class NSDictionary, NSUUID;

@interface CATSessionMessageResume : CATSessionMessage
{
    NSUUID *_sessionUUID;
    NSDictionary *_clientUserInfo;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *clientUserInfo; // @synthesize clientUserInfo=_clientUserInfo;
@property(copy, nonatomic) NSUUID *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionUUID:(id)arg1;

@end

