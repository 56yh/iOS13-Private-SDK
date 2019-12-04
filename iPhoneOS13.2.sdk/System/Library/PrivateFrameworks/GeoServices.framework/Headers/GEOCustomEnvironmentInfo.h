//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEOEnvironmentInfo.h>

@class NSMapTable, NSString;

@interface GEOCustomEnvironmentInfo : GEOEnvironmentInfo
{
    NSMapTable *_overrideURLs;
    NSString *_uuid;
}

- (_Bool)isActive;
- (void)makeActive;
- (id)overrideURLs;
- (void)updateWithURLs:(id)arg1;
- (void)delete;
- (void)save;
- (id)dictionaryRepresentation;
- (id)initWithName:(id)arg1 displayName:(id)arg2 dictionaryRepresentation:(id)arg3;

@end

