//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TVPPlaybackReportingEvent : NSObject
{
    NSString *_name;
    double _timestamp;
    id _value;
    long long _type;
    double _duration;
    long long _durationMS;
    TVPPlaybackReportingEvent *_startEvent;
}

@property(nonatomic) __weak TVPPlaybackReportingEvent *startEvent; // @synthesize startEvent=_startEvent;
@property(nonatomic) long long durationMS; // @synthesize durationMS=_durationMS;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;

@end

