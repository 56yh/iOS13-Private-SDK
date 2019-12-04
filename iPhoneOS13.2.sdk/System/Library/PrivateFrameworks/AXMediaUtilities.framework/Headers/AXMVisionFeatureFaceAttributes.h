//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSDictionary;

@interface AXMVisionFeatureFaceAttributes : NSObject <NSSecureCoding>
{
    long long _ageCategory;
    long long _genderCategory;
    long long _eyesCategory;
    long long _smilingCategory;
    long long _faceHairCategory;
    long long _hairColorCategory;
    long long _baldCategory;
    long long _glassesCategory;
    NSDictionary *_results;
}

+ (id)unitTestingFaceAttributes;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSDictionary *results; // @synthesize results=_results;
@property(readonly, nonatomic) long long glassesCategory; // @synthesize glassesCategory=_glassesCategory;
@property(readonly, nonatomic) long long baldCategory; // @synthesize baldCategory=_baldCategory;
@property(readonly, nonatomic) long long hairColorCategory; // @synthesize hairColorCategory=_hairColorCategory;
@property(readonly, nonatomic) long long faceHairCategory; // @synthesize faceHairCategory=_faceHairCategory;
@property(readonly, nonatomic) long long smilingCategory; // @synthesize smilingCategory=_smilingCategory;
@property(readonly, nonatomic) long long eyesCategory; // @synthesize eyesCategory=_eyesCategory;
@property(readonly, nonatomic) long long genderCategory; // @synthesize genderCategory=_genderCategory;
@property(readonly, nonatomic) long long ageCategory; // @synthesize ageCategory=_ageCategory;
- (id)accessibilityLabelForAttributes;
- (id)_accessibilityLabelForAgeCategory;
- (id)_accessibilityLabelForGlassesCategory;
- (id)_accessibilityLabelForBaldCategory;
- (id)_accessibilityLabelForHairColorCategory;
- (id)_accessibilityLabelForFaceHairCategory;
- (id)_accessibilityLabelForSmilingCategory;
- (id)_accessibilityLabelForEyesCategory;
- (long long)_AXMGlassesCategoryForVisionCategoryIdentifier:(id)arg1;
- (long long)_AXMBaldCategoryForVisionCategoryIdentifier:(id)arg1;
- (long long)_AXMHairColorCategoryForVisionCategoryIdentifier:(id)arg1;
- (long long)_AXMFaceHairCategoryForVisionCategoryIdentifier:(id)arg1;
- (long long)_AXMSmilingCategoryForVisionCategoryIdentifier:(id)arg1;
- (long long)_AXMEyesCategoryForVisionCategoryIdentifier:(id)arg1;
- (long long)_AXMGenderCategoryForVisionCategoryIdentifier:(id)arg1;
- (long long)_AXMAgeCategoryForVisionCategoryIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAVMetadataFaceObject:(id)arg1;
- (id)initWithVisionFaceAttributes:(id)arg1;

@end

