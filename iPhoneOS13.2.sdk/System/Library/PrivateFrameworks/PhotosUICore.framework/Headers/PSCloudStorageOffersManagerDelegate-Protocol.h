//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSError, PSCloudStorageOffersManager, UIViewController;

@protocol PSCloudStorageOffersManagerDelegate 

@optional
- (void)managerDidCancel:(PSCloudStorageOffersManager *)arg1;
- (void)manager:(PSCloudStorageOffersManager *)arg1 loadDidFailWithError:(NSError *)arg2;
- (void)manager:(PSCloudStorageOffersManager *)arg1 willPresentViewController:(UIViewController *)arg2;
@end

