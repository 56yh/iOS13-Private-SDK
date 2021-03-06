//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICTrackedParagraph, NSString, UIImage, UIImageView;

@interface ICTrackedParagraphImageInfo : NSObject
{
    BOOL _estimated;
    ICTrackedParagraph *_trackedParagraph;
    NSString *_uuid;
    UIImage _image;
    UIImageView _imageViewIfExists;
    CGRect _boundingRect;
    CGRect _rect;
}

@property(nonatomic) BOOL estimated; // @synthesize estimated=_estimated;
@property(retain, nonatomic) UIImageView *imageViewIfExists; // @synthesize imageViewIfExists=_imageViewIfExists;
@property(nonatomic) CGRect rect; // @synthesize rect=_rect;
@property(nonatomic) CGRect boundingRect; // @synthesize boundingRect=_boundingRect;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) ICTrackedParagraph *trackedParagraph; // @synthesize trackedParagraph=_trackedParagraph;
// - (void).cxx_destruct;

@end

