//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PXTilingCoordinateSpace : NSObject
{
    PXTilingCoordinateSpace *_parentSpace;
    struct CGAffineTransform _transform;
}

@property(nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
@property(nonatomic) __weak PXTilingCoordinateSpace *parentSpace; // @synthesize parentSpace=_parentSpace;
@property(readonly, nonatomic) void *identifier;
- (id)init;

@end

