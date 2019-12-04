//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSXPCConnection;

@interface CRCarPlayAppBlacklist : NSObject
{
    NSXPCConnection *_connection;
    NSSet *_blacklistedBundleIDs;
}

@property(retain, nonatomic) NSSet *blacklistedBundleIDs; // @synthesize blacklistedBundleIDs=_blacklistedBundleIDs;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)_requestBlacklistUpdate;
- (_Bool)containsBundleIdentifier:(id)arg1;
- (id)_blacklistPreference;
- (void)dealloc;
- (void)_setupConnection;
- (id)init;

@end

