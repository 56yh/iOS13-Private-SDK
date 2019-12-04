//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/_HKXPCExportable-Protocol.h>

@class HDHealthStoreClient, HKTaskConfiguration, NSArray, NSString, NSUUID;
@protocol HDTaskServerDelegate;

@protocol HDTaskServer <_HKXPCExportable>
+ (NSArray *)requiredEntitlements;
+ (NSString *)taskIdentifier;
- (NSUUID *)taskUUID;
- (id)initWithUUID:(NSUUID *)arg1 configuration:(HKTaskConfiguration *)arg2 client:(HDHealthStoreClient *)arg3 delegate:(id <HDTaskServerDelegate>)arg4;

@optional
+ (_Bool)validateConfiguration:(HKTaskConfiguration *)arg1 client:(HDHealthStoreClient *)arg2 error:(id *)arg3;
+ (id)createTaskServerWithUUID:(NSUUID *)arg1 configuration:(HKTaskConfiguration *)arg2 client:(HDHealthStoreClient *)arg3 delegate:(id <HDTaskServerDelegate>)arg4 error:(id *)arg5;
+ (Class)configurationClass;
@end

