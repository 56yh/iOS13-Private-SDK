//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXPlacesMapControllerAccess-Protocol.h>

@class NSString, PKExtendedTraitCollection, PXPlacesMapController;

@interface PXPlacesMapViewController : UIViewController <PXChangeObserver, PXPlacesMapControllerAccess>
{
    PXPlacesMapController *_mapController;
}

@property(retain, nonatomic) PXPlacesMapController *mapController; // @synthesize mapController=_mapController;
- (void)sendTraitNotification;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
@property(readonly, nonatomic) PKExtendedTraitCollection *pk_extendedTraitCollection;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (void)_commonInit;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

