//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarKit/IAPNavigationDelegate-Protocol.h>

@class IAPNavigation, NSMapTable, NSString;

@interface CARRouteGuidanceiAPSession : NSObject <IAPNavigationDelegate>
{
    NSString *_currentNavigationOwnerIdentifier;
    IAPNavigation *_iapNavigation;
    NSMapTable *_navigationAccessories;
}

+ (id)localizedNameForIdentifier:(id)arg1;
@property(retain, nonatomic) NSMapTable *navigationAccessories; // @synthesize navigationAccessories=_navigationAccessories;
@property(retain, nonatomic) IAPNavigation *iapNavigation; // @synthesize iapNavigation=_iapNavigation;
@property(retain, nonatomic) NSString *currentNavigationOwnerIdentifier; // @synthesize currentNavigationOwnerIdentifier=_currentNavigationOwnerIdentifier;
// - (void).cxx_destruct;
- (void)IAPNavigationAccessoryDidBecomeUnavailable:(id)arg1;
- (void)IAPNavigationAccessoryDidBecomeAvailable:(id)arg1;
- (void)IAPNavigationAccessory:(id)arg1 didEnableNavigationUpdatesForComponent:(id)arg2;
- (void)IAPNavigationAccessory:(id)arg1 didDisableNavigationUpdatesForComponent:(id)arg2;
- (void)_updateAccessoryComponentsWithGuidanceInfo:(id)arg1;
- (void)updateNavigationGuidanceInfo;
- (void)_setupiAPNavigation;
- (id)init;

@end

