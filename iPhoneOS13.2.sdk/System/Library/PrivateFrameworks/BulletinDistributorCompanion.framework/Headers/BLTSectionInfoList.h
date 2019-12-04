//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinDistributorCompanion/BLTSectionInfoListProviderDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol BLTSectionInfoListBBProvider, BLTSectionInfoListDelegate, BLTSectionInfoListOverrideProvider;

@interface BLTSectionInfoList : NSObject <BLTSectionInfoListProviderDelegate>
{
    NSMutableDictionary *_sectionInfoListItemsBySectionID;
    NSMutableSet *_sectionInfoSectionIDs;
    struct _opaque_pthread_mutex_t _lock;
    NSMutableArray *_loadingCompletionHandlers;
    _Bool _loading;
    _Bool _loaded;
    id <BLTSectionInfoListDelegate> _delegate;
    id <BLTSectionInfoListOverrideProvider> _overrideProvider;
    id <BLTSectionInfoListBBProvider> _sectionInfoProvider;
}

@property(readonly, nonatomic, getter=hasLoaded) _Bool loaded; // @synthesize loaded=_loaded;
@property(retain, nonatomic) id <BLTSectionInfoListBBProvider> sectionInfoProvider; // @synthesize sectionInfoProvider=_sectionInfoProvider;
@property(retain, nonatomic) id <BLTSectionInfoListOverrideProvider> overrideProvider; // @synthesize overrideProvider=_overrideProvider;
@property(nonatomic) __weak id <BLTSectionInfoListDelegate> delegate; // @synthesize delegate=_delegate;
- (void)mapSection:(id)arg1 map:(id)arg2;
- (void)reloadBBSection:(id)arg1 completion:(id /* block */)arg2;
- (void)_migrateFromExternalDeviceSwitchToOverrides:(id)arg1 sectionID:(id)arg2;
- (_Bool)hasCustomSettingsSetForSectionID:(id)arg1;
- (id)sectionOverrideOnlyForSectionID:(id)arg1;
- (id)sectionOverridesOnly;
- (id)settingsDescriptionForSectionIDs:(id)arg1;
- (id)overriddenSettings;
- (id)originalSettings;
- (id)overrides;
- (void)removedSectionWithSectionID:(id)arg1;
- (void)updateSectionInfoForSectionIDs:(id)arg1;
- (void)updateOverrides:(id)arg1 forSectionID:(id)arg2;
- (id)universalSectionIDForSectionID:(id)arg1;
- (id)effectiveSectionInfoForSectionID:(id)arg1;
- (id)bbSectionInfoForSectionID:(id)arg1;
- (id)overriddenSectionInfoForSectionID:(id)arg1;
- (id)_overriddenSectionInfoForSectionID:(id)arg1 originalSectionInfo:(id *)arg2 displayName:(id *)arg3;
- (id)_lock_sectionInfoFromListItem:(id)arg1 sectionID:(id)arg2 displayName:(id *)arg3;
- (id)_sectionInfoFromSectionID:(id)arg1 displayName:(id *)arg2;
- (void)reloadWithCompletion:(id /* block */)arg1;
- (void)_updateListItem:(id)arg1 overrides:(id)arg2 sectionID:(id)arg3;
- (id)sectionIDs;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

