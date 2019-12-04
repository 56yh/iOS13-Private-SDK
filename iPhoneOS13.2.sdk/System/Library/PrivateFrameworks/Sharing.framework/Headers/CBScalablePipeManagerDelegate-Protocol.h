//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class CBScalablePipe, CBScalablePipeManager, NSError, NSString;

@protocol CBScalablePipeManagerDelegate 
- (void)scalablePipeManagerDidUpdateState:(CBScalablePipeManager *)arg1;

@optional
- (void)scalablePipeManager:(CBScalablePipeManager *)arg1 pipeDidDisconnect:(CBScalablePipe *)arg2 error:(NSError *)arg3;
- (void)scalablePipeManager:(CBScalablePipeManager *)arg1 pipeDidConnect:(CBScalablePipe *)arg2;
- (void)scalablePipeManager:(CBScalablePipeManager *)arg1 didUnregisterEndpoint:(NSString *)arg2;
- (void)scalablePipeManager:(CBScalablePipeManager *)arg1 didRegisterEndpoint:(NSString *)arg2 error:(NSError *)arg3;
@end

