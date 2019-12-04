//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NUExportRequest.h>

@class NSArray, NSDictionary, NSProgress, NUColorSpace;

@interface NUVideoExportRequest : NUExportRequest
{
    _Bool _requiresVideoComposition;
    NSDictionary *_outputSettings;
    NSArray *_metadata;
    NSProgress *_progress;
    double _bitRateMultiplicationFactor;
    NUColorSpace *_cachedColorSpace;
}

@property(nonatomic) _Bool requiresVideoComposition; // @synthesize requiresVideoComposition=_requiresVideoComposition;
@property(retain) NUColorSpace *cachedColorSpace; // @synthesize cachedColorSpace=_cachedColorSpace;
@property(nonatomic) double bitRateMultiplicationFactor; // @synthesize bitRateMultiplicationFactor=_bitRateMultiplicationFactor;
@property(retain) NSProgress *progress; // @synthesize progress=_progress;
@property(copy) NSArray *metadata; // @synthesize metadata=_metadata;
@property(copy) NSDictionary *outputSettings; // @synthesize outputSettings=_outputSettings;
- (void)submitWithProgress:(id)arg1 completion:(id /* block */)arg2;
- (void)submit:(id /* block */)arg1;
- (long long)mediaComponentType;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) NUColorSpace *colorSpace;
- (id)newRenderJob;
- (id)initWithComposition:(id)arg1;

@end

