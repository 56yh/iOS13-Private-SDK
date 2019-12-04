//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSString;
@protocol OS_dispatch_queue, OS_os_log;

@interface ASDLogConfig : NSObject <NSCopying, NSMutableCopying>
{
    NSString *_category;
    unsigned long long _environment;
    NSString *_subsystem;
    NSObject<OS_os_log> *_backingOSLogObject;
    NSObject<OS_dispatch_queue> *_propertyAccessQueue;
}

+ (_Bool)_deviceIsRunningSeedBuild;
+ (_Bool)_deviceIsRunningInternalOrSeedBuild;
+ (_Bool)_deviceIsRunningInternalBuild;
+ (_Bool)_debugLogsEnabled:(id)arg1;
+ (id)sharedFrameworkConfig;
+ (id)sharedDaemonConfigOversize;
+ (id)sharedDaemonConfig;
+ (id)sharedConfig;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *propertyAccessQueue; // @synthesize propertyAccessQueue=_propertyAccessQueue;
@property(retain, nonatomic) NSObject<OS_os_log> *backingOSLogObject; // @synthesize backingOSLogObject=_backingOSLogObject;
@property(copy, nonatomic) NSString *subsystem; // @synthesize subsystem=_subsystem;
@property(nonatomic) unsigned long long environment; // @synthesize environment=_environment;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) _Bool shouldLog;
@property(readonly, nonatomic) NSObject<OS_os_log> *OSLogObject;
@property(readonly, nonatomic) _Bool debugLogsEnabled;
- (id)init;

@end

