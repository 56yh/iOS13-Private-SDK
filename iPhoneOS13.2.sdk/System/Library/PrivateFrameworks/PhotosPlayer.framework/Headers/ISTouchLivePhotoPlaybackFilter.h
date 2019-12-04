//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosPlayer/ISLivePhotoPlaybackFilter.h>

@class ISDisplayLink, NSDate;

@interface ISTouchLivePhotoPlaybackFilter : ISLivePhotoPlaybackFilter
{
    _Bool _touchActive;
    long long __playbackRequestID;
    ISDisplayLink *__displayLink;
    NSDate *__playbackStartDate;
}

@property(retain, nonatomic, setter=_setPlaybackStartDate:) NSDate *_playbackStartDate; // @synthesize _playbackStartDate=__playbackStartDate;
@property(nonatomic, setter=_setDisplayLink:) ISDisplayLink *_displayLink; // @synthesize _displayLink=__displayLink;
@property(nonatomic, setter=_setPlaybackReaquestID:) long long _playbackRequestID; // @synthesize _playbackRequestID=__playbackRequestID;
@property(nonatomic, getter=isTouchActive) _Bool touchActive; // @synthesize touchActive=_touchActive;
- (void)reset;
- (void)_handleDisplayLink;
- (void)didPerformChanges;
- (long long)_nextPlaybackRequestID;

@end

