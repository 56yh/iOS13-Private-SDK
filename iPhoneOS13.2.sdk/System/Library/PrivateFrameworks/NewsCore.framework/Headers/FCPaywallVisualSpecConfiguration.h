//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class FCColor, FCMultiResolutionImage;

@interface FCPaywallVisualSpecConfiguration : NSObject <NSCopying>
{
    FCMultiResolutionImage *_multiResolutionImage;
    FCMultiResolutionImage *_darkStyleMultiResolutionImage;
    double _gradientPercentHeight;
    long long _textTopPadding;
    FCColor *_backgroundColor;
    FCColor *_darkStyleBackgroundColor;
}

+ (id)defaultPaywallVisualSpecConfiguration;
+ (id)defaultMagazineFeedPaywallVisualSpecConfigurationLarge;
+ (id)defaultMagazineFeedPaywallVisualSpecConfigurationMedium;
+ (id)defaultMagazineFeedPaywallVisualSpecConfigurationSmall;
@property(retain, nonatomic) FCColor *darkStyleBackgroundColor; // @synthesize darkStyleBackgroundColor=_darkStyleBackgroundColor;
@property(retain, nonatomic) FCColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) long long textTopPadding; // @synthesize textTopPadding=_textTopPadding;
@property(nonatomic) double gradientPercentHeight; // @synthesize gradientPercentHeight=_gradientPercentHeight;
@property(retain, nonatomic) FCMultiResolutionImage *darkStyleMultiResolutionImage; // @synthesize darkStyleMultiResolutionImage=_darkStyleMultiResolutionImage;
@property(retain, nonatomic) FCMultiResolutionImage *multiResolutionImage; // @synthesize multiResolutionImage=_multiResolutionImage;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithMultiResolutionImage:(id)arg1 darkStyleMultiResolutionImage:(id)arg2 gradientPercentHeight:(double)arg3 textTopPadding:(long long)arg4 backgroundColor:(id)arg5 darkStyleBackgroundColor:(id)arg6;
- (id)initWithConfigDictionary:(id)arg1;
- (id)init;

@end

