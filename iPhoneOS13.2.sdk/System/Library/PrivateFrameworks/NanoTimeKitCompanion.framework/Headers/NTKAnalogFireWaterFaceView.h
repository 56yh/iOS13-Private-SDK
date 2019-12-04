//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKAnalogVideoFaceView.h>

@class NSDictionary;

@interface NTKAnalogFireWaterFaceView : NTKAnalogVideoFaceView
{
    unsigned long long _currentColor;
    unsigned long long _currentDialShape;
    NSDictionary *_dataSources;
}

+ (id)_swatchImageForColorOption:(id)arg1 forDevice:(id)arg2;
+ (id)_nameForColor:(unsigned long long)arg1;
+ (id)_swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2;
@property(retain, nonatomic) NSDictionary *dataSources; // @synthesize dataSources=_dataSources;
@property(nonatomic) unsigned long long currentDialShape; // @synthesize currentDialShape=_currentDialShape;
@property(nonatomic) unsigned long long currentColor; // @synthesize currentColor=_currentColor;
- (id)_swatchImageForColor:(unsigned long long)arg1 andDialShape:(unsigned long long)arg2;
- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (_Bool)_wantsConstantSpeedZoom;
- (void)reloadDataSources;
- (void)setupDataSources;
- (void)_updateDialSize;
- (id)imageForEditOption:(id)arg1;
- (id)_complicationsCompanionForegroundColor;
- (void)_customizeVideoPlayerOnSetup;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;

@end

