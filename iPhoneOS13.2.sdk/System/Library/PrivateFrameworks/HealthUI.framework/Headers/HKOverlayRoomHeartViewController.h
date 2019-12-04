//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKOverlayRoomViewController.h>

@class NSNumber, NSString;

@interface HKOverlayRoomHeartViewController : HKOverlayRoomViewController
{
    NSNumber *_preferredOverlayIndex;
    NSString *_secondaryIdentifier;
}

@property(readonly, copy, nonatomic) NSString *secondaryIdentifier; // @synthesize secondaryIdentifier=_secondaryIdentifier;
- (id)createViewControllerForMode:(long long)arg1 displayDate:(id)arg2 applicationItems:(id)arg3;
- (id)initialSelectedContextForMode:(long long)arg1;
- (long long)_initialPillForIdentifier:(id)arg1;
- (id)contextSectionsForMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3;
- (id)primaryDisplayTypeWithApplicationItems:(id)arg1;
- (id)controllerTitleWithApplicationItems:(id)arg1;
- (void)viewDidLoad;
- (id)initWithDisplayDate:(id)arg1 applicationItems:(id)arg2 mode:(long long)arg3 secondaryIdentifier:(id)arg4;

@end
