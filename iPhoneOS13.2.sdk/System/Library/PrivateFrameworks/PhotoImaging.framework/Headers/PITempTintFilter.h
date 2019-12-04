//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface PITempTintFilter : CIFilter
{
    CIImage *_inputImage;
    double _temperature;
    double _tint;
}

@property(nonatomic) double tint; // @synthesize tint=_tint;
@property(nonatomic) double temperature; // @synthesize temperature=_temperature;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage=_inputImage;
- (void)setInputVectorsForFilter:(id)arg1;
- (id)outputImage;

@end

