//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FMFUI/AAUISpecifierProvider-Protocol.h>

@class AIDAAccountManager, NSArray, NSString;
@protocol AAUISpecifierProviderDelegate;

@interface FMFSpecifierProvider : NSObject <AAUISpecifierProvider>
{
    id <AAUISpecifierProviderDelegate> _delegate;
    NSArray *_specifiers;
    AIDAAccountManager *_accountManager;
}

@property(retain, nonatomic) AIDAAccountManager *accountManager; // @synthesize accountManager=_accountManager;
@property(copy, nonatomic) NSArray *specifiers; // @synthesize specifiers=_specifiers;
@property(nonatomic) __weak id <AAUISpecifierProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isAccountInGrayMode;
- (_Bool)locationServicesDisabledByRestrictions;
- (_Bool)shouldShowLocationSharingSpecifier;
- (_Bool)shouldEnableLocationSharingSpecifier;
- (void)locationSharingSpecifierWasTapped:(id)arg1;
- (id)initWithAccountManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

