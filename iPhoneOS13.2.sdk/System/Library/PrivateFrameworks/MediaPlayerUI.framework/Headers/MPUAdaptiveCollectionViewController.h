//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPUFoundation/MPUDataSourceViewController.h>

@class NSMutableDictionary;

@interface MPUAdaptiveCollectionViewController : MPUDataSourceViewController
{
    struct UIEdgeInsets _contentInsetAdditions;
    struct UIEdgeInsets _scrollIndicatorInsetsAdditions;
    NSMutableDictionary *_sizeClassToClassMap;
}

@property(retain, nonatomic) NSMutableDictionary *sizeClassToClassMap; // @synthesize sizeClassToClassMap=_sizeClassToClassMap;
- (void)_updateViewControllerIfNecessary;
- (void)_restoreTopVisibleIndexPath:(id)arg1;
- (id)_indexPathOfTopVisibleItem;
- (id)_childDataSourceViewController;
- (void)_applyNewScrollIndicatorInsetsAdditions:(struct UIEdgeInsets)arg1 withExistingScrollIndicatorInsetsAdditions:(struct UIEdgeInsets)arg2 toScrollView:(id)arg3;
- (void)_applyNewContentInsetAdditions:(struct UIEdgeInsets)arg1 withExistingContentInsetAdditions:(struct UIEdgeInsets)arg2 toScrollView:(id)arg3;
- (void)dataSourceDidInvalidate;
- (void)reloadData;
- (void)setViewControllerClass:(Class)arg1 forHorizontalSizeClass:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (id)contentScrollView;
- (void)viewDidLayoutSubviews;

@end

