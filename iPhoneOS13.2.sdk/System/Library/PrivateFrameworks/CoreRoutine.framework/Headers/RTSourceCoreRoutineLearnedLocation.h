//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreRoutine/RTSourceCoreRoutine.h>

@class NSUUID;

@interface RTSourceCoreRoutineLearnedLocation : RTSourceCoreRoutine
{
    NSUUID *_identifier;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;

@end

