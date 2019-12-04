//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class DNDClientEventDetails;

@interface DNDClientEventBehavior : NSObject <NSCopying, NSSecureCoding>
{
    DNDClientEventDetails *_eventDetails;
    unsigned long long _interruptionSuppression;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long interruptionSuppression; // @synthesize interruptionSuppression=_interruptionSuppression;
@property(readonly, copy, nonatomic) DNDClientEventDetails *eventDetails; // @synthesize eventDetails=_eventDetails;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithEventDetails:(id)arg1 interruptionSuppression:(unsigned long long)arg2;

@end

