//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HUIDCMessage, HUIDCRemoteController;

@protocol AXIDCControllerBrowserDelegateProtocol <NSObject>
- (void)availableRemoteControllersDidChange;

@optional
- (void)controller:(HUIDCRemoteController *)arg1 didFinishSendingData:(HUIDCMessage *)arg2;
- (void)controller:(HUIDCRemoteController *)arg1 didReceiveData:(HUIDCMessage *)arg2;
@end

