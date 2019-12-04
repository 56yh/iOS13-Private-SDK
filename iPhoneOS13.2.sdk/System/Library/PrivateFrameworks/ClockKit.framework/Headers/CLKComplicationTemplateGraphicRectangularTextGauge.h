//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKFullColorImageProvider, CLKGaugeProvider, CLKTextProvider;

@interface CLKComplicationTemplateGraphicRectangularTextGauge : CLKComplicationTemplate
{
    CLKFullColorImageProvider *_headerImageProvider;
    CLKTextProvider *_headerTextProvider;
    CLKTextProvider *_body1TextProvider;
    CLKGaugeProvider *_gaugeProvider;
}

@property(copy, nonatomic) CLKGaugeProvider *gaugeProvider; // @synthesize gaugeProvider=_gaugeProvider;
@property(copy, nonatomic) CLKTextProvider *body1TextProvider; // @synthesize body1TextProvider=_body1TextProvider;
@property(copy, nonatomic) CLKTextProvider *headerTextProvider; // @synthesize headerTextProvider=_headerTextProvider;
@property(copy, nonatomic) CLKFullColorImageProvider *headerImageProvider; // @synthesize headerImageProvider=_headerImageProvider;
- (void)_enumerateGaugeProviderKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)arg1;
- (_Bool)isCompatibleWithFamily:(long long)arg1;

@end

