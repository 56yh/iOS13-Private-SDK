//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNTracePlayerTimelineStreamObjectType-Protocol.h>

@class MNLocation, MNLocationMatchInfo, NSError, NSString;

@interface MNTraceLocationRow : NSObject <MNTracePlayerTimelineStreamObjectType>
{
    double _timestamp;
    MNLocation *_location;
    NSError *_error;
    MNLocationMatchInfo *_matchInfo;
    long long _locationEventType;
    unsigned long long _originalMatchType;
}

@property(nonatomic) unsigned long long originalMatchType; // @synthesize originalMatchType=_originalMatchType;
@property(nonatomic) long long locationEventType; // @synthesize locationEventType=_locationEventType;
@property(retain, nonatomic) MNLocationMatchInfo *matchInfo; // @synthesize matchInfo=_matchInfo;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) MNLocation *location; // @synthesize location=_location;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) double position;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

