//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, NSString;

@protocol MTMaterialFiltering 
@property(readonly, nonatomic, getter=isBlurAtEnd) _Bool blurAtEnd;
@property(readonly, copy, nonatomic) NSString *blurInputQuality;
@property(readonly, nonatomic) double backdropScale;
@property(readonly, nonatomic) double zoom;
@property(readonly, nonatomic) struct CAColorMatrix colorMatrix;
@property(readonly, nonatomic) double brightness;
@property(readonly, nonatomic) double saturation;
@property(readonly, nonatomic, getter=isAverageColorEnabled) _Bool averageColorEnabled;
@property(readonly, nonatomic) double blurRadius;
@property(readonly, copy, nonatomic) NSArray *luminanceValues;
@property(readonly, nonatomic) double luminanceAmount;
@end
