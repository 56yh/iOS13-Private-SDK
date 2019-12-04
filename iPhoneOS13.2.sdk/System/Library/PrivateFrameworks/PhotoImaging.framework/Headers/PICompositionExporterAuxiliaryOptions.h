//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoImaging/PICompositionExporterOptions.h>

@class NSURL, NUAdjustment;

@interface PICompositionExporterAuxiliaryOptions : PICompositionExporterOptions
{
    _Bool _renderCompanionResources;
    NSURL *_primaryURL;
    NSURL *_videoComplementURL;
    NSURL *_videoPosterFrameURL;
    NUAdjustment *_reframeCropAdjustment;
    NUAdjustment *_reframeVideoAdjustment;
}

@property(retain) NUAdjustment *reframeVideoAdjustment; // @synthesize reframeVideoAdjustment=_reframeVideoAdjustment;
@property(retain) NUAdjustment *reframeCropAdjustment; // @synthesize reframeCropAdjustment=_reframeCropAdjustment;
@property _Bool renderCompanionResources; // @synthesize renderCompanionResources=_renderCompanionResources;
@property(retain) NSURL *videoPosterFrameURL; // @synthesize videoPosterFrameURL=_videoPosterFrameURL;
@property(retain) NSURL *videoComplementURL; // @synthesize videoComplementURL=_videoComplementURL;
@property(retain) NSURL *primaryURL; // @synthesize primaryURL=_primaryURL;

@end

