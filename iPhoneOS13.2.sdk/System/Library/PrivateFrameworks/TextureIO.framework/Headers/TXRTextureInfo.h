//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

@interface TXRTextureInfo : NSObject
{
    unsigned long long _pixelFormat;
    unsigned long long _alphaInfo;
    // Error parsing type: , name: _dimensions
    unsigned long long _mipmapLevelCount;
    unsigned long long _arrayLength;
    _Bool _cubemap;
    NSError *_error;
}

@property(readonly) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool cubemap; // @synthesize cubemap=_cubemap;
@property(nonatomic) unsigned long long arrayLength; // @synthesize arrayLength=_arrayLength;
@property(nonatomic) unsigned long long mipmapLevelCount; // @synthesize mipmapLevelCount=_mipmapLevelCount;
// Error parsing type for property dimensions:
// Property attributes: T,N,V_dimensions

@property(nonatomic) unsigned long long alphaInfo; // @synthesize alphaInfo=_alphaInfo;
@property(nonatomic) unsigned long long pixelFormat; // @synthesize pixelFormat=_pixelFormat;

@end

