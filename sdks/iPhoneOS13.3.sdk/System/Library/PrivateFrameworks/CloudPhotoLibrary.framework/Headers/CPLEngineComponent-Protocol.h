//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString;

@protocol CPLEngineComponent <NSObject>
- (NSString *)componentName;
- (void)closeAndDeactivate:(BOOL)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)openWithCompletionHandler:(void (^)(NSError *))arg1;

@optional
- (void)getStatusDictionaryWithCompletionHandler:(void (^)(NSDictionary *, NSError *))arg1;
- (void)getStatusWithCompletionHandler:(void (^)(NSString *, NSError *))arg1;
@end
