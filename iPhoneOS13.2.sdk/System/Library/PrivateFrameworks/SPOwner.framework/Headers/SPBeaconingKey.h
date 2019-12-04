//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSData, NSDateInterval;

@interface SPBeaconingKey : NSObject <NSCopying, NSSecureCoding>
{
    NSDateInterval *_dateInterval;
    NSData *_key;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSData *key; // @synthesize key=_key;
@property(copy, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDateInterval:(id)arg1 key:(id)arg2;

@end

