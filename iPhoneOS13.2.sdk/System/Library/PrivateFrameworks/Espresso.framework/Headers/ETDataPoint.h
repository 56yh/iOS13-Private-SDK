//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ETDataPoint : NSObject
{
    map_b74cfcc1 image_buffers;
    struct map<std::__1::basic_string<char>, ETDataPoint_buffer, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, ETDataPoint_buffer>>> buffers;
}

- (id).cxx_construct;
- (map_8a5bf7af)getSampleData;
- (void)dealloc;
- (float *)bufferWithKey:(id)arg1;
- (struct vImage_Buffer)imageWithKey:(id)arg1;
- (void)setData:(float *)arg1 size:(unsigned long long)arg2 forKey:(id)arg3 freeWhenDone:(_Bool)arg4;
- (void)setImage:(struct vImage_Buffer)arg1 forKey:(id)arg2;
- (void)iterateBuffersByKey:(id /* block */)arg1;

@end

