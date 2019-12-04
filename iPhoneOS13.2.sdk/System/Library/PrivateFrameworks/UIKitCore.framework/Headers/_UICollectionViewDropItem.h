//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UICollectionViewDropItem-Protocol.h>

@class NSIndexPath, NSString, UIDragItem;

__attribute__((visibility("hidden")))
@interface _UICollectionViewDropItem : NSObject <_UICollectionViewDropItem>
{
    UIDragItem *_dragItem;
    NSIndexPath *_sourceIndexPath;
    struct CGSize _previewSize;
}

@property(retain, nonatomic) NSIndexPath *sourceIndexPath; // @synthesize sourceIndexPath=_sourceIndexPath;
@property(nonatomic) struct CGSize previewSize; // @synthesize previewSize=_previewSize;
@property(retain, nonatomic) UIDragItem *dragItem; // @synthesize dragItem=_dragItem;
@property(readonly, copy) NSString *description;
- (id)initWithDragItem:(id)arg1 previewSize:(struct CGSize)arg2 sourceIndexPath:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

