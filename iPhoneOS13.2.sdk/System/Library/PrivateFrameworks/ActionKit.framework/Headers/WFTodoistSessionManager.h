//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL, NSURLSession, WFOAuth2Credential;

@interface WFTodoistSessionManager : NSObject
{
    NSURLSession *_session;
    WFOAuth2Credential *_credential;
    NSURL *_baseURL;
    NSString *_syncToken;
}

+ (id)dateFormatter;
@property(copy, nonatomic) NSString *syncToken; // @synthesize syncToken=_syncToken;
@property(readonly, copy, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(copy, nonatomic) WFOAuth2Credential *credential; // @synthesize credential=_credential;
@property(readonly, nonatomic) NSURLSession *session; // @synthesize session=_session;
- (void)requestWithCommands:(id)arg1 resourceTypes:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)createItemInProject:(id)arg1 content:(id)arg2 dueDateString:(id)arg3 reminderDateString:(id)arg4 reminderService:(long long)arg5 priority:(long long)arg6 note:(id)arg7 completionHandler:(id /* block */)arg8;
- (void)createFileOnItemWithId:(long long)arg1 withFile:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)getProjectsWithCompletionHandler:(id /* block */)arg1;
- (id)initWithSessionConfiguration:(id)arg1;
- (id)init;

@end

