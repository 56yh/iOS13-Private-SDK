//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MetalTools/MTLRenderPipelineState-Protocol.h>

@class MTLDebugInstrumentationData, NSData;

@protocol MTLRenderPipelineStateSPI <MTLRenderPipelineState>
@property(readonly, retain, nonatomic) MTLDebugInstrumentationData *fragmentDebugInstrumentationData;
@property(readonly, retain, nonatomic) MTLDebugInstrumentationData *vertexDebugInstrumentationData;
@property(readonly) unsigned long long uniqueIdentifier;
- (NSData *)newFragmentShaderDebugInfo;
- (NSData *)newVertexShaderDebugInfo;

@optional
@property(nonatomic) unsigned long long resourceIndex;
@end

