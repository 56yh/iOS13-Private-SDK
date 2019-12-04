//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSDate;
@protocol MSBackoffManagerDelegate;

@interface MSBackoffManager : NSObject <NSSecureCoding>
{
    id <MSBackoffManagerDelegate> _delegate;
    double _initialInterval;
    double _backoffFactor;
    double _randomizeFactor;
    double _maxBackoffInterval;
    double _currentInterval;
    NSDate *_nextExpiryDate;
    NSDate *_retryAfterDate;
}

+ (_Bool)supportsSecureCoding;
@property(retain) NSDate *retryAfterDate; // @synthesize retryAfterDate=_retryAfterDate;
@property(nonatomic) double currentInterval; // @synthesize currentInterval=_currentInterval;
@property(nonatomic) double maxBackoffInterval; // @synthesize maxBackoffInterval=_maxBackoffInterval;
@property(nonatomic) double randomizeFactor; // @synthesize randomizeFactor=_randomizeFactor;
@property(nonatomic) double backoffFactor; // @synthesize backoffFactor=_backoffFactor;
@property(nonatomic) double initialInterval; // @synthesize initialInterval=_initialInterval;
@property(nonatomic) id <MSBackoffManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithCoder:(id)arg1;
- (void)_complainAboutMissingKeyInArchive:(id)arg1;
- (id)copyParameters;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)backoff;
- (void)reset;
- (void)didReceiveRetryAfterDate:(id)arg1;
@property(retain) NSDate *nextExpiryDate;
- (id)initWithInitialInterval:(double)arg1 backoffFactor:(double)arg2 randomizeFactor:(double)arg3 maxBackoffInterval:(double)arg4 retryAfterDate:(id)arg5;

@end

