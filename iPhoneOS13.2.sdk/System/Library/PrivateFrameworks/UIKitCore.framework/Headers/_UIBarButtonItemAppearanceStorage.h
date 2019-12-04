//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UIBarItemAppearanceStorage.h>

@class NSMutableDictionary, NSValue, UIColor, _UIBarBackButtonItemAppearanceStorage;

__attribute__((visibility("hidden")))
@interface _UIBarButtonItemAppearanceStorage : _UIBarItemAppearanceStorage
{
    NSMutableDictionary *backgroundImages;
    NSMutableDictionary *miniBackgroundImages;
    UIColor *tintColor;
    NSValue *titlePositionOffset;
    NSValue *miniTitlePositionOffset;
    NSMutableDictionary *backgroundVerticalAdjustmentsForBarMetrics;
    _UIBarBackButtonItemAppearanceStorage *backButtonAppearance;
}

@property(retain, nonatomic) NSValue *miniTitlePositionOffset; // @synthesize miniTitlePositionOffset;
@property(retain, nonatomic) NSValue *titlePositionOffset; // @synthesize titlePositionOffset;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor;
@property(retain, nonatomic) NSValue *miniBackButtonTitlePositionOffset;
@property(retain, nonatomic) NSValue *backButtonTitlePositionOffset;
- (id)anyBackButtonBackgroundImage;
- (id)backButtonBackgroundImageForState:(unsigned long long)arg1 isMini:(_Bool)arg2;
- (void)setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 isMini:(_Bool)arg3;
- (double)backButtonBackgroundVerticalAdjustmentForBarMetrics:(long long)arg1;
- (void)setBackButtonBackgroundVerticalAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (double)backgroundVerticalAdjustmentForBarMetrics:(long long)arg1;
- (void)setBackgroundVerticalAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (id)anyBackgroundImage;
- (id)backgroundImageForState:(unsigned long long)arg1 style:(long long)arg2 isMini:(_Bool)arg3;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 isMini:(_Bool)arg4;

@end

