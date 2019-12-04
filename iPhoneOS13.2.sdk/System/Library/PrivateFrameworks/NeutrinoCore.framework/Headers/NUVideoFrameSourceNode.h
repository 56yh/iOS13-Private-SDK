//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NUSourceNode.h>

@interface NUVideoFrameSourceNode : NUSourceNode
{
    long long _orientation;
}

- (CDStruct_912cb5d2)pixelSizeWithSourceOptions:(id)arg1;
- (id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id *)arg2;
- (id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long *)arg2 error:(out id *)arg3;
- (id)applySourceOptions:(id)arg1 image:(id)arg2;
- (_Bool)shouldCacheNodeForPipelineState:(id)arg1;
- (long long)sourceOrientation;
- (id)initWithSettings:(id)arg1;
- (id)initWithSettings:(id)arg1 orientation:(long long)arg2;

@end

