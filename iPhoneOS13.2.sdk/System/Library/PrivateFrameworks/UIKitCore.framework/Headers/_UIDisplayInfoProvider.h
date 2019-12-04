//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIDisplayInfoProviding-Protocol.h>

@class FBSDisplayConfiguration, NSString;

__attribute__((visibility("hidden")))
@interface _UIDisplayInfoProvider : NSObject <_UIDisplayInfoProviding>
{
    FBSDisplayConfiguration *displayConfiguration;
    unsigned long long artworkSubtype;
    double homeAffordanceOverlayAllowance;
    double systemMinimumMargin;
    struct UIEdgeInsets peripheryInsets;
    struct UIEdgeInsets safeAreaInsetsPortrait;
    struct UIEdgeInsets safeAreaInsetsLandscapeLeft;
    struct UIEdgeInsets safeAreaInsetsLandscapeRight;
    struct UIEdgeInsets safeAreaInsetsPortraitUpsideDown;
}

@property(readonly, nonatomic) struct UIEdgeInsets safeAreaInsetsPortraitUpsideDown; // @synthesize safeAreaInsetsPortraitUpsideDown;
@property(readonly, nonatomic) struct UIEdgeInsets safeAreaInsetsLandscapeRight; // @synthesize safeAreaInsetsLandscapeRight;
@property(readonly, nonatomic) struct UIEdgeInsets safeAreaInsetsLandscapeLeft; // @synthesize safeAreaInsetsLandscapeLeft;
@property(readonly, nonatomic) struct UIEdgeInsets safeAreaInsetsPortrait; // @synthesize safeAreaInsetsPortrait;
@property(readonly, nonatomic) struct UIEdgeInsets peripheryInsets; // @synthesize peripheryInsets;
@property(readonly, nonatomic) double systemMinimumMargin; // @synthesize systemMinimumMargin;
@property(readonly, nonatomic) double homeAffordanceOverlayAllowance; // @synthesize homeAffordanceOverlayAllowance;
@property(nonatomic) unsigned long long artworkSubtype; // @synthesize artworkSubtype;
@property(retain, nonatomic) FBSDisplayConfiguration *displayConfiguration; // @synthesize displayConfiguration;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

