//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FMFSession;

@interface IMDLocationSharingController : NSObject
{
    FMFSession *_session;
}

+ (void)_addLocationShareItemToMatchingChats:(id)arg1 handleID:(id)arg2 hasStoredItem:(_Bool)arg3 broadcastChanges:(_Bool)arg4;
+ (void)addLocationShareItemToMatchingChats:(id)arg1;
+ (id)sharedInstance;
- (void)_forwardMappingPacket:(id)arg1 toID:(id)arg2 account:(id)arg3;
- (void)receivedIncomingLocationSharePacket:(id)arg1;
- (void)_generateLocationSharingItemWithHandleID:(id)arg1 direction:(long long)arg2 action:(long long)arg3;
- (void)dealloc;
- (id)init;

@end

