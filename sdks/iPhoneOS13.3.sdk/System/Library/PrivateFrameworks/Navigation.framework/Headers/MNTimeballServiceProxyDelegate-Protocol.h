//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class MNPlannedDestination, MNRouteUpdate, NSError, NSUUID;

@protocol MNTimeballServiceProxyDelegate <NSObject>
- (void)didReceiveUpdate:(MNRouteUpdate *)arg1 forDestination:(MNPlannedDestination *)arg2;
- (void)didReceiveError:(NSError *)arg1 forDestination:(MNPlannedDestination *)arg2;
- (void)completedUpdateForHandlerID:(NSUUID *)arg1;
- (void)invokeHandlerWithID:(NSUUID *)arg1 forDestination:(MNPlannedDestination *)arg2 update:(MNRouteUpdate *)arg3 error:(NSError *)arg4;
@end

