//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NUSurfaceTile-Protocol.h>

@class NSString, NUIOSurface;

@interface NUSurfaceTileAdapter : NSObject <NUSurfaceTile>
{
    NUIOSurface *_surface;
    CDStruct_996ac03c _frameRect;
    CDStruct_996ac03c _contentRect;
}

@property(readonly, nonatomic) NUIOSurface *surface; // @synthesize surface=_surface;
@property(readonly, nonatomic) CDStruct_996ac03c contentRect; // @synthesize contentRect=_contentRect;
@property(readonly, nonatomic) CDStruct_996ac03c frameRect; // @synthesize frameRect=_frameRect;
- (id)init;
- (id)initWithFrameRect:(CDStruct_996ac03c)arg1 contentRect:(CDStruct_996ac03c)arg2 surface:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

