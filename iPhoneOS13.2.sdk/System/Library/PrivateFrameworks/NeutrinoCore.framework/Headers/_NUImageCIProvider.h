//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NUBufferImage;

@interface _NUImageCIProvider : NSObject
{
    id <NUBufferImage> _image;
}

- (void)provideImageData:(void *)arg1 bytesPerRow:(unsigned long long)arg2 origin:(unsigned long long)arg3:(unsigned long long)arg4 size:(unsigned long long)arg5:(unsigned long long)arg6 userInfo:(id)arg7;
- (void)dealloc;
- (id)initWithImage:(id)arg1;

@end

