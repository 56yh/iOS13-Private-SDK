//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class AVOutputContext, AVOutputContextCommunicationChannel, NSData;

@protocol AVOutputContextCommunicationChannelDelegate 

@optional
- (void)outputContext:(AVOutputContext *)arg1 didCloseCommunicationChannel:(AVOutputContextCommunicationChannel *)arg2;
- (void)outputContext:(AVOutputContext *)arg1 didReceiveData:(NSData *)arg2 fromCommunicationChannel:(AVOutputContextCommunicationChannel *)arg3;
- (void)outputContextOutgoingCommunicationChannelDidBecomeAvailable:(AVOutputContext *)arg1;
@end

