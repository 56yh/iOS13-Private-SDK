//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSSStyle.h>

#import <iWorkImport/TSDMixing-Protocol.h>
#import <iWorkImport/TSTTableStrokeProviding-Protocol.h>

@class NSString, TSDStroke;

__attribute__((visibility("hidden")))
@interface TSTTableStyle : TSSStyle <TSTTableStrokeProviding, TSDMixing>
{
}

+ (void)initDefaultPropertyMap:(id)arg1 presetID:(unsigned long long)arg2 colors:(id)arg3 alternate:(int)arg4;
+ (void)initDefaultStrokePresetListInPropertyMap:(id)arg1 presetID:(unsigned long long)arg2 colors:(id)arg3;
+ (int)defaultIntValueForProperty:(int)arg1;
+ (id)styleIDForPreset:(unsigned long long)arg1;
+ (unsigned long long)presetIDForStyleID:(id)arg1;
+ (id)nonEmphasisTableProperties;
+ (id)propertiesAllowingNSNull;
+ (id)properties;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
@property(readonly, nonatomic) TSDStroke *categoryLevel5InteriorStroke;
@property(readonly, nonatomic) TSDStroke *categoryLevel4InteriorStroke;
@property(readonly, nonatomic) TSDStroke *categoryLevel3InteriorStroke;
@property(readonly, nonatomic) TSDStroke *categoryLevel2InteriorStroke;
@property(readonly, nonatomic) TSDStroke *categoryLevel1InteriorStroke;
@property(readonly, nonatomic) TSDStroke *categoryLevel5BottomStroke;
@property(readonly, nonatomic) TSDStroke *categoryLevel4BottomStroke;
@property(readonly, nonatomic) TSDStroke *categoryLevel3BottomStroke;
@property(readonly, nonatomic) TSDStroke *categoryLevel2BottomStroke;
@property(readonly, nonatomic) TSDStroke *categoryLevel1BottomStroke;
@property(readonly, nonatomic) TSDStroke *categoryLevel5LabelSeparatorStroke;
@property(readonly, nonatomic) TSDStroke *categoryLevel4LabelSeparatorStroke;
@property(readonly, nonatomic) TSDStroke *categoryLevel3LabelSeparatorStroke;
@property(readonly, nonatomic) TSDStroke *categoryLevel2LabelSeparatorStroke;
@property(readonly, nonatomic) TSDStroke *categoryLevel1LabelSeparatorStroke;
@property(readonly, nonatomic) TSDStroke *categoryLevel5TopStroke;
@property(readonly, nonatomic) TSDStroke *categoryLevel4TopStroke;
@property(readonly, nonatomic) TSDStroke *categoryLevel3TopStroke;
@property(readonly, nonatomic) TSDStroke *categoryLevel2TopStroke;
@property(readonly, nonatomic) TSDStroke *categoryLevel1TopStroke;
@property(readonly, nonatomic) TSDStroke *footerRowSeparatorStroke;
@property(readonly, nonatomic) TSDStroke *footerRowBodyRowStroke;
@property(readonly, nonatomic) TSDStroke *footerRowBodyColumnStroke;
@property(readonly, nonatomic) TSDStroke *footerRowBorderStroke;
@property(readonly, nonatomic) TSDStroke *headerRowSeparatorStroke;
@property(readonly, nonatomic) TSDStroke *headerRowBodyRowStroke;
@property(readonly, nonatomic) TSDStroke *headerRowBodyColumnStroke;
@property(readonly, nonatomic) TSDStroke *headerRowBorderStroke;
@property(readonly, nonatomic) TSDStroke *headerColumnSeparatorStroke;
@property(readonly, nonatomic) TSDStroke *headerColumnBodyRowStroke;
@property(readonly, nonatomic) TSDStroke *headerColumnBodyColumnStroke;
@property(readonly, nonatomic) TSDStroke *headerColumnBorderStroke;
@property(readonly, nonatomic) TSDStroke *bodyRowStrokeEvenIfNotVisible;
@property(readonly, nonatomic) TSDStroke *bodyRowStroke;
@property(readonly, nonatomic) TSDStroke *bodyColumnStroke;
@property(readonly, nonatomic) TSDStroke *defaultVerticalBorderStroke;
@property(readonly, nonatomic) TSDStroke *defaultHorizontalBorderStroke;
@property(readonly, nonatomic) TSDStroke *defaultHorizontalBorderStrokeEvenIfNotVisible;
- (id)boxedValueForProperty:(int)arg1 oldBoxedValue:(id)arg2 transformedByTransform:(struct CGAffineTransform)arg3;
- (_Bool)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
- (void)validate;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
-     // Error parsing type: v32@0:8^{TableStylePropertiesArchive=^^?{InternalMetadataWithArena=^v}{HasBits<3>=[3I]}{CachedSize={atomic<int>=Ai}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{FillArchive}^{Deprecated_TableStrokeArchive}^{Deprecated_TableStrokeArchive}^{Deprecated_TableStrokeArchive}^{Deprecated_TableStrokeArchive}^{Deprecated_TableStrokeArchive}^{Deprecated_TableStrokeArchive}^{Deprecated_TableStrokeArchive}^{Deprecated_TableStrokeArchive}^{Deprecated_TableStrokeArchive}^{Deprecated_TableStrokeArchive}^{Deprecated_TableStrokeArchive}^{Deprecated_TableStrokeArchive}^{Deprecated_TableStrokeArchive}^{Deprecated_TableStrokeArchive}^{Deprecated_TableStrokeArchive}^{Deprecated_TableStrokeArchive}^{StrokePresetListArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}BBBBBBBBiBBBBBi}16@24, name: saveTableStylePropertiesToArchive:archiver:
-     // Error parsing type: v40@0:8@16r^{TableStylePropertiesArchive=^^?{InternalMetadataWithArena=^v}{HasBits<3>=[3I]}{CachedSize={atomic<int>=Ai}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{FillArchive}^{Deprecated_TableStrokeArchive}^{Deprecated_TableStrokeArchive}^{Deprecated_TableStrokeArchive}^{Deprecated_TableStrokeArchive}^{Deprecated_TableStrokeArchive}^{Deprecated_TableStrokeArchive}^{Deprecated_TableStrokeArchive}^{Deprecated_TableStrokeArchive}^{Deprecated_TableStrokeArchive}^{Deprecated_TableStrokeArchive}^{Deprecated_TableStrokeArchive}^{Deprecated_TableStrokeArchive}^{Deprecated_TableStrokeArchive}^{Deprecated_TableStrokeArchive}^{Deprecated_TableStrokeArchive}^{Deprecated_TableStrokeArchive}^{StrokePresetListArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}^{StrokeArchive}BBBBBBBBiBBBBBi}24@32, name: loadTableStylePropertiesIntoPropertyMap:fromArchive:unarchiver:
- (unsigned int)maskForStrokePresets:(id)arg1;
- (unsigned int)maskForStrokePreset:(unsigned long long)arg1;
- (id)exteriorStrokeForStrokePreset:(unsigned long long)arg1;
- (id)verticalStrokeForStrokePreset:(unsigned long long)arg1;
- (id)horizontalStrokeForStrokePreset:(unsigned long long)arg1;
- (id)strokeForStrokePreset:(unsigned long long)arg1;
- (id)initWithContext:(id)arg1 name:(id)arg2 overridePropertyMap:(id)arg3 isVariation:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

