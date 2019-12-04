//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DMFApplicationPolicyMonitor;

@interface IMDScreenTimeEnablementController : NSObject
{
    _Bool _screenTimeEnabled;
    _Bool _screenTimeEnabledOveriddenByPreference;
    _Bool _screenTimeEnabledOveriddenValue;
    _Bool _screenTimeEnabledValueWasCached;
    _Bool _screenTimeEnabledCachedValue;
    _Bool _screenTimeEnabledSystemWideDMF;
    _Bool _screenTimeEnabledDMFValue;
    DMFApplicationPolicyMonitor *_applicationPolicyMonitor;
}

+ (id)sharedInstance;
@property(retain, nonatomic) DMFApplicationPolicyMonitor *applicationPolicyMonitor; // @synthesize applicationPolicyMonitor=_applicationPolicyMonitor;
@property(nonatomic) _Bool screenTimeEnabledDMFValue; // @synthesize screenTimeEnabledDMFValue=_screenTimeEnabledDMFValue;
@property(nonatomic) _Bool screenTimeEnabledSystemWideDMF; // @synthesize screenTimeEnabledSystemWideDMF=_screenTimeEnabledSystemWideDMF;
@property(nonatomic) _Bool screenTimeEnabledCachedValue; // @synthesize screenTimeEnabledCachedValue=_screenTimeEnabledCachedValue;
@property(nonatomic) _Bool screenTimeEnabledValueWasCached; // @synthesize screenTimeEnabledValueWasCached=_screenTimeEnabledValueWasCached;
@property(nonatomic) _Bool screenTimeEnabledOveriddenValue; // @synthesize screenTimeEnabledOveriddenValue=_screenTimeEnabledOveriddenValue;
@property(nonatomic) _Bool screenTimeEnabledOveriddenByPreference; // @synthesize screenTimeEnabledOveriddenByPreference=_screenTimeEnabledOveriddenByPreference;
@property(nonatomic) _Bool screenTimeEnabled; // @synthesize screenTimeEnabled=_screenTimeEnabled;
- (void)_updateEnablementPolicyFromDMF;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_readEnablementCachedValueFromPreferences;
- (void)_readEnablementOverrideFromPreferences;
- (void)_determineEnablement:(_Bool)arg1;
- (id)init;
- (void)dealloc;

@end

