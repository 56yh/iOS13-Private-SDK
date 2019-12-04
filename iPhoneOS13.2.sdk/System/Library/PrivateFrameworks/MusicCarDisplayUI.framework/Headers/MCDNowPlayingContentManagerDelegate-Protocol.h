//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class MPCPlayerResponse, MPModelObject, NSError, NSString, UIViewController, _MCDNowPlayingContentManager;

@protocol MCDNowPlayingContentManagerDelegate 

@optional
- (void)contentManager:(_MCDNowPlayingContentManager *)arg1 itemDidChange:(MPModelObject *)arg2 response:(MPCPlayerResponse *)arg3;
- (void)contentManager:(_MCDNowPlayingContentManager *)arg1 sectionName:(NSString *)arg2;
- (void)contentManagerCompletedAllPlayback:(_MCDNowPlayingContentManager *)arg1;
- (void)contentManager:(_MCDNowPlayingContentManager *)arg1 displayItemIndex:(long long)arg2 totalItemCount:(long long)arg3;
- (void)contentManagerInitiatedPlaybackFromPlaybackQueue:(_MCDNowPlayingContentManager *)arg1;
- (void)contentManager:(_MCDNowPlayingContentManager *)arg1 bufferingItem:(_Bool)arg2;
- (void)contentManager:(_MCDNowPlayingContentManager *)arg1 presentViewController:(UIViewController *)arg2;
- (void)contentManagerReloadData:(_MCDNowPlayingContentManager *)arg1;
- (void)contentManager:(_MCDNowPlayingContentManager *)arg1 shouldShowPlaybackQueue:(_Bool)arg2;
- (void)contentManager:(_MCDNowPlayingContentManager *)arg1 processResponse:(MPCPlayerResponse *)arg2 error:(NSError *)arg3;
@end

