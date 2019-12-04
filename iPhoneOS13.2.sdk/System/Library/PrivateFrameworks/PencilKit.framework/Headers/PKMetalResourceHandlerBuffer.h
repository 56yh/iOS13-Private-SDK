//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PKMetalBuffer;
@protocol MTLDevice;

@interface PKMetalResourceHandlerBuffer : NSObject
{
    id <MTLDevice> _device;
    PKMetalBuffer *_buffer;
    unsigned long long _currentOffset;
    unsigned long long _bufferSize;
    unsigned long long _options;
    _Bool _purgeable;
}

- (id)newBufferWithLength:(unsigned long long)arg1 bytes:(const void *)arg2 outOffset:(unsigned long long *)arg3;
- (id)initWithSize:(unsigned long long)arg1 options:(unsigned long long)arg2 device:(id)arg3 purgeable:(_Bool)arg4;

@end

