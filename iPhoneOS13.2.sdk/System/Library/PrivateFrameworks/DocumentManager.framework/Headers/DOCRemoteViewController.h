//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UIRemoteViewController.h>

#import <DocumentManager/DOCRemoteContextInterface-Protocol.h>

@class DOCAppearance, DOCConfiguration, DOCRemoteContext;
@protocol DOCRemoteViewControllerDelegate;

@interface DOCRemoteViewController : _UIRemoteViewController <DOCRemoteContextInterface>
{
    _Bool _isBrowserViewController;
    id <DOCRemoteViewControllerDelegate> _delegate;
    DOCRemoteContext *_hostContext;
    DOCConfiguration *_configuration;
    DOCAppearance *_lastAppearance;
}

+ (id)serviceExtension;
+ (struct _UIResilientRemoteViewContainerViewController *)instantiateRemoteTargetSelectionBrowserViewControllerWithHostProxy:(id)arg1 configuration:(id)arg2 completionBlock:(id /* block */)arg3;
+ (struct _UIResilientRemoteViewContainerViewController *)instantiateRemoteDocumentBrowserViewControllerWithHostProxy:(id)arg1 configuration:(id)arg2 completionBlock:(id /* block */)arg3;
+ (struct _UIResilientRemoteViewContainerViewController *)instantiateRemoteViewControllerWithConfiguration:(id)arg1 transparent:(_Bool)arg2 errorHandler:(id /* block */)arg3 hostProxy:(id)arg4 completionHandler:(id /* block */)arg5;
@property(retain) DOCAppearance *lastAppearance; // @synthesize lastAppearance=_lastAppearance;
@property _Bool isBrowserViewController; // @synthesize isBrowserViewController=_isBrowserViewController;
@property(retain) DOCConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain) DOCRemoteContext *hostContext; // @synthesize hostContext=_hostContext;
@property __weak id <DOCRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)updateAppearance:(id)arg1 shouldFlushCA:(_Bool)arg2 completionBlock:(id /* block */)arg3;
- (void)updateAppearance:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)updateEditingTo:(_Bool)arg1 animated:(_Bool)arg2;
- (void)viewDidLoad;

@end

