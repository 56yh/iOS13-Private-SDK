//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXAssetActionManager.h>

@class NSMutableDictionary, PXCMMPhotoKitImportStatusManager;

@interface PXCMMAssetActionManager : PXAssetActionManager
{
    NSMutableDictionary *_performerClassByType;
    PXCMMPhotoKitImportStatusManager *_importStatusManager;
}

- (id)actionPerformerForActionType:(id)arg1;
- (_Bool)shouldEnableActionType:(id)arg1 onAsset:(id)arg2;
- (_Bool)canPerformActionType:(id)arg1;
- (id)initWithSelectionManager:(id)arg1 importStatusManager:(id)arg2 allowsSelection:(_Bool)arg3;

@end

