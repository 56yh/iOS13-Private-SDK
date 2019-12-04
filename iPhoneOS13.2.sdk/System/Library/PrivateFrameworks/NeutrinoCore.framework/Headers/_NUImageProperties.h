//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NUImageProperties-Protocol.h>

@class NSDictionary, NSString, NSURL;
@protocol NURAWImageProperties;

@interface _NUImageProperties : NSObject <NUImageProperties>
{
    _Bool _isFusedOvercapture;
    NSURL *_url;
    NSDictionary *_metadata;
    struct CGColorSpace *_colorSpace;
    long long _orientation;
    NSString *_fileUTI;
    long long _alphaInfo;
    long long _componentInfo;
    NSDictionary *_auxiliaryImagesProperties;
    id <NURAWImageProperties> _rawProperties;
    CDStruct_d58201db _size;
}

@property(retain) id <NURAWImageProperties> rawProperties; // @synthesize rawProperties=_rawProperties;
@property(retain) NSDictionary *auxiliaryImagesProperties; // @synthesize auxiliaryImagesProperties=_auxiliaryImagesProperties;
@property _Bool isFusedOvercapture; // @synthesize isFusedOvercapture=_isFusedOvercapture;
@property long long componentInfo; // @synthesize componentInfo=_componentInfo;
@property long long alphaInfo; // @synthesize alphaInfo=_alphaInfo;
@property(retain) NSString *fileUTI; // @synthesize fileUTI=_fileUTI;
@property long long orientation; // @synthesize orientation=_orientation;
@property CDStruct_912cb5d2 size; // @synthesize size=_size;
@property struct CGColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property(retain) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain) NSURL *url; // @synthesize url=_url;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

