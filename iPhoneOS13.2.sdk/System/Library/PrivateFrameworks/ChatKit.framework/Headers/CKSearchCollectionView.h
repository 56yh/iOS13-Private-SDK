//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionView.h>

@interface CKSearchCollectionView : UICollectionView
{
    _Bool _editing;
    _Bool _suppressDatasourceUpdates;
    _Bool _lockContentOffset;
    struct UIEdgeInsets _marginInsets;
}

@property(nonatomic) _Bool lockContentOffset; // @synthesize lockContentOffset=_lockContentOffset;
@property(nonatomic) _Bool suppressDatasourceUpdates; // @synthesize suppressDatasourceUpdates=_suppressDatasourceUpdates;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic) struct UIEdgeInsets marginInsets; // @synthesize marginInsets=_marginInsets;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setDataSource:(id)arg1;
- (id)dequeueReusableSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2 forIndexPath:(id)arg3;
- (id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2;

@end
