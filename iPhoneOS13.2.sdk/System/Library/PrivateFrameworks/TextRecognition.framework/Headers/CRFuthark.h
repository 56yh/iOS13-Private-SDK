//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CRFuthark : NSObject
{
}

+ (id)runFutharkOnImage:(id)arg1 recognizeFeatures:(_Bool)arg2 withMaxNumScales:(unsigned long long)arg3 withThresholdingAlgorithm:(long long)arg4 options:(id)arg5 withProgressHandler:(id /* block */)arg6;
+ (id)runFutharkOnImage:(id)arg1 recognizeFeatures:(_Bool)arg2 options:(id)arg3;
+ (id)detectAndRecognizeTextInImage:(id)arg1 withMaxNumScales:(unsigned long long)arg2 options:(id)arg3 withProgressHandler:(id /* block */)arg4;
+ (id)detectAndRecognizeTextInImage:(id)arg1 options:(id)arg2 withProgressHandler:(id /* block */)arg3;
+ (id)detectAndRecognizeTextInImage:(id)arg1 options:(id)arg2;
+ (id)detectTextInImage:(id)arg1 withMaxNumScales:(unsigned long long)arg2 withThresholdingAlgorithm:(long long)arg3 options:(id)arg4;
+ (id)detectTextInImage:(id)arg1 withMaxNumScales:(unsigned long long)arg2 options:(id)arg3;
+ (id)detectTextInImage:(id)arg1 options:(id)arg2;

@end

