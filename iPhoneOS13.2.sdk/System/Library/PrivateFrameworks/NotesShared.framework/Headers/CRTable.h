//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NotesShared/CRObject.h>

#import <NotesShared/CRUndoDelegate-Protocol.h>

@class CRDictionary, CRDocument, CRTombstoneOrderedSet, NSObject, NSString;
@protocol CRUndoDelegate;

@interface CRTable : CRObject <CRUndoDelegate>
{
    CRDocument *_document;
    NSObject<CRUndoDelegate> *_delegate;
}

+ (id)CRProperties;
+ (void)registerWithCRCoder;
@property(nonatomic) __weak NSObject<CRUndoDelegate> *delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak CRDocument *document; // @synthesize document=_document;
- (_Bool)wantsUndoCommands;
- (void)addUndoCommandsForObject:(id)arg1 block:(id /* block */)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
- (unsigned long long)countOfPopulatedCells;
- (id)subtableWithDocument:(id)arg1 forSelectionContainingColumnIndices:(id)arg2 rowIndices:(id)arg3;
- (void)enumerateCellObjectsInCellSelectionContainingColumnIndices:(id)arg1 rowIndices:(id)arg2 copyItems:(_Bool)arg3 usingBlock:(id /* block */)arg4;
- (void)enumerateRowsWithBlock:(id /* block */)arg1;
- (void)enumerateColumnsWithBlock:(id /* block */)arg1;
- (void)setObject:(id)arg1 columnID:(id)arg2 rowID:(id)arg3;
- (void)setObject:(id)arg1 columnIndex:(unsigned long long)arg2 rowIndex:(unsigned long long)arg3;
- (id)objectForColumnID:(id)arg1 rowID:(id)arg2;
- (id)objectForColumnIndex:(unsigned long long)arg1 rowIndex:(unsigned long long)arg2;
- (void)reverseColumnDirection;
@property(readonly, nonatomic) _Bool isLeftToRight;
@property(readonly, nonatomic) _Bool isRightToLeft;
- (void)undoablyInsertContents:(id)arg1 atColumn:(id)arg2;
- (void)undoablyRemoveContentsOfColumn:(id)arg1;
- (void)moveColumnAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)moveRowAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)removeColumnAtIndex:(unsigned long long)arg1;
- (void)undoablyInsertContents:(id)arg1 atRow:(id)arg2;
- (void)undoablyRemoveContentsOfRow:(id)arg1;
- (void)removeRowAtIndex:(unsigned long long)arg1;
- (id)insertColumns:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (id)insertRows:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (id)insertColumnAtIndex:(unsigned long long)arg1;
- (id)insertRowAtIndex:(unsigned long long)arg1;
- (_Bool)containsColumn:(id)arg1;
- (_Bool)containsRow:(id)arg1;
- (id)columnIndexesForIdentifiers:(id)arg1;
- (id)rowIndexesForIdentifiers:(id)arg1;
- (unsigned long long)columnIndexForIdentifier:(id)arg1;
- (unsigned long long)rowIndexForIdentifier:(id)arg1;
- (id)identifiersForColumnIndexes:(id)arg1;
- (id)identifiersForRowIndexes:(id)arg1;
- (id)identifierForColumnAtIndex:(unsigned long long)arg1;
- (id)identifierForRowAtIndex:(unsigned long long)arg1;
- (id)rowsIntersectingWithRows:(id)arg1;
- (id)columnsIntersectingWithColumns:(id)arg1;
@property(readonly, nonatomic) unsigned long long rowCount;
@property(readonly, nonatomic) unsigned long long columnCount;
@property(readonly, nonatomic) CRDictionary *cellColumns;
@property(readonly, nonatomic) CRTombstoneOrderedSet *crRows;
@property(readonly, nonatomic) CRTombstoneOrderedSet *crColumns;
- (id)crTableColumnDirection;
@property(retain, nonatomic) NSString *columnDirection;
- (id)identity;
- (void)setDocument:(id)arg1;
- (id)initWithIdentity:(id)arg1 fields:(id)arg2;
- (id)initWithDocument:(id)arg1 columnDirection:(id)arg2 crColumns:(id)arg3 crRows:(id)arg4 cellColumns:(id)arg5;
- (id)initWithDocument:(id)arg1 columnDirection:(id)arg2;
- (id)initWithDocument:(id)arg1 isRightToLeft:(_Bool)arg2;
- (id)initWithDocument:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

