//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NPTuscanyLoopbackConnection : NSObject
{
    unsigned long long _blobSizes[4];
    struct nw_protocol _protocol;
    struct nw_frame_array_s _currentInputFrames;
    _Bool _waitingForOutput;
    unsigned long long _currentBlobSizeIndex;
}

@property _Bool waitingForOutput; // @synthesize waitingForOutput=_waitingForOutput;
@property unsigned long long currentBlobSizeIndex; // @synthesize currentBlobSizeIndex=_currentBlobSizeIndex;
- (void)notifyInputHandler;
- (void)handleOutputFrame:(id)arg1;
- (unsigned int)addInputFramesToArray:(struct nw_frame_array_s *)arg1 maximumBytes:(unsigned int)arg2 minimumBytes:(unsigned int)arg3 maximumFrameCount:(unsigned int)arg4;
- (unsigned int)addOutputFramesToArray:(struct nw_frame_array_s *)arg1 maximumBytes:(unsigned int)arg2 minimumBytes:(unsigned int)arg3 maximumFrameCount:(unsigned int)arg4;
- (void)handleDetachedFromProtocol;
@property(readonly) struct nw_protocol *protocol;
- (void)dealloc;
- (id)init;

@end

