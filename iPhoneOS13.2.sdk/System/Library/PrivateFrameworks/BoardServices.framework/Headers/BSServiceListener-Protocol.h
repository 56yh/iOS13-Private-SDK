//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class BSServiceConnection, NSString;
@protocol BSServiceConnectionHost;

@protocol BSServiceListener 
@property(readonly, copy, nonatomic) NSString *instance;
@property(readonly, copy, nonatomic) NSString *service;
- (void)didReceiveConnection:(BSServiceConnection<BSServiceConnectionHost> *)arg1;
@end

