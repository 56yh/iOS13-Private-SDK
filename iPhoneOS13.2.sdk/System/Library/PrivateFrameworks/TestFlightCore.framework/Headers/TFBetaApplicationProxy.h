//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TFBetaApplicationProxy : NSObject
{
    NSString *_bundleIdentifier;
    NSString *_logKey;
}

@property(readonly, copy, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void)overwriteMetadataForInstalledVersion:(id)arg1 build:(id)arg2 withLocalizedDisplayNames:(id)arg3 localizedTestNotes:(id)arg4 primaryLocaleKey:(id)arg5 developerName:(id)arg6 expirationDate:(id)arg7 iconUrlTemplate:(id)arg8 testerEmail:(id)arg9;
- (void)updateLocalizedTestNotes:(id)arg1 forVersion:(id)arg2 build:(id)arg3;
- (void)setBetaAppLaunchScreenEnabled:(_Bool)arg1 forVersion:(id)arg2 build:(id)arg3;
- (void)setProactiveFeedbackEnabled:(_Bool)arg1 forVersion:(id)arg2 build:(id)arg3;
- (void)deviceWillInstallVersion:(id)arg1 build:(id)arg2 withLocalizedDisplayNames:(id)arg3 localizedTestNotes:(id)arg4 primaryLocaleKey:(id)arg5 developerName:(id)arg6 expirationDate:(id)arg7 iconUrlTemplate:(id)arg8 testerEmail:(id)arg9;
- (_Bool)isBetaAppLaunchScreenEnabledForInstalledVersion;
- (_Bool)isProactiveFeedbackEnabledForInstalledVersion;
@property(readonly, copy, nonatomic) NSString *preferredLocalizedDisplayNameForInstalledVersion;
- (id)initForAppWithIdentifier:(id)arg1;

@end
