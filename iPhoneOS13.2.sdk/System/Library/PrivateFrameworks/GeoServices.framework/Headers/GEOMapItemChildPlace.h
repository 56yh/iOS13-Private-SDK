//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOMapItemIdentifier, GEOPDChildPlace, NSString;

@interface GEOMapItemChildPlace : NSObject
{
    GEOPDChildPlace *_childPlace;
    GEOMapItemIdentifier *_identifier;
}

- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) GEOMapItemIdentifier *identifier;
@property(readonly, nonatomic) NSString *name;
- (id)initWithChildPlace:(id)arg1;

@end

