//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UINamedLayerStack-Protocol.h>

@class NSArray, NSString, _UIStackedImageSingleNamedLayerImage;

__attribute__((visibility("hidden")))
@interface _UIStackedImageSingleNamedStack : NSObject <UINamedLayerStack>
{
    _UIStackedImageSingleNamedLayerImage *_layerImage;
}

@property(retain, nonatomic) _UIStackedImageSingleNamedLayerImage *layerImage; // @synthesize layerImage=_layerImage;
@property(readonly, nonatomic) struct CGImage *flattenedImage;
@property(readonly, nonatomic) double scale;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, nonatomic) NSArray *layers;
@property(readonly, nonatomic) NSString *name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool flatImageContainsCornerRadius;
@property(readonly) NSUInteger hash;
@property(readonly, nonatomic) id radiosityImage;
@property(readonly, nonatomic) struct CGSize radiosityImageScale;
@property(readonly) Class superclass;

@end

