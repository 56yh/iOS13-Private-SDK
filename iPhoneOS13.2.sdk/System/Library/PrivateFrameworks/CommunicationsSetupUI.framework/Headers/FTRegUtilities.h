//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FTRegUtilities : NSObject
{
}

+ (void)authorizationController:(id)arg1 authorizedAccount:(_Bool)arg2;
+ (void)changePasswordControllerDidFinish:(id)arg1 withAppleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;
+ (void)changePasswordControllerDidCancel:(id)arg1;
+ (id)standaloneNewPasswordControllerWithRegController:(id)arg1 appleID:(id)arg2;
+ (id)standaloneAuthorizationControllerWithRegController:(id)arg1 authID:(id)arg2 token:(id)arg3;
+ (id)serviceWithType:(long long)arg1;

@end

