//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface CKHistoricEvent : NSObject
{
    // Error parsing type: , name: identifier
    // Error parsing type: , name: _firstSeen
    // Error parsing type: , name: _lastSeen
    // Error parsing type: , name: _frequency
    // Error parsing type: , name: _lastDuration
    // Error parsing type: , name: _totalDuration
    // Error parsing type: , name: _metadata
}

+ (_Bool)supportsSecureCoding;
- (id)init;
- (id)copyWithZone:(void *)arg1;
- (id)initFrom:(id)arg1 withIdentifier:(id)arg2;
- (id)init:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(nonatomic, readonly) NSDictionary *metadata;
@property(nonatomic, readonly) double totalDuration;
@property(nonatomic, readonly) double lastDuration;
@property(nonatomic, readonly) long long frequency;
@property(nonatomic, readonly) NSDate *lastSeen;
@property(nonatomic, readonly) NSDate *firstSeen;
@property(nonatomic, readonly) NSString *identifier;

@end

