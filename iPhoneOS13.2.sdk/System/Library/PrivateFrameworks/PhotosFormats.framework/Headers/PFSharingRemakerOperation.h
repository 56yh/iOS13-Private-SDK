//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL, PFPhotoSharingOperation, PFVideoSharingOperation;

@interface PFSharingRemakerOperation : NSObject
{
    long long _inputType;
    NSURL *_imageOutputURL;
    NSURL *_videoOutputURL;
    NSString *__uuid;
    PFVideoSharingOperation *__videoOperation;
    PFPhotoSharingOperation *__imageOperation;
}

+ (id)remakerOperationWithInputType:(long long)arg1 videoURL:(id)arg2 imageURL:(id)arg3 adjustmentData:(id)arg4;
@property(retain, nonatomic, setter=_setImageOperation:) PFPhotoSharingOperation *_imageOperation; // @synthesize _imageOperation=__imageOperation;
@property(retain, nonatomic, setter=_setVideoOperation:) PFVideoSharingOperation *_videoOperation; // @synthesize _videoOperation=__videoOperation;
@property(copy, nonatomic, setter=_setUUID:) NSString *_uuid; // @synthesize _uuid=__uuid;
@property(copy, nonatomic, setter=_setVideoOutputURL:) NSURL *videoOutputURL; // @synthesize videoOutputURL=_videoOutputURL;
@property(copy, nonatomic, setter=_setImageOutputURL:) NSURL *imageOutputURL; // @synthesize imageOutputURL=_imageOutputURL;
@property(nonatomic, setter=_setInputType:) long long inputType; // @synthesize inputType=_inputType;
- (id)init;

@end

