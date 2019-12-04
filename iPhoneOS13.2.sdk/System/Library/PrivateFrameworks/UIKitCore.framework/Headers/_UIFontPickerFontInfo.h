//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSAttributedString, NSString, UIFontDescriptor;

@interface _UIFontPickerFontInfo : NSObject
{
    NSString *_familyName;
    NSString *_styleName;
    NSString *_localizedFamilyName;
    NSString *_localizedStyleName;
    double _lineHeight;
    UIFontDescriptor *_fontDescriptor;
    NSAttributedString *_attributedString;
    NSString *_attributedStringContentSize;
    unsigned long long _hasMultipleFaces;
    NSArray *_subInfos;
    NSString *_postscriptName;
}

+ (id)infoWithFontDescriptor:(struct __CTFontDescriptor *)arg1;
+ (id)infoWithFamilyName:(id)arg1;
@property(readonly) NSString *postscriptName; // @synthesize postscriptName=_postscriptName;
@property(readonly) NSString *styleName; // @synthesize styleName=_styleName;
@property(readonly) NSString *familyName; // @synthesize familyName=_familyName;
- (id)description;
- (id)faceMatchingDescriptor:(id)arg1;
- (_Bool)matchesFontDescriptor:(id)arg1;
- (_Bool)matchesFamilyForFontDescriptor:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly) _UIFontPickerFontInfo *familyInfo;
@property(readonly) double lineHeight;
- (_Bool)matchesConfiguration:(id)arg1;
- (_Bool)matchesTraits:(unsigned int)arg1;
- (_Bool)matchesLanguages:(id)arg1;
@property(readonly) NSAttributedString *attributedString;
- (void)_updateAttributedStringIfNeeded;
- (id)_fontStringForTraitCollection:(id)arg1;
@property(readonly) NSString *localizedFamilyName;
@property(readonly) NSString *localizedName;
- (void)_populateLocalizedNamesIfNecessary;
@property(readonly, getter=isFontFamilyAvailable) _Bool fontFamilyAvailable;
@property(readonly) UIFontDescriptor *fontDescriptor;
@property(readonly) NSArray *faces;
- (id)_sortedFacesByWeight;
@property(readonly) _Bool hasMultipleFaces;
- (id)initWithFontDescriptor:(id)arg1;
- (id)initWithFamilyName:(id)arg1;

@end

