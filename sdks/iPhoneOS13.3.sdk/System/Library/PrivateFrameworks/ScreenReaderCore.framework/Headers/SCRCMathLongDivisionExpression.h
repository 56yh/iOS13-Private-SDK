//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenReaderCore/SCRCMathArrayExpression.h>

@class SCRCMathExpression;

__attribute__((visibility("hidden")))
@interface SCRCMathLongDivisionExpression : SCRCMathArrayExpression
{
    SCRCMathExpression *_divisor;
}

@property(retain, nonatomic) SCRCMathExpression *divisor; // @synthesize divisor=_divisor;
// - (void).cxx_destruct;
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(BOOL)arg2;
- (id)initWithDictionary:(id)arg1;

@end

