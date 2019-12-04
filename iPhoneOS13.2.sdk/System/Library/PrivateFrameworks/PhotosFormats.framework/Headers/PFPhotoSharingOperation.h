//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class CLLocation, NSDate, NSError, NSObject, NSString, NSURL, PFAssetAdjustments;
@protocol OS_dispatch_queue;

@interface PFPhotoSharingOperation : NSOperation
{
    NSObject<OS_dispatch_queue> *_externalIsolation;
    NSError *_operationError;
    _Bool _operationComplete;
    _Bool _operationSuccess;
    _Bool _shouldStripLocation;
    _Bool _shouldConvertToSRGB;
    _Bool _shouldStripMetadata;
    NSURL *_outputDirectoryURL;
    NSString *_outputFilename;
    CLLocation *_customLocation;
    NSDate *_customDate;
    NSString *_customAccessibilityLabel;
    NSURL *_imageURL;
    NSURL *_resultingFileURL;
    PFAssetAdjustments *__adjustments;
}

+ (id)operationErrorWithCode:(long long)arg1 withDescription:(id)arg2;
+ (_Bool)outputSupportedForTypeIdentifier:(struct __CFString *)arg1;
@property(retain, nonatomic, setter=_setAdjustments:) PFAssetAdjustments *_adjustments; // @synthesize _adjustments=__adjustments;
@property(readonly, copy, nonatomic) NSURL *resultingFileURL; // @synthesize resultingFileURL=_resultingFileURL;
@property(copy, nonatomic, setter=_setImageURL:) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(nonatomic) _Bool shouldStripMetadata; // @synthesize shouldStripMetadata=_shouldStripMetadata;
@property(copy, nonatomic) NSDate *customDate; // @synthesize customDate=_customDate;
@property(nonatomic) _Bool shouldConvertToSRGB; // @synthesize shouldConvertToSRGB=_shouldConvertToSRGB;
@property(nonatomic) _Bool shouldStripLocation; // @synthesize shouldStripLocation=_shouldStripLocation;
@property(copy, nonatomic) NSString *customAccessibilityLabel; // @synthesize customAccessibilityLabel=_customAccessibilityLabel;
@property(copy, nonatomic) CLLocation *customLocation; // @synthesize customLocation=_customLocation;
@property(copy, nonatomic) NSString *outputFilename; // @synthesize outputFilename=_outputFilename;
@property(copy, nonatomic) NSURL *outputDirectoryURL; // @synthesize outputDirectoryURL=_outputDirectoryURL;
@property(readonly, nonatomic) _Bool success;
@property(readonly, nonatomic) float progress;
@property(readonly, nonatomic) NSError *operationError;
- (void)main;
- (id)initWithImageURL:(id)arg1 adjustmentData:(id)arg2;

@end

