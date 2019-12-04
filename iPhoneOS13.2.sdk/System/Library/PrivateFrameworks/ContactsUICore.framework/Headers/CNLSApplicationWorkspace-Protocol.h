//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class CNApplicationProxy, CNObservable, NSArray, NSDictionary, NSString, NSURL, NSUserActivity;
@protocol CNSchedulerProvider;

@protocol CNLSApplicationWorkspace 
- (void)openSensitiveURLInBackground:(NSURL *)arg1 withOptions:(NSDictionary *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)openSensitiveURLInBackground:(NSURL *)arg1 withOptions:(NSDictionary *)arg2;
- (void)openUserActivity:(NSUserActivity *)arg1 inApplication:(CNApplicationProxy *)arg2 options:(NSDictionary *)arg3 completionHandler:(void (^)(_Bool, NSError *))arg4;
- (CNApplicationProxy *)applicationForBundleIdentifier:(NSString *)arg1;
- (NSArray *)applicationsForUserActivityType:(NSString *)arg1;
- (NSArray *)applicationsAvailableForHandlingURLScheme:(NSString *)arg1;
- (CNObservable *)observableForApplicationsChangedWithSchedulerProvider:(id <CNSchedulerProvider>)arg1;
@end

