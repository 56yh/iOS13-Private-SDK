//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSURL;

@interface ICURLBagRadioConfiguration : NSObject
{
    NSDictionary *_bagRadioDictionary;
}

// - (void).cxx_destruct;
- (id)urlForBagRadioKey:(id)arg1;
- (BOOL)shouldIncludeHTTPHeaderField:(id)arg1 forRequestURL:(id)arg2;
@property(readonly, nonatomic) long long maxSupportedProtocolVersion;
@property(readonly, nonatomic) long long getTracksDPInfoKBSyncCount;
@property(readonly, copy, nonatomic) NSURL *baseURL;
- (id)initWithBagRadioDictionary:(id)arg1;

@end

