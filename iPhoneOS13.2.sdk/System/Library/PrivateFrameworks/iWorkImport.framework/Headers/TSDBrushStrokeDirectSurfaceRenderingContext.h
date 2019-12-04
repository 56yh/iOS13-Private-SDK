//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IOSurface;
@protocol MTLDevice;

__attribute__((visibility("hidden")))
@interface TSDBrushStrokeDirectSurfaceRenderingContext : NSObject
{
    IOSurface *_surface;
    double _contentsScale;
    struct CGColorSpace *_destinationColorSpaceOverride;
    id <MTLDevice> _metalDeviceOverride;
    struct CGRect _frame;
    struct CGAffineTransform _transform;
}

@property(readonly, nonatomic) id <MTLDevice> metalDeviceOverride; // @synthesize metalDeviceOverride=_metalDeviceOverride;
@property(readonly, nonatomic) struct CGColorSpace *destinationColorSpaceOverride; // @synthesize destinationColorSpaceOverride=_destinationColorSpaceOverride;
@property(readonly, nonatomic) double contentsScale; // @synthesize contentsScale=_contentsScale;
@property(readonly, nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
@property(readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(readonly, nonatomic) IOSurface *surface; // @synthesize surface=_surface;
- (void)dealloc;
- (id)initWithSurface:(id)arg1 frame:(struct CGRect)arg2 transform:(struct CGAffineTransform)arg3 contentsScale:(double)arg4 destinationColorSpaceOverride:(struct CGColorSpace *)arg5 metalDeviceOverride:(id)arg6;

@end

