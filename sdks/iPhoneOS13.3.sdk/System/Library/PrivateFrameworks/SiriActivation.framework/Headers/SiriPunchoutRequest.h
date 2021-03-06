//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString, NSURL;

@interface SiriPunchoutRequest : NSObject <NSCopying>
{
    NSString *_bundleIdentifier;
    NSURL *_url;
    long long _punchoutStyle;
}

@property(nonatomic) long long punchoutStyle; // @synthesize punchoutStyle=_punchoutStyle;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;

@end

