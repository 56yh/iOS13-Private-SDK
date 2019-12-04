//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DNDSSyncSettings, NPSDomainAccessor;
@protocol DNDSSyncSettingsProviderDelegate, OS_dispatch_queue;

@interface DNDSSyncSettingsProvider : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NPSDomainAccessor *_accessor;
    DNDSSyncSettings *_syncSettings;
    id <DNDSSyncSettingsProviderDelegate> _delegate;
}

@property(nonatomic) __weak id <DNDSSyncSettingsProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy) DNDSSyncSettings *syncSettings; // @synthesize syncSettings=_syncSettings;
- (void)_queue_updateSyncPreferences;
- (void)_updateSyncPreferences;
- (void)_endMonitoringForChanges;
- (void)_beginMonitoringForChanges;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

@end

