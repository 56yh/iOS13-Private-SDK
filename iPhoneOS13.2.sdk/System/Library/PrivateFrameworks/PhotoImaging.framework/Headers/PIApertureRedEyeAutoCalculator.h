//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NUAutoCalculator.h>

@class NUFaceDetectionRequest;

@interface PIApertureRedEyeAutoCalculator : NUAutoCalculator
{
    NUFaceDetectionRequest *_faceRequest;
}

- (id)apertureRedEyeResultFromFaceObservations:(id)arg1 imageSize:(CDStruct_912cb5d2)arg2;
- (void)submit:(id /* block */)arg1;
- (void)cancel;

@end

