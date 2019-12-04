//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet;
@protocol OS_dispatch_queue;

@interface SGAppIconState : NSObject
{
    NSDictionary *_appLocation;
    NSSet *_dockedApps;
    NSSet *_folderApps;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

+ (id)sharedInstance;
- (id)loadIconState;
- (void)parseIconState:(id)arg1;
- (void)reload;
- (long long)folderPageNumberForBundleId:(id)arg1;
- (long long)springboardPageLocationForBundleId:(id)arg1;
- (long long)springboardPageNumberForBundleId:(id)arg1;
- (_Bool)appInFolderWithBundleId:(id)arg1;
- (_Bool)appOnDockWithBundleId:(id)arg1;
- (id)allFolderApps;
- (id)allDockedApps;
- (id)allAppsOnSpringboard;
- (id)init;

@end

