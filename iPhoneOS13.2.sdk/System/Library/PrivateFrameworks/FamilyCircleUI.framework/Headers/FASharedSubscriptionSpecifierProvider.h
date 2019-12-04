//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, FASharedServicesResponse, NSArray, NSOperationQueue, PSListController, PSSpecifier;
@protocol FASharedSubscriptionSpecifierProviderDelegeate;

@interface FASharedSubscriptionSpecifierProvider : NSObject
{
    PSListController *_presenter;
    PSSpecifier *_spinnerCell;
    ACAccount *_appleAccount;
    FASharedServicesResponse *_sharedSubscriptionResponse;
    _Bool _updateSubsriptionSpecifiers;
    _Bool _isLoadingSpecifiers;
    NSOperationQueue *_networkActivityQueue;
    NSArray *_specifiers;
    id <FASharedSubscriptionSpecifierProviderDelegeate> _delegate;
}

@property(nonatomic) __weak id <FASharedSubscriptionSpecifierProviderDelegeate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *specifiers; // @synthesize specifiers=_specifiers;
- (void)reloadSpecifiers;
- (void)_handleSubscriptionListResponse:(id)arg1;
- (void)_loadSubscriptionServices;
- (id)_valueForServiceSpecifier:(id)arg1;
- (void)_serviceSpecifierWasTapped:(id)arg1;
- (id)_iconURLStringForService:(id)arg1;
- (id)_sharedSubscriptionGroupSpecifier;
- (id)initWithAppleAccount:(id)arg1 presenter:(id)arg2;

@end

