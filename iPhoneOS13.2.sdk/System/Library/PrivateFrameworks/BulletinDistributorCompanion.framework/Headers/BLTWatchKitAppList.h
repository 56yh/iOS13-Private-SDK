//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinDistributorCompanion/BLTDebugObserverWatchKitAppList-Protocol.h>

@class NSDictionary, NSMutableArray, NSString;
@protocol BLTWatchKitAppListDelegate;

@interface BLTWatchKitAppList : NSObject <BLTDebugObserverWatchKitAppList>
{
    NSDictionary *_appsByAppBundleID;
    struct _opaque_pthread_mutex_t _lock;
    NSMutableArray *_loadingCompletionHandlers;
    _Bool _loading;
    _Bool _loaded;
    id <BLTWatchKitAppListDelegate> _delegate;
}

@property(nonatomic) __weak id <BLTWatchKitAppListDelegate> delegate; // @synthesize delegate=_delegate;
@property(getter=isLoaded) _Bool loaded; // @synthesize loaded=_loaded;
- (void)_fetchWatchKitInfo;
- (void)fetchWatchKitInfoWithCompletion:(id /* block */)arg1;
- (void)_fetchWatchKitInfoWithForce:(_Bool)arg1 completion:(id /* block */)arg2;
- (id)watchKitAppDefinitionWithBundleID:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

