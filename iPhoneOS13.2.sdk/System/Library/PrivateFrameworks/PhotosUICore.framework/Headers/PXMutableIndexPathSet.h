//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXIndexPathSet.h>

@interface PXMutableIndexPathSet : PXIndexPathSet
{
}

- (void)modifySubitemIndexSetForDataSourceIdentifier:(unsigned long long)arg1 section:(long long)arg2 item:(long long)arg3 usingBlock:(id /* block */)arg4;
- (void)modifyItemIndexSetForDataSourceIdentifier:(unsigned long long)arg1 section:(long long)arg2 usingBlock:(id /* block */)arg3;
- (void)modifySectionIndexSetForDataSourceIdentifier:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)removeAllIndexPaths;
- (void)minusIndexPathSet:(id)arg1;
- (void)unionIndexPathSet:(id)arg1;
- (void)removeIndexPath:(struct PXSimpleIndexPath)arg1;
- (void)addIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

