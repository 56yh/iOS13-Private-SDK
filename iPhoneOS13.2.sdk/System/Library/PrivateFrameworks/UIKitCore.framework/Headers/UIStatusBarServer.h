//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol UIStatusBarServerClient;

@interface UIStatusBarServer : NSObject
{
    id <UIStatusBarServerClient> _statusBar;
    struct __CFRunLoopSource *_source;
}

+ (id)getDoubleHeightStatusStringForStyle:(long long)arg1;
+ (_Bool)getGlowAnimationStateForStyle:(long long)arg1;
+ (double)getGlowAnimationEndTimeForStyle:(long long)arg1;
+ (int)getStyleOverrides;
+ (CDStruct_f9a79af9 *)getStatusBarOverrideData;
+ (const CDStruct_0942cde0 *)getStatusBarData;
+ (id)_cachedTimeStringFromData:(CDStruct_0942cde0 *)arg1;
+ (void)permanentizeStatusBarOverrideData;
+ (void)postStatusBarOverrideData:(CDStruct_f9a79af9 *)arg1;
+ (void)removeStatusBarItem:(int)arg1;
+ (void)addStatusBarItem:(int)arg1;
+ (void)postDoubleHeightStatusString:(id)arg1 forStyle:(long long)arg2;
+ (void)postGlowAnimationState:(_Bool)arg1 forStyle:(long long)arg2;
+ (void)removeStyleOverrides:(int)arg1;
+ (void)addStyleOverrides:(int)arg1;
+ (void)postStatusBarData:(const CDStruct_0942cde0 *)arg1 withActions:(int)arg2;
+ (unsigned int)_publisherPort;
+ (unsigned int)_serverPort;
+ (const char *)serviceName;
+ (void)runServer;
@property(retain, nonatomic) id <UIStatusBarServerClient> statusBar; // @synthesize statusBar=_statusBar;
- (void)_receivedDoubleHeightStatus:(const char *)arg1 forStyle:(long long)arg2;
- (void)_receivedGlowAnimationState:(_Bool)arg1 forStyle:(long long)arg2;
- (void)_receivedStyleOverrides:(int)arg1;
- (void)_receivedStatusBarData:(CDStruct_0942cde0 *)arg1 actions:(int)arg2 animated:(_Bool)arg3;
- (void)dealloc;
- (id)initWithStatusBar:(id)arg1;

@end

