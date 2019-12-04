//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideosUICore/VUIAsynchronousOperation.h>

#import <VideosUI/VUIImageLoadingOperation-Protocol.h>

@class NSError, NSString, TVImage;
@protocol VUIImageLoadParams;

__attribute__((visibility("hidden")))
@interface VUIImageLoadParamsOperation : VUIAsynchronousOperation <VUIImageLoadingOperation>
{
    _Bool _cropToFit;
    TVImage *_image;
    unsigned long long _scalingResult;
    NSError *_error;
    id <VUIImageLoadParams> _params;
    struct CGSize _scaleToSize;
}

@property(retain, nonatomic) id <VUIImageLoadParams> params; // @synthesize params=_params;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) unsigned long long scalingResult; // @synthesize scalingResult=_scalingResult;
@property(retain, nonatomic) TVImage *image; // @synthesize image=_image;
@property(nonatomic) _Bool cropToFit; // @synthesize cropToFit=_cropToFit;
@property(nonatomic) struct CGSize scaleToSize; // @synthesize scaleToSize=_scaleToSize;
- (id)initWithParams:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

