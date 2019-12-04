//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSuggestions/SGLabeledObject.h>

@class NSDateComponents;

@interface SGDateComponents : SGLabeledObject
{
    NSDateComponents *_dateComponents;
}

+ (id)dateComponents:(id)arg1 label:(id)arg2 extractionInfo:(id)arg3 withRecordId:(id)arg4;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSDateComponents *dateComponents; // @synthesize dateComponents=_dateComponents;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqualToDateComponents:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDateComponents:(id)arg1 label:(id)arg2 extractionInfo:(id)arg3 recordId:(id)arg4;

@end

