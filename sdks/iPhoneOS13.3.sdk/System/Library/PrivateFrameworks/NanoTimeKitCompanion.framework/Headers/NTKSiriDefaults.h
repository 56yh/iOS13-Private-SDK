//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NTKFaceCollectionObserver-Protocol.h>

@class NSSet, NTKFaceCollection;

@interface NTKSiriDefaults : NSObject <NTKFaceCollectionObserver>
{
    NTKFaceCollection *_faceCollection;
    BOOL _hasMigratedDisabledDataSources;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) BOOL hasMigratedDisabledDataSources; // @synthesize hasMigratedDisabledDataSources=_hasMigratedDisabledDataSources;
// - (void).cxx_destruct;
- (void)_fetchNewFaceCollection;
- (void)_thirdPartyDataSourcesDidChange;
- (void)_disabledDataSourcesDidChange;
- (void)_synchronizeDefaultsForKeys:(id)arg1;
- (id)_domainAccesor;
- (void)_activeDeviceDidChange:(id)arg1;
- (void)faceCollectionDidLoad:(id)arg1;
@property(retain, nonatomic) NSSet *disabledDataSources;
- (BOOL)hasMigratedDataSources;
@property(retain, nonatomic) NSSet *watchThirdPartyDataSources;
@property(retain, nonatomic) NSSet *phoneThirdPartyDataSources;
@property(nonatomic) BOOL watchHasMigratedAvailableDataSources;
@property(readonly, nonatomic) BOOL isUpNextFaceCurrentlyActive;
- (void)migrateIfNecessary;
- (id)init;

@end

