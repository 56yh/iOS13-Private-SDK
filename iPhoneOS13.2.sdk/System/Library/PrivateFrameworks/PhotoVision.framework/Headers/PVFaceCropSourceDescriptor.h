//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class PVFace, PVImage;

@interface PVFaceCropSourceDescriptor : NSObject <NSCopying>
{
    PVFace *_face;
    PVImage *_image;
}

+ (id)descriptorForFace:(id)arg1 image:(id)arg2;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)image;
- (id)face;
- (id)initWithFace:(id)arg1 image:(id)arg2;

@end

