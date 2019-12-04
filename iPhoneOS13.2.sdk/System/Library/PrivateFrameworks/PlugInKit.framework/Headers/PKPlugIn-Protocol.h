//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, NSBundle, NSDictionary, NSObject, NSString, NSURL, NSUUID, NSUserDefaults, Protocol;
@protocol OS_dispatch_queue, PKPlugIn;

@protocol PKPlugIn 
@property(copy) id /* block */ notificationBlock;
@property(readonly) NSBundle *embeddedBundle;
@property(readonly) id embeddedPrincipal;
@property(readonly) id plugInPrincipal;
@property(readonly) _Bool active;
@property(readonly) _Bool spent;
@property(readonly) NSUUID *multipleInstanceUUID;
@property(readonly) id <PKPlugIn> supersededBy;
@property long long userElection;
@property(readonly) NSDictionary *localizedFileProviderActionNames;
@property(readonly) NSString *localizedContainingName;
@property(readonly) NSString *localizedShortName;
@property(readonly) NSString *localizedName;
@property(readonly) NSDictionary *entitlements;
@property(readonly) NSDictionary *attributes;
@property(readonly) NSDictionary *plugInDictionary;
@property(readonly) NSDictionary *bundleInfoDictionary;
@property(readonly) _Bool onSystemVolume;
@property(readonly) NSURL *containingUrl;
@property(readonly) NSURL *url;
@property(readonly) NSString *version;
@property(readonly) NSString *identifier;
- (void)localizedInfoDictionaryForKeys:(NSArray *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)setReplyQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (NSUserDefaults *)defaults;
- (id <PKPlugIn>)createInstanceWithUUID:(NSUUID *)arg1;
- (void)setHostPrincipal:(id)arg1 withProtocol:(Protocol *)arg2;
- (_Bool)endUsingWithError:(id *)arg1;
- (void)endUsing:(void (^)(NSError *))arg1;
- (_Bool)useBundle:(NSString *)arg1 error:(id *)arg2;
- (_Bool)beginUsingWithSubsystemOptions:(struct NSDictionary *)arg1 error:(id *)arg2;
- (void)beginUsingWithSubsystemOptions:(struct NSDictionary *)arg1 completion:(void (^)(NSError *))arg2;
- (_Bool)beginUsingWithError:(id *)arg1;
- (void)beginUsing:(void (^)(NSError *))arg1;
@end

