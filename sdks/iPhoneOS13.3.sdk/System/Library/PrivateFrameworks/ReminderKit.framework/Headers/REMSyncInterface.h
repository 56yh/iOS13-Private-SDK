//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class REMXPCDaemonController;

@interface REMSyncInterface : NSObject
{
    REMXPCDaemonController *_daemonController;
}

@property(retain, nonatomic) REMXPCDaemonController *daemonController; // @synthesize daemonController=_daemonController;
// - (void).cxx_destruct;
- (void)restartCloudKitSyncWithReason:(id)arg1 queue:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)syncCloudKitWithReason:(id)arg1 discretionary:(BOOL)arg2 queue:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (id)initWithDaemonController:(id)arg1;
- (id)init;

@end
