//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUImageOBWelcomeController.h>

#import <HomeUI/HFSetupPairingPopup-Protocol.h>

@class HMSetupAccessoryDescription;
@protocol HFSetupPairingPopupDelegate;

@interface HUSetupNetworkRouterReplaceViewController : HUImageOBWelcomeController <HFSetupPairingPopup>
{
    id <HFSetupPairingPopupDelegate> _popupDelegate;
    HMSetupAccessoryDescription *_setupAccessoryDescription;
}

@property(readonly, nonatomic) HMSetupAccessoryDescription *setupAccessoryDescription; // @synthesize setupAccessoryDescription=_setupAccessoryDescription;
@property(readonly, nonatomic) __weak id <HFSetupPairingPopupDelegate> popupDelegate; // @synthesize popupDelegate=_popupDelegate;
// - (void).cxx_destruct;
- (void)_cancelPressed:(id)arg1;
- (void)_replacePressed:(id)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic) NSUInteger popupType;
- (id)initWithPopupDelegate:(id)arg1 setupAccessoryDescription:(id)arg2;

@end

