//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class FBSSceneIdentity, NSString, SBApplication;

@protocol SBApplicationDropSessionSceneProviding 
- (FBSSceneIdentity *)mostRecentSceneIdentityExcludingLiveScenesForApplication:(SBApplication *)arg1;
- (FBSSceneIdentity *)preferredSceneIdentityForApplication:(SBApplication *)arg1 targetContentIdentifier:(NSString *)arg2 preferNewScene:(_Bool)arg3;
- (FBSSceneIdentity *)newSceneIdentityForApplication:(SBApplication *)arg1;
- (_Bool)isApplicationActiveAndVisible:(SBApplication *)arg1;
@end

