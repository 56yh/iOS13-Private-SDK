//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/WFAccessResource.h>

@interface WFInstapaperAccessResource : WFAccessResource
{
}

+ (id)instapaperTokenSecret;
+ (id)instapaperToken;
+ (id)instapaperUsername;
+ (void)initialize;
- (void)logOut;
- (_Bool)canLogOut;
- (id)username;
- (id)resourceName;
- (unsigned long long)globalLevelStatus;
- (id)protectedResourceDescription;
- (id)associatedAppIdentifier;

@end

