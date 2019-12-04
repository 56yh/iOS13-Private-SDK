//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSKDocumentObject-Protocol.h>
#import <iWorkImport/TSKModel-Protocol.h>
#import <iWorkImport/TSSPresetSource-Protocol.h>

@class NSArray, NSMutableDictionary, NSSet, NSString, TSDMediaStyle, TSSStylesheet, TSWPCharacterStyle, TSWPColumnStyle, TSWPListStyle, TSWPParagraphStyle, TSWPTOCEntryStyle;

__attribute__((visibility("hidden")))
@interface TSSTheme : TSPObject <TSSPresetSource, TSKModel, TSKDocumentObject>
{
    NSString *mThemeIdentifier;
    NSMutableDictionary *mPresetsByKind;
    TSSStylesheet *mLegacyStylesheet;
    TSSStylesheet *mDocumentStylesheet;
    NSMutableDictionary *mReplacedPresetUUIDs;
}

+ (id)presetBootstrapOrder;
+ (void)registerPresetSourceClass:(Class)arg1;
+ (void)registerPresetSourceClasses;
+ (id)presetSources;
+ (id)themeWithContext:(id)arg1 alternate:(int)arg2 withStylesheet:(id)arg3;
+ (void)tschRegisterPresetSourceClasses;
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (id)presetKinds;
+ (void)tsdRegisterPresetSourceClasses;
+ (void)tstRegisterPresetSourceClasses;
- (id)referencedStyles;
- (void)checkThemeStylesheetConsistency;
- (void)bootstrapThemeAlternate:(int)arg1;
- (id)p_identifierForBootstrapTheme:(int)arg1;
- (id)migratedPresetForPresetWithoutFollowingReplacements:(id)arg1;
- (id)migratedPresetForPreset:(id)arg1;
- (id)p_migratedPresetForPreset:(id)arg1 followReplacements:(_Bool)arg2;
- (id)migratedPresetUUIDForPresetUUID:(id)arg1;
- (void)clearAllReplacementsOfPresetUUIDs;
- (void)clearReplacementsOfPresetUUID:(id)arg1;
- (void)recordReplacementOfPresetUUID:(id)arg1 withPresetUUID:(id)arg2;
- (id)modelPathComponentForChild:(id)arg1;
- (id)childEnumerator;
- (void)setStylesheetForUpgradeToSingleStylesheet:(id)arg1;
- (_Bool)containsCGColor:(struct CGColor *)arg1;
- (id)colors;
- (unsigned long long)indexOfPreset:(id)arg1;
- (id)presetOfKind:(id)arg1 index:(unsigned long long)arg2;
- (void)movePresetOfKind:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)removePreset:(id)arg1;
- (void)insertPreset:(id)arg1 ofKind:(id)arg2 atIndex:(unsigned long long)arg3;
- (_Bool)p_shouldDoDOLCForPreset:(id)arg1;
- (void)addPreset:(id)arg1 ofKind:(id)arg2;
- (void)setPresets:(id)arg1 ofKind:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)disablePresetValidation;
- (void)enablePresetValidation;
- (_Bool)hasPresetsOfKind:(id)arg1;
- (id)presetsOfKind:(id)arg1;
- (id)presetKinds;
@property(retain, nonatomic) TSSStylesheet *documentStylesheet;
@property(retain, nonatomic) TSSStylesheet *legacyStylesheet;
@property(retain, nonatomic) NSString *themeIdentifier;
@property(readonly) NSUInteger hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithContext:(id)arg1 documentStylesheet:(id)arg2;
- (id)initWithContext:(id)arg1;
-     // Error parsing type: v32@0:8^{ThemeArchive=^^?{ExtensionSet=^{Arena}SS(AllocatedData=^{KeyValue}^{map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > >})}{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TSP::UUID>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::UUID>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::Color>=^{Arena}ii^{Rep}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{Reference}^{Reference}}16@24, name: tschSaveToArchive:archiver:
-     // Error parsing type: v32@0:8r^{ThemeArchive=^^?{ExtensionSet=^{Arena}SS(AllocatedData=^{KeyValue}^{map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > >})}{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TSP::UUID>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::UUID>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::Color>=^{Arena}ii^{Rep}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{Reference}^{Reference}}16@24, name: tschLoadFromArchive:unarchiver:
-     // Error parsing type: v32@0:8^{ThemeArchive=^^?{ExtensionSet=^{Arena}SS(AllocatedData=^{KeyValue}^{map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > >})}{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TSP::UUID>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::UUID>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::Color>=^{Arena}ii^{Rep}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{Reference}^{Reference}}16@24, name: tsdSaveToArchive:archiver:
-     // Error parsing type: v32@0:8r^{ThemeArchive=^^?{ExtensionSet=^{Arena}SS(AllocatedData=^{KeyValue}^{map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > >})}{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TSP::UUID>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::UUID>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::Color>=^{Arena}ii^{Rep}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{Reference}^{Reference}}16@24, name: tsdLoadFromArchive:unarchiver:
- (void)installContactCurvedShadowPresets;
- (void)installMoviePresetsInStylesheet:(id)arg1;
- (void)installDrawingLinePresetsInStylesheet:(id)arg1;
- (void)p_addStyleIfNotExisting:(id)arg1 inStylesheet:(id)arg2 withIdentifier:(id)arg3 presets:(id)arg4;
- (void)upgradeStylesWithBlock:(id /* block */)arg1;
-     // Error parsing type: v32@0:8^{ThemeArchive=^^?{ExtensionSet=^{Arena}SS(AllocatedData=^{KeyValue}^{map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > >})}{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TSP::UUID>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::UUID>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::Color>=^{Arena}ii^{Rep}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{Reference}^{Reference}}16@24, name: saveToArchive:archiver:
-     // Error parsing type: v32@0:8r^{ThemeArchive=^^?{ExtensionSet=^{Arena}SS(AllocatedData=^{KeyValue}^{map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > >})}{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TSP::UUID>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::UUID>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::Color>=^{Arena}ii^{Rep}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{Reference}^{Reference}}16@24, name: loadFromArchive:unarchiver:
-     // Error parsing type: v32@0:8^{ThemeArchive=^^?{ExtensionSet=^{Arena}SS(AllocatedData=^{KeyValue}^{map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > >})}{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TSP::UUID>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::UUID>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::Color>=^{Arena}ii^{Rep}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{Reference}^{Reference}}16@24, name: tstSaveToArchive:archiver:
-     // Error parsing type: v32@0:8r^{ThemeArchive=^^?{ExtensionSet=^{Arena}SS(AllocatedData=^{KeyValue}^{map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > >})}{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TSP::UUID>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::UUID>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::Color>=^{Arena}ii^{Rep}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{Reference}^{Reference}}16@24, name: tstLoadFromArchive:unarchiver:
-     // Error parsing type: v32@0:8^{ThemeArchive=^^?{ExtensionSet=^{Arena}SS(AllocatedData=^{KeyValue}^{map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > >})}{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TSP::UUID>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::UUID>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::Color>=^{Arena}ii^{Rep}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{Reference}^{Reference}}16@24, name: tswpSaveToArchive:archiver:
-     // Error parsing type: v32@0:8r^{ThemeArchive=^^?{ExtensionSet=^{Arena}SS(AllocatedData=^{KeyValue}^{map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > >})}{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TSP::UUID>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::UUID>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::Color>=^{Arena}ii^{Rep}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{Reference}^{Reference}}16@24, name: tswpLoadFromArchive:unarchiver:
- (void)removeTextStylesOfPresetKinds:(id)arg1 notReferencedInDocumentRoot:(id)arg2;
@property(readonly, nonatomic) NSSet *unmodifiableStyles;
@property(readonly, nonatomic) NSSet *undeletableStyles;
- (void)createCommentInfoStyleIfNeeded;
- (void)createDefaultParagraphStyleIfNeeded;
- (void)modifyHyperlinkStyleToMatchSage;
@property(readonly, nonatomic) NSString *localizedBodyStyleName;
@property(readonly, nonatomic) TSDMediaStyle *defaultEquationStyle;
@property(readonly, nonatomic) TSWPTOCEntryStyle *defaultTOCEntryStyle;
@property(readonly, nonatomic) TSWPColumnStyle *defaultColumnStyle;
@property(readonly, nonatomic) TSWPListStyle *defaultListStyle;
@property(readonly, nonatomic) TSWPParagraphStyle *defaultParagraphStyle;
@property(readonly, nonatomic) TSWPCharacterStyle *hyperlinkStyle;
@property(readonly, nonatomic) TSWPCharacterStyle *defaultCharacterStyle;
@property(readonly, nonatomic) NSArray *paragraphPresetStyles;
- (id)paragraphStylesWithPartialContentTag:(id)arg1;
- (id)paragraphStylesWithContentTag:(id)arg1;
- (id)paragraphStyleWithContentTag:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

