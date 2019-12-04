//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSSStyle.h>

#import <iWorkImport/TSSPreset-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSWPListStyle : TSSStyle <TSSPreset>
{
}

+ (id)presetStyleDescriptor;
+ (id)defaultArrayForProperty:(int)arg1;
+ (id)p_arrayValuedProperties;
+ (id)languageSpecificStylesForLanguages:(id)arg1 theme:(id)arg2 stylesheet:(id)arg3;
+ (id)pDefaultLabelValuesForLabelTypeProperty:(int)arg1 context:(id)arg2;
+ (id)pLabelTypeArrayForType:(int)arg1;
+ (id)nameForLanguageSpecificListStyle:(int)arg1 withLocal:(id)arg2;
+ (id)propertyMapForListTextBullet:(id)arg1;
+ (id)propertyMapForListNumberType:(int)arg1;
+ (id)listStyleWithTextBullet:(id)arg1 inStyleSheet:(id)arg2 withTextBulletPresetStyle:(id)arg3;
+ (id)listStyleWithNumberType:(int)arg1 inStyleSheet:(id)arg2 withNumberedPresetStyle:(id)arg3;
+ (id)textBulletListStyleForPresets:(id)arg1;
+ (id)numberedListStyleForPresets:(id)arg1;
+ (id)harvardStyleWithContext:(id)arg1;
+ (id)defaultStyleWithContext:(id)arg1 type:(int)arg2;
+ (id)defaultStyleWithContext:(id)arg1;
+ (id)defaultPropertyMap;
+ (id)defaultLabelTypes;
+ (id)defaultLabelStrings;
+ (id)defaultLabelTieredNumbers;
+ (id)defaultLabelNumberTypes;
+ (id)defaultLabelImages;
+ (id)defaultLabelGeometries;
+ (id)defaultLabelIndents;
+ (id)defaultTextIndents;
+ (void)pGetDefaultTextIndentFloats:(float [9])arg1;
+ (_Bool)defaultTieredNumber;
+ (int)defaultLabelNumberType;
+ (id)defaultLabelString;
+ (int)firstLabelTypeForPropertyMapping:(id)arg1;
+ (int)labelTypeForLevel:(unsigned long long)arg1 forPropertyMapping:(id)arg2;
+ (int)effectiveTypeForLevel:(unsigned long long)arg1 forPropertyMapping:(id)arg2;
+ (int)pLabelTypeForLevel:(unsigned long long)arg1 forPropertyMapping:(id)arg2 includeDegenerateLevels:(_Bool)arg3;
+ (_Bool)deprecated_isDefaultMissingBulletImage:(id)arg1;
+ (id)additionalBulletStrings;
+ (id)textInspectorBulletStrings;
+ (id)propertiesAllowingNSNull;
+ (id)properties;
+ (id)stickyOverrideProperties;
- (id)p_characterFillByResolvingWithParagraphStyle:(id)arg1;
- (id)resolvedValueForProperty:(int)arg1 inStyles:(id)arg2;
- (_Bool)wantsCustomResolveLogicForProperty:(int)arg1 forStyles:(id)arg2;
- (id)additionalPropertiesNeededForVariationWithPropertyMap:(id)arg1;
- (id)baseStyleForTopicNumbers;
@property(readonly, nonatomic) NSString *presetKind;
- (double)CGFloatValueForProperty:(int)arg1 atIndex:(unsigned long long)arg2;
- (double)doubleValueForProperty:(int)arg1 atIndex:(unsigned long long)arg2;
- (float)floatValueForProperty:(int)arg1 atIndex:(unsigned long long)arg2;
- (int)intValueForProperty:(int)arg1 atIndex:(unsigned long long)arg2;
- (id)boxedObjectForProperty:(int)arg1 atIndex:(unsigned long long)arg2;
- (id)objectForProperty:(int)arg1 atIndex:(unsigned long long)arg2;
- (id)parentStyleForFixingOrphanVariation;
-     // Error parsing type: v32@0:8^{ListStyleArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedField<int>=ii(Pointer=^{Arena}^{Rep})}{RepeatedField<float>=ii(Pointer=^{Arena}^{Rep})}{RepeatedField<float>=ii(Pointer=^{Arena}^{Rep})}{RepeatedPtrField<TSWP::ListStyleArchive_LabelGeometry>=^{Arena}ii^{Rep}}{RepeatedField<int>=ii(Pointer=^{Arena}^{Rep})}{RepeatedPtrField<std::__1::basic_string<char> >=^{Arena}ii^{Rep}}{RepeatedPtrField<TSWP::ListStyleArchive_LabelImage>=^{Arena}ii^{Rep}}{RepeatedField<bool>=ii(Pointer=^{Arena}^{Rep})}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{StyleArchive}^{ShadowArchive}^{Color}IBBBi}16@24, name: saveToArchive:archiver:
- (void)saveToArchiver:(id)arg1;
-     // Error parsing type: v32@0:8r^{ListStyleArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedField<int>=ii(Pointer=^{Arena}^{Rep})}{RepeatedField<float>=ii(Pointer=^{Arena}^{Rep})}{RepeatedField<float>=ii(Pointer=^{Arena}^{Rep})}{RepeatedPtrField<TSWP::ListStyleArchive_LabelGeometry>=^{Arena}ii^{Rep}}{RepeatedField<int>=ii(Pointer=^{Arena}^{Rep})}{RepeatedPtrField<std::__1::basic_string<char> >=^{Arena}ii^{Rep}}{RepeatedPtrField<TSWP::ListStyleArchive_LabelImage>=^{Arena}ii^{Rep}}{RepeatedField<bool>=ii(Pointer=^{Arena}^{Rep})}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{StyleArchive}^{ShadowArchive}^{Color}IBBBi}16@24, name: loadFromArchive:unarchiver:
- (void)loadFromUnarchiver:(id)arg1;
- (id)overridePropertyMapWithValue:(id)arg1 forProperty:(int)arg2 atParagraphLevels:(id)arg3 withContext:(id)arg4;
- (id)pOverrideArrayWithValue:(id)arg1 forProperty:(int)arg2 atParagraphLevels:(id)arg3 withContext:(id)arg4;
- (int)firstLabelType;
- (int)labelTypeForLevel:(unsigned long long)arg1;
- (int)effectiveTypeForLevel:(unsigned long long)arg1;
- (id)numberTypeName;
- (double)textIndentForLevel:(unsigned long long)arg1 fontSize:(double)arg2;
- (double)labelIndentForLevel:(unsigned long long)arg1;
- (id)initWithContext:(id)arg1 name:(id)arg2 overridePropertyMap:(id)arg3 isVariation:(_Bool)arg4;

@end

