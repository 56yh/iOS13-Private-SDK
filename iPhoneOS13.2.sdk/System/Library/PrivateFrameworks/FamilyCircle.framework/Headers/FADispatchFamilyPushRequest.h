//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FamilyCircle/FAFamilyCircleRequest.h>

@class NSDictionary;

@interface FADispatchFamilyPushRequest : FAFamilyCircleRequest
{
    NSDictionary *_payload;
}

@property(readonly, copy) NSDictionary *payload; // @synthesize payload=_payload;
- (void)startRequestWithCompletionHandler:(id /* block */)arg1;
- (id)initWithPayload:(id)arg1;

@end

