//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, UIImage;

@interface AVTPreset : NSObject
{
    long long _category;
    NSString *_identifier;
    NSArray *_assets;
    NSString *_variant;
    float _intensity;
    _Bool _mirrored;
    NSArray *_dependencies;
    NSDictionary *_tags;
    NSDictionary *_specializationSettings;
}

+ (id)secondaryColorPresetsForCategory:(long long)arg1;
+ (id)colorPresetsForCategory:(long long)arg1;
+ (id)colorPresetsForCategory:(long long)arg1 colorIndex:(unsigned long long)arg2;
+ (id)_colorPresetsForCategory:(long long)arg1 palette:(id)arg2;
+ (void)enumerateVariantDependenciesForComponentType:(long long)arg1 usingBlock:(id /* block */)arg2;
+ (void)registerVariantNamed:(id)arg1 forComponentType:(long long)arg2;
+ (id)presetWithCategory:(long long)arg1 identifier:(id)arg2;
+ (id)findPresetWithIdentifier:(id)arg1 inPresets:(id)arg2;
+ (id)availablePresetsForCategory:(long long)arg1;
+ (void)loadPresets;
@property(readonly) NSDictionary *specializationSettings; // @synthesize specializationSettings=_specializationSettings;
@property(readonly, nonatomic) NSDictionary *tags; // @synthesize tags=_tags;
- (void)rebuildSpecializationSettings;
- (id)cache;
- (void)applyPresetOnAvatar:(id)arg1;
- (id)colorPresets;
- (void)enumerateVariantDependencies:(id /* block */)arg1;
- (void)enumeratePresetDependencies:(id /* block */)arg1;
- (_Bool)hasDependency;
- (float)intensity;
- (id)assets;
@property(readonly, nonatomic) _Bool hasComponent;
- (struct UIImage *)maskImage;
@property(readonly, nonatomic) UIImage *thumbnail;
@property(readonly, nonatomic) NSString *localizedName;
@property(readonly, nonatomic) NSString *displayableName;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) long long category;
- (id)description;
- (id)init;

@end

