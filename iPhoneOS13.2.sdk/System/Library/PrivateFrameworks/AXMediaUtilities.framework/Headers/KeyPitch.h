//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface KeyPitch : NSObject
{
    double _frequency;
    double _timeOffsetMS;
}

@property(nonatomic) double timeOffsetMS; // @synthesize timeOffsetMS=_timeOffsetMS;
@property(nonatomic) double frequency; // @synthesize frequency=_frequency;
- (id)description;
- (id)initWithFrequency:(double)arg1 timeOffset:(double)arg2;

@end

