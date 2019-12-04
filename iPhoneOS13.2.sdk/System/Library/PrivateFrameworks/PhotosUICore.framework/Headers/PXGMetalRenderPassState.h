//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTLBuffer, MTLDevice;

@interface PXGMetalRenderPassState : NSObject
{
    unsigned int *_spriteIndexes;
    CDStruct_183601bc *_textureInfos;
    id <MTLBuffer> _spriteIndexesMetalBuffer;
    id <MTLBuffer> _spriteTextureInfosMetalBuffer;
    id <MTLDevice> _device;
    long long _capacity;
}

@property(readonly, nonatomic) long long capacity; // @synthesize capacity=_capacity;
@property(readonly, nonatomic) id <MTLDevice> device; // @synthesize device=_device;
@property(readonly, nonatomic) id <MTLBuffer> spriteTextureInfosMetalBuffer; // @synthesize spriteTextureInfosMetalBuffer=_spriteTextureInfosMetalBuffer;
@property(readonly, nonatomic) id <MTLBuffer> spriteIndexesMetalBuffer; // @synthesize spriteIndexesMetalBuffer=_spriteIndexesMetalBuffer;
@property(readonly, nonatomic) CDStruct_183601bc *textureInfos; // @synthesize textureInfos=_textureInfos;
@property(readonly, nonatomic) unsigned int *spriteIndexes; // @synthesize spriteIndexes=_spriteIndexes;
- (id)description;
- (id)initWithDevice:(id)arg1 capacity:(long long)arg2;

@end

