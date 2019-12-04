//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSDate, NSUUID;

@interface RTLocationOfInterestTransition : NSObject <NSCopying, NSSecureCoding>
{
    NSUUID *_identifier;
    NSDate *_startDate;
    NSDate *_stopDate;
    NSUUID *_visitIdentifierOrigin;
    NSUUID *_visitIdentifierDestination;
    long long _modeOfTransportation;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) long long modeOfTransportation; // @synthesize modeOfTransportation=_modeOfTransportation;
@property(readonly, nonatomic) NSUUID *visitIdentifierDestination; // @synthesize visitIdentifierDestination=_visitIdentifierDestination;
@property(readonly, nonatomic) NSUUID *visitIdentifierOrigin; // @synthesize visitIdentifierOrigin=_visitIdentifierOrigin;
@property(readonly, copy, nonatomic) NSDate *stopDate; // @synthesize stopDate=_stopDate;
@property(readonly, copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithIdentifier:(id)arg1 startDate:(id)arg2 stopDate:(id)arg3 visitIdentifierOrigin:(id)arg4 visitIdentifierDestination:(id)arg5 modeOfTransportation:(long long)arg6;

@end

