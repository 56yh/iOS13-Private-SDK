//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexPath, UICollectionViewUpdateItem, UITableViewUpdateGap;

__attribute__((visibility("hidden")))
@interface UIUpdateItem : NSObject
{
    UICollectionViewUpdateItem *_collectionViewUpdateItem;
    _Bool _headerFooterOnly;
    int _action;
    NSIndexPath *_indexPath;
    long long _animation;
    UITableViewUpdateGap *_gap;
}

@property(nonatomic) __weak UITableViewUpdateGap *gap; // @synthesize gap=_gap;
@property(nonatomic) _Bool headerFooterOnly; // @synthesize headerFooterOnly=_headerFooterOnly;
@property(nonatomic) long long animation; // @synthesize animation=_animation;
@property(readonly, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(readonly, nonatomic) int action; // @synthesize action=_action;
@property(readonly, nonatomic) _Bool isDecomposedFromReload;
- (long long)inverseCompareIndexPaths:(id)arg1;
- (long long)compareIndexPaths:(id)arg1;
- (_Bool)isSectionOperation;
- (id)_actionDescription;
@property(readonly, nonatomic) UICollectionViewUpdateItem *collectionViewUpdateItem;
- (id)initWithAction:(int)arg1 forIndexPath:(id)arg2 animation:(long long)arg3;

@end

