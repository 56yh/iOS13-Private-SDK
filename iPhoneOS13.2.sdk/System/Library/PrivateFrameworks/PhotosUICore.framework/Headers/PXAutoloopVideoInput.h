//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, NSURL;

@interface PXAutoloopVideoInput : NSObject
{
    AVAsset *_asset;
    NSURL *_imageURL;
}

+ (id)inputWithAsset:(id)arg1 imageURL:(id)arg2;
@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, copy, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
- (id)initWithAsset:(id)arg1 imageURL:(id)arg2;

@end

