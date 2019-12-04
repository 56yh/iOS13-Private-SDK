//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSPCopying-Protocol.h>

@class NSString, TSUColor;

__attribute__((visibility("hidden")))
@interface TSKAnnotationAuthor : TSPObject <TSPCopying>
{
    TSUColor *mColor;
    _Bool _isPublicAuthor;
    NSString *_name;
    NSString *_publicID;
}

+ (void)enumerateAnnotationsInDocument:(id)arg1 withAuthor:(id)arg2 usingHitBlock:(id /* block */)arg3;
+ (id)authorNameExplanatoryStringWithUseExplanation:(_Bool)arg1 withSettingsExplanation:(_Bool)arg2;
+ (id)normalizedAuthorNameForAuthorName:(id)arg1;
+ (id)defaultAuthorName;
+ (id)indicatorDarkColorByLightColor:(id)arg1;
+ (id)indicatorLightColorByAuthorColor:(id)arg1;
+ (id)indicatorDarkColorForIndex:(unsigned long long)arg1;
+ (id)indicatorLightColorForIndex:(unsigned long long)arg1;
+ (unsigned long long)p_authorColorIndexWithColor:(id)arg1 forIndicator:(_Bool)arg2;
+ (unsigned long long)authorColorIndexClosestToImportedFloatingCommentColor:(id)arg1;
+ (id)localizedAuthorColorNameForIndex:(unsigned long long)arg1;
+ (id)p_authorColorDictionaryForAuthorIndex:(unsigned long long)arg1;
+ (id)authorTextMarkupColorForIndex:(unsigned long long)arg1;
+ (id)authorMenuSwatchColorForIndex:(unsigned long long)arg1;
+ (id)authorStorageColorForIndex:(unsigned long long)arg1;
+ (id)authorColorForIndex:(unsigned long long)arg1 forKey:(id)arg2;
+ (unsigned long long)presetColorCount;
+ (id)p_publicIDFromSeed:(id)arg1 privateID:(id)arg2;
@property(nonatomic) _Bool isPublicAuthor; // @synthesize isPublicAuthor=_isPublicAuthor;
@property(copy, nonatomic) NSString *publicID; // @synthesize publicID=_publicID;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (_Bool)allowsImplicitComponentOwnership;
- (id)componentRootObject;
@property(readonly, nonatomic) _Bool showAuthorComments;
@property(readonly, nonatomic) NSString *menuSwatchColorForAuthor;
- (id)themeFilenameForAuthor;
@property(readonly, nonatomic) NSString *authorColorName;
@property(readonly, nonatomic) TSUColor *indicatorDarkColor;
@property(readonly, nonatomic) TSUColor *indicatorLightColor;
@property(readonly, nonatomic) TSUColor *gradientEndColor;
@property(readonly, nonatomic) TSUColor *gradientStartColor;
@property(readonly, nonatomic) TSUColor *sidebarSelectedBorderColor;
@property(readonly, nonatomic) TSUColor *sidebarChangeBarColor;
@property(readonly, nonatomic) TSUColor *sidebarUsernameColor;
@property(readonly, nonatomic) TSUColor *sidebarSelectedColor;
@property(readonly, nonatomic) TSUColor *sidebarHoverColor;
@property(readonly, nonatomic) TSUColor *sidebarDecoratorLineColor;
@property(readonly, nonatomic) TSUColor *popoverColor;
@property(readonly, nonatomic) TSUColor *flagFillColor;
@property(readonly, nonatomic) TSUColor *changeAdornmentsColor;
@property(readonly, nonatomic) TSUColor *flagPressedColor;
@property(readonly, nonatomic) TSUColor *flagStrokeColor;
@property(readonly, nonatomic) TSUColor *cellViolatorColor;
@property(readonly, nonatomic) TSUColor *textHighlightOverlappingDuplicateColor;
@property(readonly, nonatomic) TSUColor *textHighlightColor;
@property(readonly, nonatomic) TSUColor *textMarkupColor;
@property(readonly, nonatomic) TSUColor *popoverAuthorLabelColor;
@property(readonly, nonatomic) TSUColor *popoverButtonTintColor;
- (unsigned long long)p_authorColorIndex;
- (_Bool)matchesPrivateID:(id)arg1;
- (_Bool)isPreferredOver:(id)arg1;
- (_Bool)matchesAuthor:(id)arg1;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) _Bool hasPublicID;
- (id)copyWithContext:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithContext:(id)arg1 name:(id)arg2 color:(id)arg3 publicID:(id)arg4 isPublicAuthor:(_Bool)arg5;
- (id)initWithContext:(id)arg1 name:(id)arg2 color:(id)arg3 privateID:(id)arg4;
- (id)initWithContext:(id)arg1 name:(id)arg2 color:(id)arg3;
@property(retain, nonatomic) TSUColor *storageColor;

@end

