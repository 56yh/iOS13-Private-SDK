//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, WFWhitelistSiteBuffer;

@interface WFUserSettings : NSObject
{
    NSDictionary *_userSettings;
    NSString *_userName;
    WFWhitelistSiteBuffer *_contentFilterOverriddenWhiteListedSitesBuffer;
    WFWhitelistSiteBuffer *_contentFilterOverriddenBlackListedSitesBuffer;
    WFWhitelistSiteBuffer *_whiteListedSitesBuffer;
}

+ (id)_sharedMetasiteDomainNamesDictionary;
+ (id)_sharedMetasiteExceptionsDomainNamesArray;
+ (id)_metasiteDomainNamesArray;
+ (id)_arrayByConvertingLinesInStringsAtPath:(id)arg1;
+ (id)metasitesExceptionPath;
+ (id)metasitesPath;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (_Bool)autoWhitelistContainsURL:(id)arg1;
- (_Bool)whiteListContainsURL:(id)arg1;
- (_Bool)contentFilterOverriddenBlackListContainsURL:(id)arg1;
- (_Bool)contentFilterOverriddenWhiteListContainsURL:(id)arg1;
- (_Bool)contentFilterOverriddenList:(id)arg1 containsURL:(id)arg2;
- (id)whiteListedSitesBuffer;
- (id)contentFilterOverriddenBlackListedSitesBuffer;
- (id)contentFilterOverriddenWhiteListedSitesBuffer;
- (id)_userSettingsForUser:(id)arg1;
- (void)setWhiteListEnabled:(_Bool)arg1;
- (_Bool)whiteListEnabled;
- (void)setContentFilterOverridesEnabled:(_Bool)arg1;
- (_Bool)contentFilterOverridesEnabled;
- (void)setContentFilterEnabled:(_Bool)arg1;
- (_Bool)contentFilterEnabled;
- (void)setRestrictWebEnabled:(_Bool)arg1;
- (_Bool)restrictWebEnabled;
- (_Bool)contentFilterListsAllowURL:(id)arg1;
- (_Bool)canEditAlwaysAllowHTTPS;
- (void)setAlwaysAllowHTTPS:(_Bool)arg1;
- (_Bool)alwaysAllowHTTPS;
@property(readonly, nonatomic) _Bool canEditOverridesAllowed;
@property(nonatomic) _Bool overridesAllowed;
@property(readonly, nonatomic) _Bool canEditWhiteListAllowedSites;
@property(retain, nonatomic) NSArray *whiteListAllowedSites;
@property(readonly, nonatomic) _Bool canEditContentFilterOverriddenBlackListedSites;
@property(retain, nonatomic) NSArray *contentFilterOverriddenBlackListedSites;
@property(readonly, nonatomic) _Bool canEditContentFilterOverriddenWhiteListedSites;
@property(retain, nonatomic) NSArray *contentFilterOverriddenWhiteListedSites;
- (id)contentFilterOverriddenSites;
@property(readonly, nonatomic) _Bool canEditRestrictionType;
@property(nonatomic) long long restrictionType;
- (void)dealloc;
- (id)initWithUserName:(id)arg1;
- (_Bool)_addManagedDefaults:(id)arg1;
- (_Bool)_setManagedDefaults:(id)arg1;
- (id)_managedDefaultsPath;

@end

