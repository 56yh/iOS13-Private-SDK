//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProactiveML/PMLDataChunk.h>

@interface PMLDataChunkDenseFloatVector : PMLDataChunk
{
}

+ (id)chunkWithVector:(const float )arg1 count:(int)arg2;
+ (unsigned int)dataChunkType;
@property(readonly, nonatomic) int count;
@property(readonly, nonatomic) const float vector;
- (id)toVec;

@end

