//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UIStatusBarItem.h>

@class NSArray, NSString, _UIStatusBarImageView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarIndicatorItem : _UIStatusBarItem
{
    NSArray *_currentImageNamePrefixes;
    _UIStatusBarImageView *_imageView;
}

@property(retain, nonatomic) _UIStatusBarImageView *imageView; // @synthesize imageView=_imageView;
@property(copy, nonatomic) NSArray *currentImageNamePrefixes; // @synthesize currentImageNamePrefixes=_currentImageNamePrefixes;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (_Bool)shouldUpdateIndicatorForIdentifier:(id)arg1;
- (id)viewForIdentifier:(id)arg1;
- (void)_create_imageView;
- (id)imageForUpdate:(id)arg1;
- (id)imageNameForUpdate:(id)arg1;
- (id)systemImageNameForUpdate:(id)arg1;
@property(readonly, nonatomic) _Bool flipsForRightToLeftLayoutDirection;
@property(readonly, nonatomic) _Bool isTemplateImage;
@property(readonly, nonatomic) NSString *indicatorEntryKey;
- (id)dependentEntryKeys;

@end

