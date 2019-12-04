//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchFoundation/SFStartSearchFeedback.h>

@class NSDictionary, NSString;

@interface SFStartNetworkSearchFeedback : SFStartSearchFeedback
{
    NSString *_url;
    NSDictionary *_headers;
    unsigned long long _endpoint;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long endpoint; // @synthesize endpoint=_endpoint;
@property(copy, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInput:(id)arg1 url:(id)arg2 headers:(id)arg3 triggerEvent:(unsigned long long)arg4 endpoint:(unsigned long long)arg5 queryId:(unsigned long long)arg6;
- (id)initWithInput:(id)arg1 url:(id)arg2 headers:(id)arg3 triggerEvent:(unsigned long long)arg4 endpoint:(unsigned long long)arg5;

@end

