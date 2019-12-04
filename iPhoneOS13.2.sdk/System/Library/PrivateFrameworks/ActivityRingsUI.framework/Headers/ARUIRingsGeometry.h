//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ARUIRingsGeometry : NSObject
{
    unsigned int _circleSegments;
    float _startingRadian;
    float _endingRadian;
}

@property(nonatomic) float endingRadian; // @synthesize endingRadian=_endingRadian;
@property(nonatomic) float startingRadian; // @synthesize startingRadian=_startingRadian;
@property(nonatomic) unsigned int circleSegments; // @synthesize circleSegments=_circleSegments;
- (unsigned short *)disconnectedIndiciesGeometry;
- (unsigned int)disconnectedIndexCount;
- (unsigned short *)connectedIndiciesGeometry;
- (unsigned int)indexCount;
- (void)enumerateVertexGeometryWithBlock:(id /* block */)arg1;
- (unsigned int)vertexCount;
- (id)init;

@end

