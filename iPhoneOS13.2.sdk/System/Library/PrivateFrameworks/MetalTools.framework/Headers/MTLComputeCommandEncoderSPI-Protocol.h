//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MetalTools/MTLComputeCommandEncoder-Protocol.h>

@class NSData;
@protocol MTLBuffer;

@protocol MTLComputeCommandEncoderSPI <MTLComputeCommandEncoder>
- (NSData *)newKernelDebugInfo;

@optional
- (void)dispatchThreadsWithIndirectBuffer:(id <MTLBuffer>)arg1 indirectBufferOffset:(unsigned long long)arg2;
@end

