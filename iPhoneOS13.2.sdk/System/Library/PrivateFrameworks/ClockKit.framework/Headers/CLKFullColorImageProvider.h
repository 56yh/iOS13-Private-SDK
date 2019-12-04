//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class CLKImageProvider, NSDictionary, NSString, UIColor, UIImage;

@interface CLKFullColorImageProvider : NSObject <NSSecureCoding, NSCopying>
{
    UIColor *_tintColor;
    _Bool _applyScalingAndCircularMasking;
    _Bool _finalized;
    _Bool _prefersFilterOverTransition;
    _Bool _tritium_inactiveFullColorImageProvider;
    UIImage *_image;
    CLKImageProvider *_tintedImageProvider;
    NSString *_accessibilityLabel;
    Class _ImageViewClass;
    NSDictionary *_metadata;
    long long _monochromeFilterType;
}

+ (_Bool)supportsSecureCoding;
+ (id)fullColorImageProviderWithImageViewClass:(Class)arg1;
+ (id)providerWithFullColorImage:(id)arg1 tintedImageProvider:(id)arg2 applyScalingAndCircularMasking:(_Bool)arg3;
+ (id)providerWithFullColorImage:(id)arg1 monochromeFilterType:(long long)arg2 applyScalingAndCircularMasking:(_Bool)arg3;
+ (id)providerWithFullColorImage:(id)arg1 applyScalingAndCircularMasking:(_Bool)arg2;
+ (id)providerWithFullColorImage:(id)arg1 tintedImageProvider:(id)arg2;
+ (id)providerWithFullColorImage:(id)arg1 monochromeFilterType:(long long)arg2;
+ (id)providerWithFullColorImage:(id)arg1;
@property(nonatomic) long long monochromeFilterType; // @synthesize monochromeFilterType=_monochromeFilterType;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic, getter=tritium_isTritiumInactiveFullColorImageProvider) _Bool tritium_inactiveFullColorImageProvider; // @synthesize tritium_inactiveFullColorImageProvider=_tritium_inactiveFullColorImageProvider;
@property(readonly, nonatomic) Class ImageViewClass; // @synthesize ImageViewClass=_ImageViewClass;
@property(nonatomic) _Bool prefersFilterOverTransition; // @synthesize prefersFilterOverTransition=_prefersFilterOverTransition;
@property(retain, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(retain, nonatomic) CLKImageProvider *tintedImageProvider; // @synthesize tintedImageProvider=_tintedImageProvider;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)_resizeImagesIfNecessaryWithMaxSize:(struct CGSize)arg1 cornerRadius:(double)arg2;
- (void)finalizeWithMaxSize:(struct CGSize)arg1 cornerRadius:(double)arg2;
- (void)validate;
- (id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)arg1;
- (id)initWithJSONObjectRepresentation:(id)arg1 bundle:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

