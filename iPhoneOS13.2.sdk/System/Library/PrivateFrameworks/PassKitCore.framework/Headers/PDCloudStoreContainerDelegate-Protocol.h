//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSString, PDCloudStoreContainer;

@protocol PDCloudStoreContainerDelegate 
- (void)cloudStoreContainerShouldUnscheduleAllBackgroundActivities:(PDCloudStoreContainer *)arg1;
- (void)cloudStoreContainer:(PDCloudStoreContainer *)arg1 didChangeContainerState:(unsigned long long)arg2;
- (void)cloudStoreContainer:(PDCloudStoreContainer *)arg1 createdZoneWithName:(NSString *)arg2;
@end

