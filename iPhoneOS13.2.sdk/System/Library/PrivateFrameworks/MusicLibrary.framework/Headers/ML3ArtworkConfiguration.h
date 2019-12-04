//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ML3ArtworkConfiguration : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSDictionary *_artworkConfigurationDictionary;
    NSMutableDictionary *_supportedSizesCache;
    double _mainScreenScale;
}

+ (id)systemConfiguration;
@property(nonatomic) double mainScreenScale; // @synthesize mainScreenScale=_mainScreenScale;
@property(retain, nonatomic) NSMutableDictionary *supportedSizesCache; // @synthesize supportedSizesCache=_supportedSizesCache;
@property(retain, nonatomic) NSDictionary *artworkConfigurationDictionary; // @synthesize artworkConfigurationDictionary=_artworkConfigurationDictionary;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
- (id)_supportedSizeKeysForMediaType:(unsigned int)arg1 artworkType:(long long)arg2;
- (id)description;
- (id)sizesToAutogenerateForMediaType:(unsigned int)arg1 artworkType:(long long)arg2;
- (id)supportedSizesForMediaType:(unsigned int)arg1 artworkType:(long long)arg2;
- (id)initWithConfigurationDictionaries:(id)arg1;

@end

