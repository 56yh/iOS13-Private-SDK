//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import <WebApp/UIWindowSceneDelegate-Protocol.h>

@class NSString, UIWindow, WebAppViewController;

__attribute__((visibility("hidden")))
@interface WebAppSceneDelegate : UIResponder <UIWindowSceneDelegate>
{
    WebAppViewController *_webApp;
    UIWindow *_window;
    _Bool _wasSuspendedUnderLock;
    _Bool _sceneHasEverEnteredForeground;
}

- (void)sceneWillEnterForeground:(id)arg1;
- (void)sceneDidEnterBackground:(id)arg1;
- (_Bool)_shouldReloadWebAppOnLaunch;
- (void)sceneDidBecomeActive:(id)arg1;
- (void)sceneDidDisconnect:(id)arg1;
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

