//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Email/EFCancelable-Protocol.h>

@class EMRemoteConnection;

@protocol EMRecoverableObserver <EFCancelable>
- (void)recoverQueryWithRemoteConnection:(EMRemoteConnection *)arg1;
- (void)performQueryWithRemoteConnection:(EMRemoteConnection *)arg1;
@end

