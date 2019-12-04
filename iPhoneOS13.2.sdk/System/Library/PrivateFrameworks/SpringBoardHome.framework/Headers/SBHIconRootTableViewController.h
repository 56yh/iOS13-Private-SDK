//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <SpringBoardHome/SBHIconRootViewProviding-Protocol.h>

@class NSSet, NSString, SBFolder, SBFolderIconImageCache, SBHIconImageCache, UIView, UIViewController, _UILegibilitySettings;

@interface SBHIconRootTableViewController : UITableViewController <SBHIconRootViewProviding>
{
    SBFolder *_folder;
    _UILegibilitySettings *_legibilitySettings;
    SBFolderIconImageCache *_folderIconImageCache;
    SBHIconImageCache *_iconImageCache;
}

@property(retain, nonatomic) SBHIconImageCache *iconImageCache; // @synthesize iconImageCache=_iconImageCache;
@property(retain, nonatomic) SBFolderIconImageCache *folderIconImageCache; // @synthesize folderIconImageCache=_folderIconImageCache;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(retain, nonatomic) SBFolder *folder; // @synthesize folder=_folder;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)enumerateDisplayedIconViewsUsingBlock:(id /* block */)arg1;
- (_Bool)isDisplayingIconView:(id)arg1 inLocation:(id)arg2;
- (_Bool)isDisplayingIcon:(id)arg1 inLocations:(id)arg2;
- (_Bool)isDisplayingIconView:(id)arg1;
- (_Bool)isDisplayingIcon:(id)arg1;
- (_Bool)isDisplayingIcon:(id)arg1 inLocation:(id)arg2;
- (id)firstIconViewForIcon:(id)arg1 excludingLocations:(id)arg2;
- (id)firstIconViewForIcon:(id)arg1;
- (id)firstIconViewForIcon:(id)arg1 inLocations:(id)arg2;
- (id)iconViewForIcon:(id)arg1 location:(id)arg2;
@property(readonly, copy, nonatomic) NSSet *presentedIconLocations;
- (_Bool)isPresentingIconLocation:(id)arg1;
- (void)setIdleText:(id)arg1;
- (void)revealIcon:(id)arg1 animated:(_Bool)arg2 completionHandler:(id /* block */)arg3;
- (_Bool)setCurrentPageIndex:(long long)arg1 animated:(_Bool)arg2 completion:(id /* block */)arg3;
@property(nonatomic) long long currentPageIndex;
- (void)noteUserIsInteractingWithIcons;
- (void)enumerateDisplayedIconViewsForIcon:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)cancelScrolling;
@property(readonly, nonatomic, getter=isScrollTracking) _Bool scrollTracking;
@property(readonly, nonatomic, getter=isScrolling) _Bool scrolling;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isEditing) _Bool editing;
@property(readonly, nonatomic) UIViewController *deepestFolderController;
@property(readonly, nonatomic) UIView *contentView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

