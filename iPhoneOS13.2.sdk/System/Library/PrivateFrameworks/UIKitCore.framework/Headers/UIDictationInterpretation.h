//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSArray;

__attribute__((visibility("hidden")))
@interface UIDictationInterpretation : NSObject <NSSecureCoding>
{
    NSArray *_tokens;
    double _averageConfidenceScore;
}

+ (id)serializedInterpretationFromTokens:(id)arg1 transform:(const struct __CFString *)arg2;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) double averageConfidenceScore; // @synthesize averageConfidenceScore=_averageConfidenceScore;
@property(readonly, nonatomic) NSArray *tokens; // @synthesize tokens=_tokens;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)serializedInterpretationWithTransform:(const struct __CFString *)arg1;
@property(readonly, nonatomic) _Bool removeSpaceAfter;
@property(readonly, nonatomic) _Bool removeSpaceBefore;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTokens:(id)arg1 score:(double)arg2;
- (id)initWithTokens:(id)arg1;

@end

