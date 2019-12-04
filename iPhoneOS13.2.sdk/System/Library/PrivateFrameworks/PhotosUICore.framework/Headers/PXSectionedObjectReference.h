//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@protocol NSObject><NSCopying;

@interface PXSectionedObjectReference : NSObject <NSCopying>
{
    id <NSCopying> _sectionObject;
    id <NSCopying> _itemObject;
    id <NSCopying> _subitemObject;
    id <NSCopying> _leafObject;
    struct PXSimpleIndexPath _indexPath;
}

@property(readonly, copy, nonatomic) id <NSCopying> leafObject; // @synthesize leafObject=_leafObject;
@property(readonly, nonatomic) struct PXSimpleIndexPath indexPath; // @synthesize indexPath=_indexPath;
@property(readonly, copy, nonatomic) id <NSCopying> subitemObject; // @synthesize subitemObject=_subitemObject;
@property(readonly, copy, nonatomic) id <NSCopying> itemObject; // @synthesize itemObject=_itemObject;
@property(readonly, copy, nonatomic) id <NSCopying> sectionObject; // @synthesize sectionObject=_sectionObject;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithSectionObject:(id)arg1 itemObject:(id)arg2 subitemObject:(id)arg3 indexPath:(struct PXSimpleIndexPath)arg4;
- (id)init;

@end
