//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class BBBulletin, BBSyncService, NSArray, NSString;

@protocol BBSyncServiceDelegate 
- (NSString *)syncService:(BBSyncService *)arg1 sectionIdentifierForUniversalSectionIdentifier:(NSString *)arg2;
- (NSString *)syncService:(BBSyncService *)arg1 universalSectionIdentifierForSectionIdentifier:(NSString *)arg2;
- (_Bool)syncService:(BBSyncService *)arg1 shouldAbortDelayedDismissalForBulletin:(BBBulletin *)arg2;
- (void)syncService:(BBSyncService *)arg1 receivedDismissalDictionaries:(NSArray *)arg2 dismissalIDs:(NSArray *)arg3 inSection:(NSString *)arg4 forFeeds:(unsigned long long)arg5;
@end

