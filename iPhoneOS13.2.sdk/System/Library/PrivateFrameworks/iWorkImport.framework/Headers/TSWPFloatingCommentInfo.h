//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSWPShapeInfo.h>

#import <iWorkImport/TSDComment-Protocol.h>

@class NSDate, NSString, TSDCommentStorage, TSKAnnotationAuthor;

__attribute__((visibility("hidden")))
@interface TSWPFloatingCommentInfo : TSWPShapeInfo <TSDComment>
{
    TSDCommentStorage *_commentStorage;
}

+ (id)p_defaultShadow;
+ (id)p_defaultFill;
+ (id)p_defaultPadding;
+ (id)p_defaultStroke;
+ (id)commentInfoWithContext:(id)arg1 size:(struct CGSize)arg2 storage:(id)arg3;
+ (id)p_commentInfoWithContext:(id)arg1 geometry:(id)arg2 storage:(id)arg3;
+ (struct CGSize)commentInitialSizeWithContext:(id)arg1;
+ (void)upgradeCommentInfoStorage:(id)arg1;
+ (void)upgradeCommentParagraphStylesForStylesheet:(id)arg1 withCommentScale:(double)arg2;
+ (void)upgradeCommentInfoStyle:(id)arg1;
+ (void)createCommentInfoStyleInStylesheetIfNeeded:(id)arg1;
+ (id)p_commentParagraphStyleForStylesheet:(id)arg1 fontSize:(unsigned long long)arg2;
+ (id)commentParagraphStyleForStylesheet:(id)arg1 scalingMultiplier:(double)arg2;
+ (id)commentParagraphStyleForStylesheet:(id)arg1;
+ (id)commentParagraphStyleIdentifierForFontSize:(unsigned long long)arg1;
+ (id)p_defaultCommentInfoStyleInStylesheet:(id)arg1;
+ (id)commentStyleIdentifier;
+ (id)bezierPathForExportCommentOutline;
@property(readonly, nonatomic) NSString *annotationUUID;
- (_Bool)isInDocument;
- (_Bool)isFloatingComment;
@property(copy, nonatomic) TSDCommentStorage *storage;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)commentWillBeAddedToDocumentRoot;
@property(readonly, nonatomic) NSDate *date;
@property(retain, nonatomic) TSKAnnotationAuthor *author;
-     // Error parsing type: v32@0:8^{CommentInfoArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}^{ShapeInfoArchive}^{Reference}}16@24, name: saveToArchive:archiver:
- (void)saveToArchiver:(id)arg1;
@property(readonly, nonatomic) double commentScalingMultiplier;
-     // Error parsing type: v32@0:8r^{CommentInfoArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}^{ShapeInfoArchive}^{Reference}}16@24, name: loadFromArchive:unarchiver:
- (void)loadFromUnarchiver:(id)arg1;
- (void)enumerateAllAnnotationsInModelWithHitBlock:(id /* block */)arg1;
- (Class)editorClass;
- (double)transformGeometryRatioForTransform:(struct CGAffineTransform)arg1;
- (_Bool)supportsAttachedComments;
@property(readonly, nonatomic) _Bool isHighlight;
@property(readonly, nonatomic) int annotationDisplayStringType;
@property(readonly, nonatomic) int annotationType;
- (Class)layoutClass;
- (Class)repClass;
- (_Bool)supportsHyperlinks;
- (_Bool)isAllowedInGroups;
- (_Bool)isLockable;
- (int)elementKind;
- (id)copyWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4 wpStorage:(id)arg5;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4 wpStorage:(id)arg5 commentStorage:(id)arg6;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4 commentStorage:(id)arg5;
- (id)creationDateString;
- (id)pathSourceForExportCommentOutline;
@property(retain, nonatomic) TSDCommentStorage *commentStorage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

