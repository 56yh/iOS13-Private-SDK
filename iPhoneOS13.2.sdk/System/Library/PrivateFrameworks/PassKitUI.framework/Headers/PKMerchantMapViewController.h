//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/_MKPlaceViewController.h>

#import <PassKitUI/_MKPlaceViewControllerDelegate-Protocol.h>

@class NSString;

@interface PKMerchantMapViewController : _MKPlaceViewController <_MKPlaceViewControllerDelegate>
{
}

- (void)placeViewControllerDidSelectShareLocation;
- (id)activityViewControllerForPlaceViewController:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

