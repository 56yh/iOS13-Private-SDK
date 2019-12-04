//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MetricsKit/MTMediaPlaylistItem-Protocol.h>

@class NSArray, NSString;

@interface MTHLSItem : NSObject <MTMediaPlaylistItem>
{
    unsigned long long _startOverallPosition;
    long long _startPosition;
    NSArray *_eventData;
}

+ (id /* block */)comparator;
@property(retain, nonatomic) NSArray *eventData; // @synthesize eventData=_eventData;
@property(nonatomic) long long startPosition; // @synthesize startPosition=_startPosition;
@property(nonatomic) unsigned long long startOverallPosition; // @synthesize startOverallPosition=_startOverallPosition;
- (long long)compare:(id)arg1;
- (id)initWithStartOverallPosition:(unsigned long long)arg1 metricsData:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly, nonatomic) unsigned long long overallPosition;
@property(readonly) Class superclass;

@end

