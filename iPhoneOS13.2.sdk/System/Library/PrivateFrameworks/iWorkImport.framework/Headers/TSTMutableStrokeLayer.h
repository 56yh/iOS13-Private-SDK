//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSTStrokeLayer.h>

__attribute__((visibility("hidden")))
@interface TSTMutableStrokeLayer : TSTStrokeLayer
{
}

- (void)applyStroke:(id)arg1 atIndexes:(id)arg2 order:(int)arg3 applyStroke:(id)arg4 atIndexes:(id)arg5 order:(int)arg6 applyStroke:(id)arg7 atIndexes:(id)arg8 order:(int)arg9 applyStroke:(id)arg10 atIndexes:(id)arg11 order:(int)arg12 applyStroke:(id)arg13 atIndexes:(id)arg14 order:(int)arg15;
- (void)flattenStrokeOrder;
- (void)moveRange:(struct _NSRange)arg1 toIndex:(long long)arg2;
- (void)swapSegmentAtIndex:(long long)arg1 withSegmentAtIndex:(long long)arg2;
- (void)removeRange:(struct TSTSimpleRange)arg1;
- (void)insertSpaceAtRange:(struct TSTSimpleRange)arg1;
- (void)invalidateRange:(struct TSTSimpleRange)arg1;
- (void)invalidate;
- (_Bool)hasStrokeInRange:(struct TSTSimpleRange)arg1;
- (void)setStroke:(id)arg1 inRange:(struct TSTSimpleRange)arg2 order:(int)arg3;
- (void)appendStroke:(id)arg1 inRange:(struct TSTSimpleRange)arg2 order:(int)arg3;

// Remaining properties
@property(nonatomic) unsigned int columnOrRowIndex; // @dynamic columnOrRowIndex;

@end

