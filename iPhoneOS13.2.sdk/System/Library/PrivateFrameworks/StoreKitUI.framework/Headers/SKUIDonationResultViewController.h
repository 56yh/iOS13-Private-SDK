//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIDonationStepViewController.h>

#import <StoreKitUI/SKUIDonationConfigurationObserver-Protocol.h>

@class NSString, SKUIDonationResultView, SKUIGiftAmount;

__attribute__((visibility("hidden")))
@interface SKUIDonationResultViewController : SKUIDonationStepViewController <SKUIDonationConfigurationObserver>
{
    SKUIGiftAmount *_donationAmount;
    SKUIDonationResultView *_resultView;
}

@property(copy, nonatomic) SKUIGiftAmount *donationAmount; // @synthesize donationAmount=_donationAmount;
- (void)_doneButtonAction:(id)arg1;
- (void)donationConfigurationController:(id)arg1 didLoadLogoForCharity:(id)arg2;
- (void)loadView;
- (id)initWithCharity:(id)arg1 configuration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

