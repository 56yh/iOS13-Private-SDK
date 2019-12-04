//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSKeyedArchiver, NSString;

@interface HMDRemoteKeyedArchiver : HMFObject
{
    NSKeyedArchiver *_archiver;
    NSString *_transportType;
}

@property(retain, nonatomic) NSString *transportType; // @synthesize transportType=_transportType;
@property(retain, nonatomic) NSKeyedArchiver *archiver; // @synthesize archiver=_archiver;
- (id)encodedData;
- (void)finishEncoding;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)__configure;
- (void)dealloc;
- (id)initForWritingWithRemoteDeviceIsOnSameAccount:(_Bool)arg1 remoteGateway:(_Bool)arg2 remoteUserIsAdministrator:(_Bool)arg3 user:(id)arg4 supportedFeatures:(id)arg5;
- (id)initForWritingWithRemoteDeviceIsOnSameAccount:(_Bool)arg1 remoteGateway:(_Bool)arg2 remoteUserIsAdministrator:(_Bool)arg3 user:(id)arg4 dataVersion:(long long)arg5 supportedFeatures:(id)arg6;

@end

