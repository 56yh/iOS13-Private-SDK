//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ReminderKit/REMAlarmTrigger.h>



@class REMContactRepresentation;

@interface REMAlarmContactTrigger : REMAlarmTrigger <NSSecureCoding>
{
    REMContactRepresentation *_contactRepresentation;
}

+ (_Bool)supportsSecureCoding;
+ (id)cdEntityName;
@property(readonly, nonatomic) REMContactRepresentation *contactRepresentation; // @synthesize contactRepresentation=_contactRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isTemporal;
- (_Bool)isEqual:(id)arg1;
- (id)_deepCopy;
- (id)initWithCoder:(id)arg1;
- (id)initWithContactRepresentation:(id)arg1;
- (id)initWithObjectID:(id)arg1 contactRepresentation:(id)arg2;

@end

