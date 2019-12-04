//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSString, PHAssetCollection, PHPhotoLibrary;
@protocol PGHighlightModelChangeRequest;

@protocol PGHighlightModel 
@property(readonly, nonatomic) PHAssetCollection *assetCollection;
@property(readonly, nonatomic) NSString *uuid;
@property(readonly, nonatomic) _Bool isGroup;
@property(readonly, nonatomic, getter=isRecent) _Bool recent;
@property(nonatomic) unsigned short enrichmentState;
@property(nonatomic) unsigned short type;
- (id <PGHighlightModelChangeRequest>)changeRequest;
- (double)nonDefaultCurationScorePercentageForPhotoLibrary:(PHPhotoLibrary *)arg1;
- (double)faceAnalysisProgressForPhotoLibrary:(PHPhotoLibrary *)arg1;
- (double)sceneAnalysisProgressForPhotoLibrary:(PHPhotoLibrary *)arg1;
@end

