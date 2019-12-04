//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSKChangeSourceObserver-Protocol.h>
#import <iWorkImport/TSWPStorageObserver-Protocol.h>

@class NSString, TSWPCTTypesetterCache, TSWPDirtyRangeArray, TSWPMutableDirtyRangeArray, TSWPMutableTopicNumberHints, TSWPStorage;
@protocol TSWPLayoutOwner, TSWPTopicNumberHints;

__attribute__((visibility("hidden")))
@interface TSWPLayoutManager : NSObject <TSWPStorageObserver, TSKChangeSourceObserver>
{
    TSWPStorage *_storage;
    _Bool _isObservingStorage;
    _Bool _useLigatures;
    _Bool _layoutFinished;
    _Bool _shouldClearTypesetterCache;
    _Bool _isLayingOut;
    TSWPMutableDirtyRangeArray *_dirtyRanges;
    TSWPCTTypesetterCache *_typesetterCache;
    TSWPMutableTopicNumberHints *_initialTopicNumbers;
    id <TSWPLayoutOwner> _owner;
}

+ (void)setTransformForColumn:(id)arg1 andInvalidateWPRect:(struct CGRect)arg2 inTarget:(id)arg3;
+ (void)setTransformForColumn:(id)arg1 inTarget:(id)arg2 metrics:(id)arg3;
+ (void)fixColumnBoundsForTarget:(id)arg1 storage:(id)arg2 charIndex:(unsigned long long)arg3 firstColumnIndex:(unsigned long long)arg4 precedingHeight:(double)arg5 height:(double)arg6 alreadyHasMargins:(_Bool)arg7 styleProvider:(id)arg8;
@property(readonly, nonatomic) _Bool layoutFinished; // @synthesize layoutFinished=_layoutFinished;
@property(readonly, nonatomic) __weak id <TSWPLayoutOwner> owner; // @synthesize owner=_owner;
@property(readonly, nonatomic) _Bool isLayingOut; // @synthesize isLayingOut=_isLayingOut;
@property(copy, nonatomic) NSObject<TSWPTopicNumberHints> *initialTopicNumberHints; // @synthesize initialTopicNumberHints=_initialTopicNumbers;
@property(readonly, nonatomic) TSWPDirtyRangeArray *dirtyRanges; // @synthesize dirtyRanges=_dirtyRanges;
@property(readonly, nonatomic) TSWPStorage *storage; // @synthesize storage=_storage;
- (unsigned long long)p_layoutConfigFlagsForTarget:(id)arg1;
@property(readonly, nonatomic) TSWPCTTypesetterCache *typesetterCache;
- (void)destroyLayoutState:(void *)arg1;
- (void)inflateTarget:(id)arg1 fromHints:(id)arg2 childHint:(id)arg3 anchoredDrawablePositions:(id)arg4 topicNumbers:(id)arg5 footnoteLayoutRange:(struct _NSRange)arg6;
- (void)deflateTarget:(id)arg1 intoHints:(inout id)arg2 childHints:(inout id)arg3 anchoredDrawablePositions:(id *)arg4 startingPartitionedAttachments:(out id *)arg5 topicNumbers:(out id *)arg6 layoutState:(void *)arg7;
- (void *)layoutStateForLayoutWithHint:(id)arg1 firstTarget:(id)arg2 topicNumbers:(id)arg3;
- (void *)layoutStateForLayoutAfterHint:(id)arg1 firstTarget:(id)arg2 childHint:(id)arg3 topicNumbers:(id)arg4;
- (void *)layOutIntoTarget:(id)arg1 withLayoutState:(void *)arg2 outSync:(_Bool *)arg3;
- (_Bool)needsLayoutInColumn:(id)arg1;
- (id)layoutMetricsCache;
- (void)willRemoveAttachmentLayout:(id)arg1;
- (void)storage:(id)arg1 didChangeRange:(struct _NSRange)arg2 delta:(long long)arg3 broadcastKind:(unsigned long long)arg4;
- (void)removeDirtyRange:(struct _NSRange)arg1;
- (void)resetDirtyRange;
- (void)clearTypesetterCache;
- (void)clearOwner;
- (id)styleProvider;
- (void)dealloc;
- (id)initWithStorage:(id)arg1 owner:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

