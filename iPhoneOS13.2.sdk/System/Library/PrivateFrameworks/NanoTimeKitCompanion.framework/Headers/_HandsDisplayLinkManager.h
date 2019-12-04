//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSMutableDictionary;

@interface _HandsDisplayLinkManager : NSObject
{
    CADisplayLink *_displayLink;
    NSMutableDictionary *_handlers;
    unsigned long long _nextToken;
    _Bool _inForeground;
}

+ (id)sharedInstance;
- (void)_invokeHandlers;
- (void)_backgrounded;
- (void)_foregrounded;
- (void)_onDisplayLink:(id)arg1;
- (void)_updateDisplayLink;
- (id)_nextToken;
- (void)stopUpdatesForToken:(id)arg1;
- (id)startUpdatesWithHandler:(id /* block */)arg1;
- (void)dealloc;
- (id)init;

@end

