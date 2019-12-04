//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface WLKCanonicalPlayablesResponse : NSObject
{
    _Bool _watchListable;
    _Bool _watchListed;
    NSDictionary *_dictionary;
    NSString *_canonicalID;
    unsigned long long _contentType;
    NSArray *_playables;
}

@property(readonly, nonatomic) NSArray *playables; // @synthesize playables=_playables;
@property(readonly, nonatomic, getter=isWatchListed) _Bool watchListed; // @synthesize watchListed=_watchListed;
@property(readonly, nonatomic, getter=isWatchListable) _Bool watchListable; // @synthesize watchListable=_watchListable;
@property(readonly, nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
@property(readonly, copy, nonatomic) NSString *canonicalID; // @synthesize canonicalID=_canonicalID;
@property(readonly, copy, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (id)init;
- (id)initWithDictionary:(id)arg1;

@end

