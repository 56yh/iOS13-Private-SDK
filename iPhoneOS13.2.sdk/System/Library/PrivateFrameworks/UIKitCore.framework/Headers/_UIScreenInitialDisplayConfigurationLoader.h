//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UISDisplayContext;

__attribute__((visibility("hidden")))
@interface _UIScreenInitialDisplayConfigurationLoader : NSObject
{
    UISDisplayContext *_context;
    _Bool _hasRequestedPreload;
}

+ (id)sharedLoader;
@property(readonly, nonatomic) UISDisplayContext *initialDisplayContext;
- (id)initialDisplayConfiguration;
- (void)_startPreloadInitialDisplayContext;

@end

