//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKImageProvider, CLKProgressProvider;

@interface CLKComplicationTemplateModularSmallProgressRingImage : CLKComplicationTemplate
{
    CLKImageProvider *_imageProvider;
    CLKProgressProvider *_progressProvider;
    long long _ringStyle;
}

+ (struct CGSize)imageSize;
@property(nonatomic) long long ringStyle; // @synthesize ringStyle=_ringStyle;
@property(copy, nonatomic) CLKProgressProvider *progressProvider; // @synthesize progressProvider=_progressProvider;
@property(copy, nonatomic) CLKImageProvider *imageProvider; // @synthesize imageProvider=_imageProvider;
- (void)_enumerateIntegerKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateProgressProviderKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateImageProviderKeysWithBlock:(id /* block */)arg1;
- (_Bool)isCompatibleWithFamily:(long long)arg1;

@end

