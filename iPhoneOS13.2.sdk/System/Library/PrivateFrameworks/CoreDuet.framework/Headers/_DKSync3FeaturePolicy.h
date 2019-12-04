//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/_DKSync3PolicyCommonMethods-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface _DKSync3FeaturePolicy : NSObject <_DKSync3PolicyCommonMethods>
{
    _Bool _isSyncDisabled;
    _Bool _onlyMultiDevice;
    _Bool _onlySingleDevice;
    _Bool _requiresCharging;
    _Bool _pushTriggersSync;
    _Bool _additionsCountTowardTriggeredSyncBucket;
    _Bool _deletionsCountTowardTriggeredSyncBucket;
    _Bool _additionTriggersImmediateSync;
    _Bool _deletionTriggersImmediateSync;
    NSDictionary *_properties;
    NSString *_name;
    NSString *_feature;
    NSArray *_streamNames;
    NSArray *_sources;
    NSArray *_destinations;
    NSString *_transport;
    unsigned long long _periodicSyncCadenceInMinutes;
    unsigned long long _oldestEventToSyncInDays;
    NSArray *_requiresCompanions;
}

+ (id)policyForFeature:(id)arg1;
@property(nonatomic) _Bool deletionTriggersImmediateSync; // @synthesize deletionTriggersImmediateSync=_deletionTriggersImmediateSync;
@property(nonatomic) _Bool additionTriggersImmediateSync; // @synthesize additionTriggersImmediateSync=_additionTriggersImmediateSync;
@property(nonatomic) _Bool deletionsCountTowardTriggeredSyncBucket; // @synthesize deletionsCountTowardTriggeredSyncBucket=_deletionsCountTowardTriggeredSyncBucket;
@property(nonatomic) _Bool additionsCountTowardTriggeredSyncBucket; // @synthesize additionsCountTowardTriggeredSyncBucket=_additionsCountTowardTriggeredSyncBucket;
@property(nonatomic) _Bool pushTriggersSync; // @synthesize pushTriggersSync=_pushTriggersSync;
@property(retain, nonatomic) NSArray *requiresCompanions; // @synthesize requiresCompanions=_requiresCompanions;
@property(nonatomic) _Bool requiresCharging; // @synthesize requiresCharging=_requiresCharging;
@property(nonatomic) _Bool onlySingleDevice; // @synthesize onlySingleDevice=_onlySingleDevice;
@property(nonatomic) _Bool onlyMultiDevice; // @synthesize onlyMultiDevice=_onlyMultiDevice;
@property(nonatomic) unsigned long long oldestEventToSyncInDays; // @synthesize oldestEventToSyncInDays=_oldestEventToSyncInDays;
@property(nonatomic) unsigned long long periodicSyncCadenceInMinutes; // @synthesize periodicSyncCadenceInMinutes=_periodicSyncCadenceInMinutes;
@property(retain, nonatomic) NSString *transport; // @synthesize transport=_transport;
@property(retain, nonatomic) NSArray *destinations; // @synthesize destinations=_destinations;
@property(retain, nonatomic) NSArray *sources; // @synthesize sources=_sources;
@property(retain, nonatomic) NSArray *streamNames; // @synthesize streamNames=_streamNames;
@property(retain, nonatomic) NSString *feature; // @synthesize feature=_feature;
@property(nonatomic) _Bool isSyncDisabled; // @synthesize isSyncDisabled=_isSyncDisabled;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
- (id)description;
- (id)initWithName:(id)arg1 properties:(id)arg2;
- (id)init;

@end

