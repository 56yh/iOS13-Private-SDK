//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOComposedGuidanceEvent;

__attribute__((visibility("hidden")))
@interface _MNJunctionViewPreloadEvent : NSObject
{
    _Bool _needsPreload;
    GEOComposedGuidanceEvent *_junctionViewEvent;
}

@property(nonatomic) _Bool needsPreload; // @synthesize needsPreload=_needsPreload;
@property(retain, nonatomic) GEOComposedGuidanceEvent *junctionViewEvent; // @synthesize junctionViewEvent=_junctionViewEvent;

@end

