//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeUI/HUStatusBarVisibilityHandling-Protocol.h>

@class NSString;

@interface HUStaticStatusBarVisiblityHandler : NSObject <HUStatusBarVisibilityHandling>
{
}

- (void)setStatusBarHidden:(_Bool)arg1 withAnimationSettings:(id)arg2;
@property(readonly, nonatomic, getter=isStatusBarHidden) _Bool statusBarHidden;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

