//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WatchListKit/WLKRequest.h>

@class WLKContinueWatchingResponse;

@interface WLKContinueWatchingRequest : WLKRequest
{
    _Bool _allowAuthentication;
    WLKContinueWatchingResponse *_response;
}

@property(readonly, nonatomic) WLKContinueWatchingResponse *response; // @synthesize response=_response;
@property(nonatomic) _Bool allowAuthentication; // @synthesize allowAuthentication=_allowAuthentication;
- (void)makeRequestWithCompletion:(id /* block */)arg1;
- (id)init;

@end

