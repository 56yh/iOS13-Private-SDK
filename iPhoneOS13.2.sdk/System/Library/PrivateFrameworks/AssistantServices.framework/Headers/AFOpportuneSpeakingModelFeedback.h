//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSDate, NSDictionary;

@interface AFOpportuneSpeakingModelFeedback : NSObject <NSSecureCoding>
{
    NSDate *_lastNegativeFeedback;
    NSDictionary *_negativeFeedbackByContact;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSDictionary *negativeFeedbackByContact; // @synthesize negativeFeedbackByContact=_negativeFeedbackByContact;
@property(retain, nonatomic) NSDate *lastNegativeFeedback; // @synthesize lastNegativeFeedback=_lastNegativeFeedback;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

