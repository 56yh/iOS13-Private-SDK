//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDShapeInfo.h>

@class NSUUID, TSDDrawableInfo;

__attribute__((visibility("hidden")))
@interface TSDConnectionLineInfo : TSDShapeInfo
{
    NSUUID *mConnectedFromID;
    NSUUID *mConnectedToID;
    TSDDrawableInfo *mConnectedToInfo;
    TSDDrawableInfo *mConnectedFromInfo;
    struct {
        unsigned int connectedFrom:1;
        unsigned int connectedTo:1;
    } mInvalidFlags;
    _Bool mWriteConnectedReferencesForCopies;
}

@property(retain, nonatomic) TSDDrawableInfo *connectedFromInfo; // @synthesize connectedFromInfo=mConnectedFromInfo;
@property(retain, nonatomic) TSDDrawableInfo *connectedToInfo; // @synthesize connectedToInfo=mConnectedToInfo;
@property(retain, nonatomic) NSUUID *connectedToID; // @synthesize connectedToID=mConnectedToID;
@property(retain, nonatomic) NSUUID *connectedFromID; // @synthesize connectedFromID=mConnectedFromID;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (void)acceptVisitor:(id)arg1;
- (void)performBlockWithTemporaryLayout:(id /* block */)arg1;
- (void)didCopy;
- (void)willCopyWithOtherDrawables:(id)arg1;
- (_Bool)shouldPreventCopyOperationWithOtherInfos:(id)arg1;
- (_Bool)allowsParentGroupToBeResizedWithoutAspectRatioLock;
- (_Bool)canAnchor;
- (struct CGAffineTransform)computeLayoutFullTransform;
- (void)computeLayoutInfoGeometry:(id *)arg1 andPathSource:(id *)arg2;
- (id)computeLayoutInfoGeometry;
@property(retain, nonatomic) TSDDrawableInfo *connectedFrom;
@property(retain, nonatomic) TSDDrawableInfo *connectedTo;
- (_Bool)isLine;
- (id)presetKind;
- (Class)repClass;
- (Class)layoutClass;
- (id)copyWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3;
-     // Error parsing type: v32@0:8^{GeometryArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}^{Point}^{Size}If}16@24, name: saveGeometryToArchive:archiver:
- (void)saveToArchiver:(id)arg1;
-     // Error parsing type: v32@0:8^{ConnectionLineArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}^{ShapeArchive}^{Reference}^{Reference}^{UUID}^{UUID}}16@24, name: saveToArchive:archiver:
- (void)loadFromUnarchiver:(id)arg1;
-     // Error parsing type: v32@0:8r^{ConnectionLineArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}^{ShapeArchive}^{Reference}^{Reference}^{UUID}^{UUID}}16@24, name: loadFromArchive:unarchiver:
- (int)elementKind;

@end
