//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCH3DDataBuffer.h>

__attribute__((visibility("hidden")))
@interface TSCH3DVectorN3DDataBuffer : TSCH3DDataBuffer
{
    struct DataBuffer3DDimension mDimension;
    vector_aab22ae2 mContainer;
}

+ (id)bufferWithCapacity3DDimension:(const struct DataBuffer3DDimension *)arg1;
- (id).cxx_construct;
- (void)fillCapacity;
- (const void *)data;
@property(readonly, nonatomic) vector_aab22ae2 *container;
- (unsigned long long)componentByteSize;
- (int)componentType;
- (unsigned long long)components;
- (unsigned long long)count;
- (tvec3_c2818ced)size;
- (id)initWithCapacity3DDimension:(const struct DataBuffer3DDimension *)arg1;

@end

