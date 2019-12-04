//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PKMetalBuffer;
@protocol MTLBuffer;

@interface PKMetalStrokeRenderCacheBuffer : NSObject
{
    PKMetalBuffer *_buffer;
    unsigned long long _offset;
    unsigned long long _numVertices;
}

@property(readonly, nonatomic) unsigned long long numVertices; // @synthesize numVertices=_numVertices;
@property(readonly, nonatomic) unsigned long long offset; // @synthesize offset=_offset;
- (_Bool)lockPurgeableResourcesAddToSet:(id)arg1;
@property(readonly, nonatomic) id <MTLBuffer> vertexBuffer; // @dynamic vertexBuffer;
- (id)initWithBuffer:(id)arg1 offset:(unsigned long long)arg2 numVertices:(unsigned long long)arg3;
- (id)init;

@end

