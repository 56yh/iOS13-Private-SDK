//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface WLKStoredConfiguration : NSObject
{
    _Bool _activeUser;
    NSDictionary *_requiredRequestKeyValuePairs;
    NSDate *_timestamp;
    NSString *_utsc;
    NSString *_vppaState;
}

@property(retain, nonatomic) NSString *vppaState; // @synthesize vppaState=_vppaState;
@property(retain, nonatomic) NSString *utsc; // @synthesize utsc=_utsc;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) _Bool activeUser; // @synthesize activeUser=_activeUser;
@property(retain, nonatomic) NSDictionary *requiredRequestKeyValuePairs; // @synthesize requiredRequestKeyValuePairs=_requiredRequestKeyValuePairs;
@property(readonly, nonatomic) NSString *utsk;
- (id)description;

@end

