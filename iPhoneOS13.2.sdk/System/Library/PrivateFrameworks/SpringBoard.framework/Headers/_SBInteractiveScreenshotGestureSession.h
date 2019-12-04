//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID, SBInteractiveScreenshotGestureHostRootViewController, SBInteractiveScreenshotGestureHostWindow, SBInteractiveScreenshotGestureRootViewController, SBInteractiveScreenshotGestureRootWindow;

@interface _SBInteractiveScreenshotGestureSession : NSObject
{
    NSUUID *_sessionID;
    SBInteractiveScreenshotGestureRootWindow *_rootWindow;
    SBInteractiveScreenshotGestureHostWindow *_hostWindow;
}

@property(retain, nonatomic) SBInteractiveScreenshotGestureHostWindow *hostWindow; // @synthesize hostWindow=_hostWindow;
@property(retain, nonatomic) SBInteractiveScreenshotGestureRootWindow *rootWindow; // @synthesize rootWindow=_rootWindow;
@property(readonly, copy, nonatomic) NSUUID *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, nonatomic) SBInteractiveScreenshotGestureRootViewController *rootViewController;
@property(readonly, nonatomic) SBInteractiveScreenshotGestureHostRootViewController *hostRootViewController;
- (id)initWithSessionID:(id)arg1;

@end

