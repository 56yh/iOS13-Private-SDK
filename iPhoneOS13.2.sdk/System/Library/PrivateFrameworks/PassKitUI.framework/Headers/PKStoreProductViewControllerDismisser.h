//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/SKStoreProductViewControllerDelegate-Protocol.h>

@class NSString, SKStoreProductViewController;

@interface PKStoreProductViewControllerDismisser : NSObject <SKStoreProductViewControllerDelegate>
{
    SKStoreProductViewController *_productViewController;
}

- (void)productViewControllerDidFinish:(id)arg1;
- (void)attachToProductViewController:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

