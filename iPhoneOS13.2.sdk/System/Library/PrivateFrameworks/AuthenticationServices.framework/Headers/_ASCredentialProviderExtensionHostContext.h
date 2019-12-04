//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

#import <AuthenticationServices/_ASCredentialProviderExtensionHostContextProtocol-Protocol.h>

@class NSString;
@protocol _ASCredentialProviderExtensionHostContextDelegate;

@interface _ASCredentialProviderExtensionHostContext : NSExtensionContext <_ASCredentialProviderExtensionHostContextProtocol>
{
    id <_ASCredentialProviderExtensionHostContextDelegate> _delegate;
}

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;
@property(nonatomic) __weak id <_ASCredentialProviderExtensionHostContextDelegate> delegate; // @synthesize delegate=_delegate;
- (void)prepareToCompleteExtensionConfigurationRequestWithCompletion:(id /* block */)arg1;
- (void)prepareToCancelRequestWithError:(id)arg1 completion:(id /* block */)arg2;
- (void)prepareToCompleteRequestWithSelectedCredential:(id)arg1 completion:(id /* block */)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

