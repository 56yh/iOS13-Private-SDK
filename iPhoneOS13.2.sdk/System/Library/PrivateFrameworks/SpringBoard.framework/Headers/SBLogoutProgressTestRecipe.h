//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBLogoutProgressDataSource-Protocol.h>
#import <SpringBoard/SBTestRecipe-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSString, SBLogoutProgressTransientOverlayViewController;

@interface SBLogoutProgressTestRecipe : NSObject <SBLogoutProgressDataSource, SBTestRecipe>
{
    NSMutableArray *_tasks;
    SBLogoutProgressTransientOverlayViewController *_logoutProgressTransientOverlayViewController;
    NSArray *_remainingApplications;
    NSDictionary *_remainingBlockingTasks;
}

+ (void)load;
@property(retain, nonatomic) NSDictionary *remainingBlockingTasks; // @synthesize remainingBlockingTasks=_remainingBlockingTasks;
@property(copy, nonatomic) NSArray *remainingApplications; // @synthesize remainingApplications=_remainingApplications;
@property(retain, nonatomic) SBLogoutProgressTransientOverlayViewController *logoutProgressTransientOverlayViewController; // @synthesize logoutProgressTransientOverlayViewController=_logoutProgressTransientOverlayViewController;
- (id)_defaultPendingApplications;
- (id)_defaultBlockingTasks;
- (id)debugBlockingTasksForLogoutProgressTransientOverlayViewController:(id)arg1;
- (id)pendingApplicationsForLogoutProgressTransientOverlayViewController:(id)arg1;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (id)title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

