//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NUExportJob.h>

@interface NUVideoExportJob : NUExportJob
{
    CDStruct_1b6d18a9 _livePhotoKeyFrameTime;
}

- (_Bool)renderVideoFrames:(id)arg1 intoPixelBuffer:(struct __CVBuffer *)arg2 time:(CDStruct_1b6d18a9)arg3 colorSpace:(id)arg4 error:(out id *)arg5;
- (_Bool)writeVideoFrom:(id)arg1 toWriter:(id)arg2 stillImageTime:(CDStruct_1b6d18a9)arg3 createCustomMetadata:(_Bool)arg4 geometryTransform:(id)arg5 inputSize:(struct CGSize)arg6 outputSize:(struct CGSize)arg7 error:(out id *)arg8;
- (_Bool)render:(out id *)arg1;
- (id)generateVideoComposition:(out id *)arg1;
- (_Bool)requiresVideoComposition;
- (_Bool)prepare:(out id *)arg1;
- (id)scalePolicy;
- (_Bool)wantsOutputVideo;
- (_Bool)wantsOutputGeometry;
- (id)videoExportRequest;
- (id)initWithExportRequest:(id)arg1;
- (id)initWithVideoExportRequest:(id)arg1;

@end

