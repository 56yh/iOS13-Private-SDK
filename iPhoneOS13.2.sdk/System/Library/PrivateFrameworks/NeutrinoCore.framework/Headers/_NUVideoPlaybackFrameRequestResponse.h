//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/_NURenderResult.h>

#import <NeutrinoCore/NUVideoPlaybackFrameResult-Protocol.h>

@class NSString;
@protocol NURenderStatistics;

@interface _NUVideoPlaybackFrameRequestResponse : _NURenderResult <NUVideoPlaybackFrameResult>
{
    struct __CVBuffer *_frame;
}

@property(retain) struct __CVBuffer *frame; // @synthesize frame=_frame;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) id <NURenderStatistics> statistics;
@property(readonly) Class superclass;

@end

