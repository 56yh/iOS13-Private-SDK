//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenTimeUI/STListViewController.h>

#import <ScreenTimeUI/STRestrictionsPINControllerDelegate-Protocol.h>

@class NSObject, NSString;
@protocol STRootViewModelCoordinator;

@interface STPINListViewController : STListViewController <STRestrictionsPINControllerDelegate>
{
    NSObject<STRootViewModelCoordinator> *_coordinator;
    id _showingPinTarget;
}

@property(retain, nonatomic) id showingPinTarget; // @synthesize showingPinTarget=_showingPinTarget;
@property(retain, nonatomic) NSObject<STRootViewModelCoordinator> *coordinator; // @synthesize coordinator=_coordinator;
- (void)devicePINControllerDidDismissPINPane:(id)arg1;
- (void)devicePINController:(id)arg1 didAcceptChangedPIN:(id)arg2;
- (void)devicePINController:(id)arg1 didAcceptSetPIN:(id)arg2;
- (void)didAcceptRemovePIN;
- (void)didCancelEnteringPIN;
- (void)didAcceptEnteredPIN:(id)arg1;
- (_Bool)validatePIN:(id)arg1;
- (void)showPINSheet:(id)arg1 completion:(id /* block */)arg2;
- (void)showPINSheet:(id)arg1;
- (_Bool)shouldShowPINSheetForSpecifier:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)shouldDeferPushForSpecifierID:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)init;
- (id)initWithRootViewModelCoordinator:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

