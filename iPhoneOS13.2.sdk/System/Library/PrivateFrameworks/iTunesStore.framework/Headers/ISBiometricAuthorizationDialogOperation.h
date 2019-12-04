//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class ISDialog, ISDialogButton, ISTouchIDDialog, ISURLBag, NSDictionary, NSObject, NSString, NSURL, SSBiometricAuthenticationContext;
@protocol OS_dispatch_queue;

@interface ISBiometricAuthorizationDialogOperation : ISOperation
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    ISURLBag *_urlBag;
    SSBiometricAuthenticationContext *_context;
    ISDialog *_dialog;
    NSURL *_redirectURL;
    ISDialogButton *_selectedButton;
    NSDictionary *_buyParams;
    NSDictionary *_metricsDictionary;
    NSString *_userAgent;
    ISDialog *_fallbackDialog;
    ISTouchIDDialog *_touchIDDialog;
}

@property(retain) ISTouchIDDialog *touchIDDialog; // @synthesize touchIDDialog=_touchIDDialog;
@property(retain) ISDialog *fallbackDialog; // @synthesize fallbackDialog=_fallbackDialog;
@property(copy) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(copy) NSDictionary *metricsDictionary; // @synthesize metricsDictionary=_metricsDictionary;
@property(copy) NSDictionary *buyParams; // @synthesize buyParams=_buyParams;
@property(readonly) ISDialogButton *selectedButton; // @synthesize selectedButton=_selectedButton;
@property(readonly) NSURL *redirectURL; // @synthesize redirectURL=_redirectURL;
@property(readonly) ISDialog *dialog; // @synthesize dialog=_dialog;
@property(retain) SSBiometricAuthenticationContext *biometricAuthenticationContext; // @synthesize biometricAuthenticationContext=_context;
- (_Bool)_shouldFallbackToAuthKitForError:(id)arg1;
- (_Bool)_runSignatureOperationReturningError:(id *)arg1;
- (_Bool)_runAuthkitOperationWithError:(id)arg1 returningError:(id *)arg2;
- (void)_performMetricsWithBiometricMatch:(unsigned long long)arg1 didBiometricsFail:(_Bool)arg2;
- (void)_loadURLBag;
- (void)_findSelectedButtonForButtons:(id)arg1;
- (void)run;
- (id)initWithTouchIDDialog:(id)arg1 fallbackDialog:(id)arg2;

@end

