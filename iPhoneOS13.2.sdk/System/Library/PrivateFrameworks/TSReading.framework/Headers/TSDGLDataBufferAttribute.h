//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TSDGLDataArrayBuffer, TSDGLDataBuffer;

@interface TSDGLDataBufferAttribute : NSObject
{
    _Bool _isNormalized;
    unsigned int _bufferUsage;
    int _componentCount;
    int _locationInShader;
    NSString *_name;
    long long _dataType;
    unsigned long long _bufferOffset;
    TSDGLDataArrayBuffer *_dataArrayBuffer;
    TSDGLDataBuffer *_dataBuffer;
}

+ (id)attributeWithName:(id)arg1 bufferUsage:(unsigned int)arg2 dataType:(long long)arg3 normalized:(_Bool)arg4 componentCount:(unsigned long long)arg5;
@property(nonatomic) TSDGLDataBuffer *dataBuffer; // @synthesize dataBuffer=_dataBuffer;
@property(nonatomic) TSDGLDataArrayBuffer *dataArrayBuffer; // @synthesize dataArrayBuffer=_dataArrayBuffer;
@property(nonatomic) unsigned long long bufferOffset; // @synthesize bufferOffset=_bufferOffset;
@property(nonatomic) int locationInShader; // @synthesize locationInShader=_locationInShader;
@property(readonly, nonatomic) _Bool isNormalized; // @synthesize isNormalized=_isNormalized;
@property(readonly, nonatomic) int componentCount; // @synthesize componentCount=_componentCount;
@property(readonly, nonatomic) long long dataType; // @synthesize dataType=_dataType;
@property(readonly, nonatomic) unsigned int bufferUsage; // @synthesize bufferUsage=_bufferUsage;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
- (void)setComponentCount:(int)arg1;
- (void)setBufferUsage:(unsigned int)arg1;
- (id)initWithName:(id)arg1 bufferUsage:(unsigned int)arg2 dataType:(long long)arg3 normalized:(_Bool)arg4 componentCount:(unsigned long long)arg5;

@end

