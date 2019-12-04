//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSData, NSString, SSScreenshotAssetManagerRegistrationOptions, UIImage;

@protocol SSScreenshotAssetManagerBackend 
- (void)removeEntryWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)saveImageToTemporaryLocation:(UIImage *)arg1 withName:(NSString *)arg2 completionHandler:(void (^)(NSURL *, NSError *))arg3;
- (void)updateImage:(UIImage *)arg1 withModificationData:(NSData *)arg2 forEntryWithIdentifier:(NSString *)arg3 completionHandler:(void (^)(_Bool, NSError *))arg4;
- (void)imageForPreviouslyRegisteredIdentifier:(NSString *)arg1 imageHandler:(void (^)(UIImage *, NSError *))arg2;
- (void)registerEntryWithImage:(UIImage *)arg1 options:(SSScreenshotAssetManagerRegistrationOptions *)arg2 identifierHandler:(void (^)(NSString *, NSError *))arg3;
@end

