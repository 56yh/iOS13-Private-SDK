//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MetricMeasurement/MXMSampleTag.h>




@class NSSet;

@interface MXMSampleTagFilter : MXMSampleTag <NSCopying, NSSecureCoding>
{
    _Bool _allowDescendents;
    NSSet *_tagPermutations;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSSet *tagPermutations; // @synthesize tagPermutations=_tagPermutations;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
@property(readonly, nonatomic, getter=finite) _Bool isFinite;
- (_Bool)matchesSampleWithTag:(id)arg1;
- (id)initWithTag:(id)arg1 allowDescendents:(_Bool)arg2;

// Remaining properties
@property(readonly, nonatomic) _Bool finite;

@end

