//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSDate;

@interface CPLExpungeableResourceState : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long _resourceType;
    unsigned long long _expungedState;
    NSDate *_expungedDate;
}

+ (id)normalizedExpungeableResourceStatesFromExpungeableResourceStates:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSDate *expungedDate; // @synthesize expungedDate=_expungedDate;
@property(nonatomic) unsigned long long expungedState; // @synthesize expungedState=_expungedState;
@property(nonatomic) unsigned long long resourceType; // @synthesize resourceType=_resourceType;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

