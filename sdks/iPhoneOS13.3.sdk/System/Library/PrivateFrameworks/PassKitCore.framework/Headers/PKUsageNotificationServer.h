//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PDXPCService.h>

#import <PassKitCore/PKUsageNotificationServerExportedInterface-Protocol.h>

@class NSMutableSet, NSXPCListener;

@interface PKUsageNotificationServer : PDXPCService <NSXPCListenerDelegate, PKUsageNotificationServerExportedInterface>
{
    NSXPCListener *_listener;
    NSMutableSet *_connections;
}

// - (void).cxx_destruct;
- (void)notifyPaymentPassIdentifierUsed:(id)arg1 withTransactionInfo:(id)arg2;
- (void)notifyPassUsed:(id)arg1 fromSource:(long long)arg2;
- (void)initializeUsageNotificationServer;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)dealloc;
- (id)init;

@end

