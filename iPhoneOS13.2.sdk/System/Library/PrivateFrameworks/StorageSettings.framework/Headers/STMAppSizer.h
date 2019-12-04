//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StorageSettings/STMSizeCacheDelegate-Protocol.h>

@class NSArray, NSDictionary, NSString, STMAppDynamicSizer, STMAppPurgeableSizer, STMAppStaticSizer;
@protocol STMAppSizerDelegate;

@interface STMAppSizer : NSObject <STMSizeCacheDelegate>
{
    struct os_unfair_lock_s _proxyLock;
    NSArray *_proxies;
    NSDictionary *_proxiesByDataPath;
    NSDictionary *_proxiesByBundlePath;
    NSDictionary *_appContainersByPath;
    NSDictionary *_dataContainersByPath;
    id <STMAppSizerDelegate> _delegate;
    STMAppStaticSizer *_staticSizer;
    STMAppDynamicSizer *_dynamicSizer;
    STMAppPurgeableSizer *_purgeableSizer;
}

+ (id)sharedSizer;
@property(retain) STMAppPurgeableSizer *purgeableSizer; // @synthesize purgeableSizer=_purgeableSizer;
@property(retain) STMAppDynamicSizer *dynamicSizer; // @synthesize dynamicSizer=_dynamicSizer;
@property(retain) STMAppStaticSizer *staticSizer; // @synthesize staticSizer=_staticSizer;
@property __weak id <STMAppSizerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)addProxy:(id)arg1;
- (id)calcAppPurgeableSize:(id)arg1;
- (id)calcAppDynamicSize:(id)arg1;
- (id)calcAppStaticSize:(id)arg1;
- (void)sizeCacheItemsUpdated:(id)arg1;
- (void)sizeCacheSizesUpdated:(id)arg1;
- (void)notifySizesUpdated;
- (long long)totalSizeOfItems;
- (id)purgeableSizeForApp:(id)arg1;
- (id)dynamicSizeForApp:(id)arg1;
- (id)staticSizeForApp:(id)arg1;
- (void)stopSizer;
- (void)startSizer;
- (void)dealloc;
@property(retain, nonatomic) NSArray *appProxies;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

