//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SBUIPasscodeLockViewFactory : NSObject
{
}

+ (id)_defaultPasscodeBiometricResource;
+ (void)setPasscodeBiometricResource:(id)arg1;
+ (void)_commonInitPasscodeView:(id)arg1 forStyle:(int)arg2;
+ (id)_passcodeLockViewForStyle:(int)arg1 withLightStyle:(_Bool)arg2;
+ (id)installTonightPasscodeLockViewForUsersCurrentStyle;
+ (id)lightPasscodeLockViewForStyle:(int)arg1;
+ (id)lightPasscodeLockViewForUsersCurrentStyle;
+ (id)passcodeLockViewForStyle:(int)arg1;
+ (id)passcodeLockViewForUsersCurrentStyle;

@end

