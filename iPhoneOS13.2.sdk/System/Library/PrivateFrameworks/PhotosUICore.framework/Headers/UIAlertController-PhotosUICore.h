//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAlertController.h>

@interface UIAlertController (PhotosUICore)
+ (void)px_showDebugAlertInKeyWindowWithMessage:(id)arg1;
+ (id)px_alertControllerWithError:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)px_alertForStorageUpgradeLoadFailure;
+ (id)px_alertForCPLEnableError:(id)arg1 actionHandler:(id /* block */)arg2 cancelHandler:(id /* block */)arg3;
+ (id)px_deleteITunesContentAlertWithAssetCount:(long long)arg1 includesPhotos:(_Bool)arg2 includesVideos:(_Bool)arg3 actionHandler:(id /* block */)arg4 cancelHandler:(id /* block */)arg5;
@property(nonatomic) _Bool px_shouldForceAlertStyle;
@end

