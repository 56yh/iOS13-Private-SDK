//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreHandwriting/CHStrokeGroup.h>

@class NSArray;

@interface CHTextLineStrokeGroup : CHStrokeGroup
{
    NSArray *_writingDirectionSortedSubstrokes;
    struct CGVector _averageWritingOrientation;
    struct CGVector _averageStrokeDeviation;
    vector_5071ab7f _localStrokeWritingOrientations;
    long long _lastSubstrokeIndexBeforeMerge;
    NSArray *_coalescedLastSubstrokes;
    NSArray *_writingDirectionSortedStrokeIdentifiers;
}

@property(readonly, retain, nonatomic) NSArray *writingDirectionSortedStrokeIdentifiers; // @synthesize writingDirectionSortedStrokeIdentifiers=_writingDirectionSortedStrokeIdentifiers;
- (id).cxx_construct;
- (id)coalescedLastSubstrokes;
- (long long)lastSubstrokeIndexBeforeMerge;
- (struct CGVector)averageStrokeDeviation;
- (struct CGVector)averageWritingOrientation;
- (struct CGVector)localWritingOrientationAtStrokeIndex:(long long)arg1;
- (vector_5071ab7f *)localStrokeWritingOrientations;
- (id)writingDirectionSortedSubstrokes;
- (void)dealloc;
- (id)groupByAddingStrokeIdentifiers:(id)arg1 removingStrokeIdentifiers:(id)arg2 firstStrokeIdentifier:(id)arg3 lastStrokeIdentifier:(id)arg4 bounds:(struct CGRect)arg5 writingDirectionSortedSubstrokes:(id)arg6 averageWritingOrientation:(struct CGVector)arg7 averageStrokeDeviation:(struct CGVector)arg8 writingDirectionSortedStrokeIdentifiers:(id)arg9 localStrokeWritingOrientations:(const vector_5071ab7f *)arg10 coalescedLastSubstrokes:(id)arg11 groupingConfidence:(double)arg12 lastSubstrokeIndexBeforeMerge:(long long)arg13 firstStrokeOrigin:(struct CGPoint)arg14;
- (id)initWithAncestorIdentifier:(long long)arg1 strokeIdentifiers:(id)arg2 firstStrokeIdentifier:(id)arg3 lastStrokeIdentifier:(id)arg4 bounds:(struct CGRect)arg5 strategyIdentifier:(id)arg6 writingDirectionSortedSubstrokes:(id)arg7 averageWritingOrientation:(struct CGVector)arg8 averageStrokeDeviation:(struct CGVector)arg9 writingDirectionSortedStrokeIdentifiers:(id)arg10 localStrokeWritingOrientations:(const vector_5071ab7f *)arg11 coalescedLastSubstrokes:(id)arg12 groupingConfidence:(double)arg13 firstStrokeOrigin:(struct CGPoint)arg14;
- (id)initWithStrokeIdentifiers:(id)arg1 firstStrokeIdentifier:(id)arg2 lastStrokeIdentifier:(id)arg3 bounds:(struct CGRect)arg4 strategyIdentifier:(id)arg5 writingDirectionSortedSubstrokes:(id)arg6 averageWritingOrientation:(struct CGVector)arg7 averageStrokeDeviation:(struct CGVector)arg8 writingDirectionSortedStrokeIdentifiers:(id)arg9 localStrokeWritingOrientations:(const vector_5071ab7f *)arg10 coalescedLastSubstrokes:(id)arg11 groupingConfidence:(double)arg12 firstStrokeOrigin:(struct CGPoint)arg13;

@end

