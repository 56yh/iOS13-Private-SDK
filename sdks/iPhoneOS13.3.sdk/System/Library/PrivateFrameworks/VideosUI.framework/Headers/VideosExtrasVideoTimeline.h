//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface VideosExtrasVideoTimeline : NSObject
{
    NSArray *_timelineElements;
    NSArray *_events;
}

@property(readonly, nonatomic) NSArray *events; // @synthesize events=_events;
// - (void).cxx_destruct;
- (id)description;
- (id)eventForTime:(double)arg1;
- (id)initWithTimelineElements:(id)arg1;

@end
