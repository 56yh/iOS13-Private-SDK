//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString;

@interface SBFWallpaperDefaultsWrapper : NSObject
{
    _Bool _supportsCropping;
    _Bool _magnifyEnabled;
    _Bool _portrait;
    _Bool _hasVideo;
    _Bool _wallpaperWasUserSet;
    double _parallaxFactor;
    double _zoomScale;
    NSString *_wallpaperName;
    NSData *_imageHashData;
    long long _wallpaperMode;
    double _stillTimeInVideo;
    NSString *_wallpaperIdentifier;
    NSDictionary *_wallpaperOptions;
    NSData *_colorData;
    NSString *_colorName;
    NSData *_gradientData;
    struct CGRect _cropRect;
}

+ (id)homeScreenWrapperForLegacyDefaults:(id)arg1;
+ (id)lockScreenWrapperForLegacyDefaults:(id)arg1;
@property(retain, nonatomic) NSData *gradientData; // @synthesize gradientData=_gradientData;
@property(retain, nonatomic) NSString *colorName; // @synthesize colorName=_colorName;
@property(retain, nonatomic) NSData *colorData; // @synthesize colorData=_colorData;
@property(nonatomic) _Bool wallpaperWasUserSet; // @synthesize wallpaperWasUserSet=_wallpaperWasUserSet;
@property(retain, nonatomic) NSDictionary *wallpaperOptions; // @synthesize wallpaperOptions=_wallpaperOptions;
@property(retain, nonatomic) NSString *wallpaperIdentifier; // @synthesize wallpaperIdentifier=_wallpaperIdentifier;
@property(nonatomic) double stillTimeInVideo; // @synthesize stillTimeInVideo=_stillTimeInVideo;
@property(nonatomic) _Bool hasVideo; // @synthesize hasVideo=_hasVideo;
@property(nonatomic) long long wallpaperMode; // @synthesize wallpaperMode=_wallpaperMode;
@property(retain, nonatomic) NSData *imageHashData; // @synthesize imageHashData=_imageHashData;
@property(retain, nonatomic) NSString *wallpaperName; // @synthesize wallpaperName=_wallpaperName;
@property(nonatomic) _Bool portrait; // @synthesize portrait=_portrait;
@property(nonatomic) _Bool magnifyEnabled; // @synthesize magnifyEnabled=_magnifyEnabled;
@property(nonatomic) _Bool supportsCropping; // @synthesize supportsCropping=_supportsCropping;
@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(nonatomic) double zoomScale; // @synthesize zoomScale=_zoomScale;
@property(nonatomic) double parallaxFactor; // @synthesize parallaxFactor=_parallaxFactor;
- (id)wallpaperDefaultsDict;
- (id)initWithWallpaperDefaultsDict:(id)arg1;

@end
