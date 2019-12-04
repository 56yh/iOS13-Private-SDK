//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTBedtimeSession-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSString;

@interface MTTimeInBedSession : NSObject <MTBedtimeSession>
{
    _Bool _needsAdditionalProcessing;
    NSDate *_startDate;
    NSDate *_endDate;
    NSArray *_intervals;
    unsigned long long _endReason;
    NSDictionary *_metadata;
}

+ (_Bool)supportsSecureCoding;
+ (id)timeInBedSessionWithStartDate:(id)arg1 endDate:(id)arg2 intervals:(id)arg3 endReason:(unsigned long long)arg4 metadata:(id)arg5;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) unsigned long long endReason; // @synthesize endReason=_endReason;
@property(retain, nonatomic) NSArray *intervals; // @synthesize intervals=_intervals;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) _Bool needsAdditionalProcessing; // @synthesize needsAdditionalProcessing=_needsAdditionalProcessing;
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) long long sampleType;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 intervals:(id)arg3 endReason:(unsigned long long)arg4 metadata:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

