//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDictionary, NSString, TURouteController;

@protocol TURouteControllerActions <NSObject>
- (void)pickRouteWithUniqueIdentifier:(NSString *)arg1 shouldWaitUntilAvailable:(BOOL)arg2 forRouteController:(TURouteController *)arg3;
- (NSDictionary *)routesByUniqueIdentifierForRouteController:(TURouteController *)arg1;
@end

