//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NPDeferredHardPaywallHeightProvider, NPSoftPaywallHeightProvider, UIViewController;
@protocol NPPaywallDelegate;

@interface NPPaywall : NSObject
{
    // Error parsing type: , name: paywallType
    // Error parsing type: , name: softPaywallHeightProvider
    // Error parsing type: , name: deferredHardPaywallHeightProvider
    // Error parsing type: , name: softPaywallViewController
    // Error parsing type: , name: hardPaywallViewController
    // Error parsing type: , name: deferredHardPaywallViewController
    // Error parsing type: , name: delegate
    // Error parsing type: , name: internalDelegate
}

- (id)init;
@property(nonatomic) __weak id <NPPaywallDelegate> delegate; // @synthesize delegate;
@property(nonatomic, readonly) UIViewController *paywallViewController;
@property(nonatomic, readonly) NPDeferredHardPaywallHeightProvider *deferredHardPaywallHeightProvider; // @synthesize deferredHardPaywallHeightProvider;
@property(nonatomic, readonly) NPSoftPaywallHeightProvider *softPaywallHeightProvider; // @synthesize softPaywallHeightProvider;
@property(nonatomic, readonly) long long paywallType; // @synthesize paywallType;

@end

