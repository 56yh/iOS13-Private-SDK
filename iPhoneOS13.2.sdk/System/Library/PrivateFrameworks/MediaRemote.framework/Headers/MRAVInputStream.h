//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaRemote/MRAVBufferedInputStream.h>

#import <MediaRemote/AVOutputContextCommunicationChannelDelegate-Protocol.h>

@class AVOutputContext, NSString;

@interface MRAVInputStream : MRAVBufferedInputStream <AVOutputContextCommunicationChannelDelegate>
{
    AVOutputContext *_outputContext;
}

@property(readonly, nonatomic) AVOutputContext *outputContext; // @synthesize outputContext=_outputContext;
- (void)outputContext:(id)arg1 didCloseCommunicationChannel:(id)arg2;
- (void)outputContext:(id)arg1 didReceiveData:(id)arg2 fromCommunicationChannel:(id)arg3;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithOutputContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

