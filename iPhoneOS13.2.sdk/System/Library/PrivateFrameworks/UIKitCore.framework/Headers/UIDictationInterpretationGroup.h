//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSArray, UIDictationInterpretation;

__attribute__((visibility("hidden")))
@interface UIDictationInterpretationGroup : NSObject <NSSecureCoding>
{
    _Bool _isLowConfidence;
    NSArray *_interpretations;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) _Bool isLowConfidence; // @synthesize isLowConfidence=_isLowConfidence;
@property(readonly, nonatomic) NSArray *interpretations; // @synthesize interpretations=_interpretations;
- (id)description;
@property(readonly, nonatomic) UIDictationInterpretation *bestInterpretation;
@property(readonly, nonatomic) double bestConfidenceScore;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInterpretations:(id)arg1 isLowConfidence:(_Bool)arg2;
- (id)initWithInterpretations:(id)arg1;

@end

