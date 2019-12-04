//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class RTCReporting;
@protocol TVPMediaItem;

@interface TVPReportingSession : NSObject
{
    NSObject<TVPMediaItem> *_mediaItem;
    RTCReporting *_reporter;
}

+ (void)initialize;
@property(retain, nonatomic) RTCReporting *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) NSObject<TVPMediaItem> *mediaItem; // @synthesize mediaItem=_mediaItem;
- (void)_sendEvent:(id)arg1 withCategory:(unsigned short)arg2 type:(unsigned short)arg3 values:(id)arg4;
- (void)reportDownloadFinishedWithResult:(long long)arg1 error:(id)arg2;
- (id)initWithMediaItem:(id)arg1;

@end

