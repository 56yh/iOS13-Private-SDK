//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HUQuickControlViewController.h>

#import <HomeUI/HUQuickControlDetailsViewControllerVendor-Protocol.h>

@class NSString;

@interface HUQuickControlAlarmDetailsViewController : HUQuickControlViewController <HUQuickControlDetailsViewControllerVendor>
{
}

+ (id)controlItemPredicate;
- (_Bool)shouldShowContentForReachabilityState:(_Bool)arg1;
- (id)secondaryQuickControlPresentationStyle;
- (id)createDetailsViewController;
- (id)controlItem;
- (id)initWithControlItems:(id)arg1 home:(id)arg2 itemUpdater:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

