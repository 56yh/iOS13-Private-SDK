//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface WLKExternalMediaContentManager : NSObject
{
    NSXPCConnection *_connection;
}

+ (id)sharedManager;
- (id)_proxy;
- (id)_connection;
- (void)_deletePlaybackActivityWithIdentifier:(id)arg1 bundleID:(id)arg2;
- (void)deletePlaybackActivityWithIdentifier:(id)arg1;
- (id)_init;
- (id)init;

@end

