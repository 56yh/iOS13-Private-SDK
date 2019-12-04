//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSProgress, WFTaskIdentifier;

@interface WFTask : NSObject
{
    _Bool _requiresResponse;
    WFTaskIdentifier *_identifier;
    NSProgress *_progress;
}

+ (id)sharedServiceConnection;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) _Bool requiresResponse; // @synthesize requiresResponse=_requiresResponse;
@property(readonly, nonatomic) WFTaskIdentifier *identifier; // @synthesize identifier=_identifier;
- (void)cancel;
@property(readonly, nonatomic) _Bool isCancelled;
- (void)cleanup;
- (void)handleCancellation;
- (void)handleResponse:(id)arg1;
- (void)startWithService:(id)arg1;
- (void)executeSynchronously;
- (void)start;
- (id)initWithResponseRequired:(_Bool)arg1;
- (id)init;

@end

