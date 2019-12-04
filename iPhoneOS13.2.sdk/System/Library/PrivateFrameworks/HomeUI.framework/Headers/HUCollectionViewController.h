//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import <HomeUI/HUResizableCellDelegate-Protocol.h>

@class NSMapTable, NSString;

@interface HUCollectionViewController : UICollectionViewController <HUResizableCellDelegate>
{
    NSMapTable *_installedChildViewControllersKeyedByCell;
}

@property(retain, nonatomic) NSMapTable *installedChildViewControllersKeyedByCell; // @synthesize installedChildViewControllersKeyedByCell=_installedChildViewControllersKeyedByCell;
- (void)didUpdateRequiredHeightForCell:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithCollectionViewLayout:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

