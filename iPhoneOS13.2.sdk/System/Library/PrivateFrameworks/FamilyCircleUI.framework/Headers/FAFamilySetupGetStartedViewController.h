//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <FamilyCircleUI/FAFamilySetupPage-Protocol.h>

@class AAFamilyEligibilityResponse, ACAccount, ACAccountStore, FAFamilySharingFeaturesView, NSString, UIButton, UIImageView, UILabel, UIScrollView, UIView;
@protocol FAFamilySetupPageDelegate;

@interface FAFamilySetupGetStartedViewController : UIViewController <FAFamilySetupPage>
{
    ACAccount *_account;
    ACAccountStore *_accountStore;
    AAFamilyEligibilityResponse *_familyEligibilityResponse;
    UIScrollView *_scrollView;
    UIView *_contentView;
    UILabel *_titleLabel;
    UIImageView *_familySharingLogo;
    UILabel *_descriptionLabel;
    UIButton *_getStartedButton;
    FAFamilySharingFeaturesView *_familyFeaturesView;
    id <FAFamilySetupPageDelegate> _delegate;
}

@property(nonatomic) __weak id <FAFamilySetupPageDelegate> delegate; // @synthesize delegate=_delegate;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_getStartedButtonWasTapped:(id)arg1;
- (double)_heightForText:(id)arg1 constrainedToWidth:(double)arg2;
- (id)_createDescriptionLabelForText:(id)arg1;
- (void)_updateFonts;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (id)initWithAccount:(id)arg1 store:(id)arg2 familyEligibilityResponse:(id)arg3;
- (id)initWithAccount:(id)arg1 store:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

