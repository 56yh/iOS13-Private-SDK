//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FindMyDevice/FMNSXPCConnectionConfigurable-Protocol.h>

@class NSString, NSXPCInterface;

@interface FMNSXPCConnectionConfiguration : NSObject <FMNSXPCConnectionConfigurable>
{
    _Bool _machService;
    NSString *_serviceName;
    NSXPCInterface *_remoteInterface;
    NSXPCInterface *_exportedInterface;
    unsigned long long _options;
}

+ (id)eraseDeviceServiceConfiguration;
+ (id)helperConfiguration;
+ (id)fmipConfiguration;
+ (id)btDiscoveryConfiguration;
+ (id)userNotificationConfiguration;
+ (id)emergencyCallInfoPublisherConfiguration;
+ (id)identityConfiguration;
@property(nonatomic) _Bool machService; // @synthesize machService=_machService;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(retain, nonatomic) NSXPCInterface *exportedInterface; // @synthesize exportedInterface=_exportedInterface;
@property(retain, nonatomic) NSXPCInterface *remoteInterface; // @synthesize remoteInterface=_remoteInterface;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

