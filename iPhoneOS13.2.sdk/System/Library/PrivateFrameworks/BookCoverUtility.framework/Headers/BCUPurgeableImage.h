//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BookCoverUtility/BCUPurgeableImage-Protocol.h>

@class NSString;

@interface BCUPurgeableImage : NSObject <BCUPurgeableImage>
{
    struct CGImage *_image;
    double _contentsScale;
}

@property(readonly, nonatomic) double contentsScale; // @synthesize contentsScale=_contentsScale;
- (_Bool)markAsNonVolatile;
- (_Bool)markAsVolatile;
@property(readonly, nonatomic) struct CGImage *CGImage;
@property(readonly, nonatomic) id layerContents;
@property(readonly, nonatomic) struct CGSize size;
- (void)dealloc;
- (id)initWithImage:(struct CGImage *)arg1 contentsScale:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

