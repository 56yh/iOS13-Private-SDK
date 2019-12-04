//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>



@class NSString, NSURL, VSFailable, VSPreferences;

__attribute__((visibility("hidden")))
@interface VSApplicationBootURLOperation : VSAsyncOperation <NSURLSessionDelegate>
{
    _Bool _isDeveloper;
    NSURL *_url;
    VSFailable *_urlOrError;
    VSPreferences *_preferences;
}

@property(retain, nonatomic) VSPreferences *preferences; // @synthesize preferences=_preferences;
@property(retain, nonatomic) VSFailable *urlOrError; // @synthesize urlOrError=_urlOrError;
@property(nonatomic) _Bool isDeveloper; // @synthesize isDeveloper=_isDeveloper;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (_Bool)verifyExtendedValidationWithTrust:(struct __SecTrust *)arg1;
- (id)generateTempFilePath;
- (void)executionDidBegin;
- (id)initWithBootURL:(id)arg1 isDeveloper:(_Bool)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

