//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreHandwriting/CHSketchRecognitionResult.h>

@interface CHTriangleRecognitionResult : CHSketchRecognitionResult
{
    struct CGPoint _vertex1;
    struct CGPoint _vertex2;
    struct CGPoint _vertex3;
}

@property(readonly) struct CGPoint vertex3; // @synthesize vertex3=_vertex3;
@property(readonly) struct CGPoint vertex2; // @synthesize vertex2=_vertex2;
@property(readonly) struct CGPoint vertex1; // @synthesize vertex1=_vertex1;
- (id)initWithString:(id)arg1 score:(double)arg2 rotation:(double)arg3 vertex1:(struct CGPoint)arg4 vertex2:(struct CGPoint)arg5 vertex3:(struct CGPoint)arg6;

@end

