//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class MSPSharedTripService, NSError, NSString;

@protocol MSPSharedTripServiceSendingObserver 
- (void)sharedTripService:(MSPSharedTripService *)arg1 sendMessage:(NSString *)arg2 toGroup:(NSString *)arg3;
- (void)sharedTripService:(MSPSharedTripService *)arg1 sendMessage:(NSString *)arg2 toParticipant:(NSString *)arg3;
- (void)invalidateActiveHandlesForSharedTripService:(MSPSharedTripService *)arg1;
- (void)sharedTripService:(MSPSharedTripService *)arg1 sharingDidInvalidateWithError:(NSError *)arg2;
@end

