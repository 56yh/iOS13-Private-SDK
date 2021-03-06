//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TouchRemote/TRTransferBrowserDelegate-Protocol.h>

@class TRDeviceSetupPeripheral, TRTransferBrowser;
@protocol TRDeviceSetupBrowserDelegate;

@interface TRDeviceSetupBrowser : NSObject <TRTransferBrowserDelegate>
{
    id <TRDeviceSetupBrowserDelegate> _delegate;
    TRTransferBrowser *_transferBrowser;
    TRDeviceSetupPeripheral *_peripheral;
}

@property(retain, nonatomic) TRDeviceSetupPeripheral *peripheral; // @synthesize peripheral=_peripheral;
@property(retain, nonatomic) TRTransferBrowser *transferBrowser; // @synthesize transferBrowser=_transferBrowser;
@property(nonatomic) __weak id <TRDeviceSetupBrowserDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)stop;
- (void)defer;
@property(readonly, nonatomic) long long state;
- (void)start;
- (void)browserDidDisconnect:(id)arg1;
- (void)browser:(id)arg1 didReceiveData:(id)arg2 replyHandler:(id /* CDUnknownBlockType */)arg3;
- (void)browser:(id)arg1 didStartTransferWithSendDataHandler:(id /* CDUnknownBlockType */)arg2;
- (void)browserDidChangeState:(id)arg1;
- (id)init;

@end

