//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;

@interface _SBApplicationLaunchAlertInfo : NSObject
{
    NSString *_bundleID;
    NSMutableSet *_foregroundScenes;
    NSMutableSet *_alertItems;
}

@property(readonly, nonatomic) NSMutableSet *alertItems; // @synthesize alertItems=_alertItems;
@property(readonly, nonatomic) NSMutableSet *foregroundScenes; // @synthesize foregroundScenes=_foregroundScenes;
@property(readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)description;
- (id)initWithBundleID:(id)arg1;

@end

