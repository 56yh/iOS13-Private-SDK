//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BLTWatchKitAppDefinition : NSObject
{
    _Bool _isInstalled;
    _Bool _runsIndependently;
    NSString *_containerBundleID;
    NSString *_watchKitAppBundleID;
}

@property(readonly, nonatomic) _Bool runsIndependently; // @synthesize runsIndependently=_runsIndependently;
@property(readonly, nonatomic) _Bool isInstalled; // @synthesize isInstalled=_isInstalled;
@property(readonly, nonatomic) NSString *watchKitAppBundleID; // @synthesize watchKitAppBundleID=_watchKitAppBundleID;
@property(readonly, nonatomic) NSString *containerBundleID; // @synthesize containerBundleID=_containerBundleID;
- (id)initWithContainerBundleID:(id)arg1 watchKitAppBundleID:(id)arg2 isInstalled:(_Bool)arg3 runsIndependently:(_Bool)arg4;

@end

