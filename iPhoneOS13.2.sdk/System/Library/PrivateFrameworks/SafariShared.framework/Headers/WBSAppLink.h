//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LSAppLink, LSApplicationProxy, NSURL;

@interface WBSAppLink : NSObject
{
    struct os_unfair_lock_s _ivarLock;
    _Bool _didResolveAppLink;
    LSAppLink *_cachedAppLink;
    NSURL *_url;
}

+ (void)clearSavedSettings;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void)_appLink:(id)arg1 getAppLinkLabel:(id *)arg2 name:(id *)arg3 icon:(id *)arg4;
- (long long)_openStrategyForAppLink:(id)arg1;
- (id)_synchronouslyFetchAppLinkWithError:(id *)arg1;
- (void)_getAppLinkWithCompletionHandler:(id /* block */)arg1;
- (void)disableWithCompletionHandler:(id /* block */)arg1;
- (void)disable;
- (void)openExternally;
- (void)openExternallyWithWebBrowserState:(id)arg1 referrerURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)getAppLinkLabel:(id *)arg1 name:(id *)arg2 icon:(id *)arg3;
- (void)getAppLinkAttributesWithCompletionHandler:(id /* block */)arg1;
- (long long)synchronouslyDecideOpenStrategy;
- (void)decideOpenStrategyWithCompletionHandler:(id /* block */)arg1;
@property(readonly, nonatomic) LSApplicationProxy *synchronousTargetApplicationProxy;
- (id)initWithURL:(id)arg1;

@end

