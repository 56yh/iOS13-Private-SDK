//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSDDrawableInfo.h>

#import <TSReading/TSDContainerInfo-Protocol.h>
#import <TSReading/TSDMixing-Protocol.h>
#import <TSReading/TSKModel-Protocol.h>
#import <TSReading/TSKSearchable-Protocol.h>
#import <TSReading/TSSPresetSource-Protocol.h>
#import <TSReading/TSSStyleClient-Protocol.h>
#import <TSReading/TSSThemedObject-Protocol.h>
#import <TSReading/TSWPStorageParent-Protocol.h>

@class NSObject, NSString, TSDInfoGeometry, TSKDocumentRoot, TSPObject, TSTEditingState, TSTMasterLayout, TSTTableModel, TSTTablePartitioner;
@protocol TSDContainerInfo, TSDOwningAttachment;

@interface TSTTableInfo : TSDDrawableInfo <TSKModel, TSKSearchable, TSSThemedObject, TSSPresetSource, TSSStyleClient, TSDContainerInfo, TSDMixing, TSWPStorageParent>
{
    TSTTableModel *mTableModel;
    _Bool mIsFormulaEditing;
    _Bool mHasReference;
    CDStruct_0441cfb5 mEditingCellID;
    CDStruct_0441cfb5 mPreviousEditingCellID;
    TSTTablePartitioner *mPartitioner;
    TSTMasterLayout *mMasterLayout;
    TSTEditingState *mEditingState;
}

+ (id)presetKinds;
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3 reservedCount:(unsigned long long)arg4;
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (_Bool)canPartition;
+ (id)tablePrototypeWithIndex:(long long)arg1 context:(id)arg2 geometry:(id)arg3 styles:(id)arg4;
+ (id)geometryForPrototypeIndex:(long long)arg1 withCanvasPoint:(struct CGPoint)arg2;
+ (unsigned short)numberOfColumnsForProtoIndex:(unsigned long long)arg1;
+ (unsigned short)numberOfRowsForProtoIndex:(unsigned long long)arg1;
@property(nonatomic) _Bool hasReference; // @synthesize hasReference=mHasReference;
@property(nonatomic, getter=isFormulaEditing) _Bool formulaEditing; // @synthesize formulaEditing=mIsFormulaEditing;
@property(readonly, nonatomic) CDStruct_0441cfb5 previousEditingCellID; // @synthesize previousEditingCellID=mPreviousEditingCellID;
@property(retain, nonatomic) TSTEditingState *editingState; // @synthesize editingState=mEditingState;
@property(nonatomic) CDStruct_0441cfb5 editingCellID; // @synthesize editingCellID=mEditingCellID;
- (void)performBlockWithStylesheetForAddingStyles:(id /* block */)arg1;
- (void)didReplaceTextsInStoragesWithPlaceHolderString;
- (id)allWPStorages;
- (_Bool)textIsVertical;
- (_Bool)autoListTermination;
- (_Bool)autoListRecognition;
- (void)didCopy;
- (void)willCopyWithOtherDrawables:(id)arg1;
- (void)debugDump;
- (void)validate;
@property(readonly, nonatomic) CDStruct_5f1f7aa9 editingCellRange;
- (id)childInfos;
- (id)mergedContainedStorages;
- (id)descriptionForPasteboardWithSource:(id)arg1;
- (id)descriptionForExactCopy;
- (id)descriptionForPasteboard;
- (id)childCommandForApplyThemeCommand:(id)arg1;
- (void)replaceReferencedStylesUsingBlock:(id /* block */)arg1;
- (id)referencedStyles;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)childCommandForReplaceAllCommand:(id)arg1;
- (id)searchForAnnotationsWithHitBlock:(id /* block */)arg1;
- (id)searchForString:(id)arg1 options:(unsigned long long)arg2 onHit:(id /* block */)arg3;
- (void)acceptVisitor:(id)arg1;
- (id)childEnumerator;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (_Bool)canAspectRatioLockBeChangedByUser;
- (void)scaleInfoGeometry:(struct CGSize)arg1;
@property(nonatomic) long long contentWritingDirection;
@property(copy, nonatomic) TSDInfoGeometry *geometry; // @dynamic geometry;
- (void)setGeometry:(id)arg1 resizeInternal:(_Bool)arg2;
- (void)setGeometry:(id)arg1 resizeInternal:(_Bool)arg2 scaleFactor:(struct CGSize)arg3 shouldClearObjectPlaceholderFlag:(_Bool)arg4;
- (void)setGeometry:(id)arg1 resizeInternal:(_Bool)arg2 scaleFactor:(struct CGSize)arg3;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (_Bool)reverseChunkingIsSupported;
- (unsigned long long)textureDeliveryStyleFromDeliveryString:(id)arg1;
- (id)textureDeliveryStylesLocalized:(_Bool)arg1 animationFilter:(id)arg2;
- (unsigned long long)chunkCountForTextureDeliveryStyle:(unsigned long long)arg1 animationFilter:(id)arg2;
- (Class)layoutClass;
- (_Bool)supportsAttachedComments;
- (int)elementKind;
@property(readonly, nonatomic) TSTMasterLayout *masterLayout;
- (void)clearPartitioner;
@property(readonly, nonatomic) TSTTablePartitioner *partitioner;
- (_Bool)supportsHyperlinks;
- (Class)editorClass;
- (Class)repClass;
@property(readonly, nonatomic) TSTTableModel *tableModel;
@property(readonly, nonatomic) TSKDocumentRoot *documentRoot;
- (_Bool)isSafeToConvertToText;
- (_Bool)isSafeToConvertToAttributedString;
- (_Bool)isSafeToConvertToImage;
- (double)masterLayoutEffectiveTableNameHeight;
- (void)shiftGeometryToExcludeTableNameHeight;
- (void)shiftGeometryToIncludeTableNameHeight;
- (void)p_didLoadRichTextPayloadTable:(id)arg1;
- (void)setupTableModelForPrototypeIndex:(long long)arg1;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 fromSourceInfo:(id)arg2 carrySelection:(_Bool)arg3;
- (id)initWithContext:(id)arg1 fromSourceInfo:(id)arg2 cellRegion:(id)arg3 carrySelection:(_Bool)arg4;
- (id)initWithContext:(id)arg1 otherTableInfo:(id)arg2;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 styles:(id)arg3;
- (id)initForTestingWithContext:(id)arg1 rows:(unsigned short)arg2 columns:(unsigned short)arg3;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 rows:(unsigned short)arg3 columns:(unsigned short)arg4 styles:(id)arg5;
- (id)tabularTextRepresentation;

// Remaining properties
@property(readonly, nonatomic, getter=isAnchoredToText) _Bool anchoredToText; // @dynamic anchoredToText;
@property(readonly, nonatomic, getter=isAttachedToBodyText) _Bool attachedToBodyText;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isFloatingAboveText) _Bool floatingAboveText; // @dynamic floatingAboveText;
@property(readonly) NSUInteger hash;
@property(readonly, nonatomic, getter=isInlineWithText) _Bool inlineWithText; // @dynamic inlineWithText;
@property(nonatomic) _Bool matchesObjectPlaceholderGeometry;
@property(nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment; // @dynamic owningAttachment;
@property(readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse; // @dynamic owningAttachmentNoRecurse;
@property(nonatomic) NSObject<TSDContainerInfo> *parentInfo; // @dynamic parentInfo;
@property(readonly) Class superclass;

@end

