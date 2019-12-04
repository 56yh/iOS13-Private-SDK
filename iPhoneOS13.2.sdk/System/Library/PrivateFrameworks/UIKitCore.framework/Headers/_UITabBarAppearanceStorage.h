//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor, UIImage, _UITabBarItemAppearanceStorage;

__attribute__((visibility("hidden")))
@interface _UITabBarAppearanceStorage : NSObject
{
    UIImage *backgroundImage;
    UIImage *shadowImage;
    UIImage *selectionIndicatorImage;
    UIColor *barTintColor;
    UIColor *selectedImageTintColor;
    _UITabBarItemAppearanceStorage *tabItemAppearanceStorage;
    UIColor *_unselectedImageTintColor;
}

@property(retain, nonatomic) UIColor *unselectedImageTintColor; // @synthesize unselectedImageTintColor=_unselectedImageTintColor;
@property(retain, nonatomic) UIColor *selectedImageTintColor; // @synthesize selectedImageTintColor;
@property(retain, nonatomic) UIColor *barTintColor; // @synthesize barTintColor;
@property(retain, nonatomic) UIImage *selectionIndicatorImage; // @synthesize selectionIndicatorImage;
@property(retain, nonatomic) UIImage *shadowImage; // @synthesize shadowImage;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage;
- (id)_tabItemAppearanceStorage;
@property(retain, nonatomic) _UITabBarItemAppearanceStorage *tabItemAppearanceStorage;

@end

