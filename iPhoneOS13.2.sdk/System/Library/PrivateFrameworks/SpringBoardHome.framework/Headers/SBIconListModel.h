//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>


#import <SpringBoardHome/SBIconIndexMutableListObserver-Protocol.h>
#import <SpringBoardHome/SBIconIndexNode-Protocol.h>
#import <SpringBoardHome/SBTreeNode-Protocol.h>

@class NSArray, NSHashTable, NSMutableArray, NSString, SBFolder, SBIconIndexMutableList;
@protocol SBTreeNode;

@interface SBIconListModel : NSObject <SBIconIndexMutableListObserver, SBTreeNode, SBIconIndexNode, NSFastEnumeration>
{
    SBIconIndexMutableList *_icons;
    unsigned long long _maxIconCount;
    NSHashTable *_nodeObservers;
    NSHashTable *_listObservers;
    NSMutableArray *_nodeObserverTransactionStack;
    _Bool _iconStateIsDirty;
    id <SBTreeNode> _parent;
    NSString *_uniqueIdentifier;
    SBFolder *_folder;
}

@property(readonly, nonatomic) __weak SBFolder *folder; // @synthesize folder=_folder;
@property(readonly, copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(nonatomic) __weak id <SBTreeNode> parent; // @synthesize parent=_parent;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (void)_coalesceChangesWithRequestID:(id)arg1 changeBlock:(id /* block */)arg2;
- (id)_iconAtIndex:(unsigned long long)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)listDidMoveNodes:(id)arg1;
- (void)list:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;
- (void)list:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;
- (id)nodeDescriptionWithPrefix:(id)arg1;
- (void)removeNodeObserver:(id)arg1;
- (void)addNodeObserver:(id)arg1;
- (id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned long long)arg2;
- (id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2;
- (id)containedNodeIdentifiers;
- (_Bool)containsNodeIdentifier:(id)arg1;
- (id)nodeIdentifier;
- (void)ancestryDidChange;
- (void)removeChild:(id)arg1;
@property(readonly, nonatomic) NSArray *children;
- (void)_notifyListObservers:(id /* block */)arg1;
- (void)removeListObserver:(id)arg1;
- (void)addListObserver:(id)arg1;
- (void)sortUsingSelector:(SEL)arg1;
@property(readonly, copy) NSString *description;
- (void)markIconStateClean;
- (void)markIconStateDirty;
- (_Bool)isIconStateDirty;
- (id)iconsOfClass:(Class)arg1;
- (void)addIconsOfClass:(Class)arg1 toSet:(id)arg2;
- (_Bool)isFullIncludingPlaceholders;
- (_Bool)isFull;
- (_Bool)isEmpty;
- (unsigned long long)firstFreeSlotIndex;
- (void)moveContainedIcons:(id)arg1 toContiguousIndicesStartingAt:(unsigned long long)arg2;
- (void)moveContainedIcon:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)removeAllIcons;
- (void)removeIcon:(id)arg1;
- (void)removeIconAtIndex:(unsigned long long)arg1;
- (id)insertIcon:(id)arg1 atIndex:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)insertIcon:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)placeIcon:(id)arg1 atIndex:(unsigned long long)arg2 notifyingObservers:(_Bool)arg3;
- (id)placeIcon:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addIcons:(id)arg1;
- (_Bool)addIcon:(id)arg1 asDirty:(_Bool)arg2;
- (_Bool)addIcon:(id)arg1;
- (void)willAddIcon:(id)arg1;
- (_Bool)canBounceIcon:(id)arg1;
- (_Bool)allowsAddingIconCount:(unsigned long long)arg1;
- (_Bool)allowsAddingIcon:(id)arg1;
- (void)enumerateFolderIconsUsingBlock:(id /* block */)arg1;
- (void)enumerateIconsUsingBlock:(id /* block */)arg1;
- (id)directlyContainedIconPassingTest:(id /* block */)arg1;
- (id)directlyContainedIconWithIdentifier:(id)arg1;
- (_Bool)directlyContainsLeafIconWithIdentifier:(id)arg1;
- (_Bool)directlyContainsIconWithIdentifier:(id)arg1;
- (_Bool)directlyContainsIcon:(id)arg1;
- (unsigned long long)indexForIcon:(id)arg1;
- (id)iconAtIndex:(unsigned long long)arg1;
@property(copy, nonatomic) NSArray *icons;
@property(readonly, nonatomic) unsigned long long maxNumberOfIcons;
@property(readonly, nonatomic) unsigned long long numberOfNonPlaceholderIcons;
@property(readonly, nonatomic) unsigned long long numberOfIcons;
- (void)dealloc;
- (id)init;
- (id)initWithUniqueIdentifier:(id)arg1 folder:(id)arg2 maxIconCount:(unsigned long long)arg3;
- (id)initWithFolder:(id)arg1 maxIconCount:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

