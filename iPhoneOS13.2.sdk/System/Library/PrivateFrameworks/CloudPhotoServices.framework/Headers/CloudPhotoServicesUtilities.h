//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CloudPhotoServicesUtilities : NSObject
{
}

+ (void)getDimensionsFromImageProperties:(id)arg1 orientationOut:(int *)arg2 widthOut:(int *)arg3 heightOut:(int *)arg4;
+ (struct CGImageSource *)newImageSourceFromImageAtURL:(id)arg1;
+ (struct CGSize)dimensionsForAVAsset:(id)arg1;
+ (struct CGSize)sizeOfImageAtURL:(id)arg1 orientationOut:(int *)arg2;

@end

