//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBDeviceApplicationSceneStatusBarStateProxy.h>

@class SBDashBoardHostedAppViewController;

@interface _SBDashBoardHostedAppStatusBarStateProxy : SBDeviceApplicationSceneStatusBarStateProxy
{
    SBDashBoardHostedAppViewController *_hostedAppVCBackReference;
}

@property(nonatomic) __weak SBDashBoardHostedAppViewController *hostedAppVCBackReference; // @synthesize hostedAppVCBackReference=_hostedAppVCBackReference;
- (double)_statusBarAlpha;
- (_Bool)_suppressInheritedPartStyles;
- (long long)_fallbackInterfaceOrientation;

@end

