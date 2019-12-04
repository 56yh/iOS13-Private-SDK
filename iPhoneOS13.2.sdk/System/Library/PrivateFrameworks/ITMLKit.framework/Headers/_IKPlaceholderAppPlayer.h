//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/IKAppPlayer-Protocol.h>

@class IKAppDocument, IKAppPlayerBridge, NSArray, NSDate, NSDictionary, NSMutableDictionary, NSNumber, NSString;
@protocol IKAppMediaItem, IKAppPlaylist;

@interface _IKPlaceholderAppPlayer : NSObject <IKAppPlayer>
{
    NSMutableDictionary *_eventExtraInfoByEvent;
    _Bool muted;
    _Bool showsResumeMenu;
    _Bool interactiveOverlayDismissable;
    IKAppPlayerBridge *bridge;
    long long state;
    id <IKAppPlaylist> playlist;
    NSNumber *currentMediaItemDuration;
    NSDate *currentMediaItemDate;
    id <IKAppMediaItem> currentMediaItem;
    double scanRate;
    id <IKAppMediaItem> nextMediaItem;
    id <IKAppMediaItem> previousMediaItem;
    IKAppDocument *overlayDocument;
    IKAppDocument *interactiveOverlayDocument;
    NSArray *currentMediaItemAccessLogs;
    NSArray *currentMediaItemErrorLogs;
    NSDictionary *contextMenuData;
    NSDictionary *userInfo;
}

@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo;
@property(copy, nonatomic) NSDictionary *contextMenuData; // @synthesize contextMenuData;
@property(readonly, nonatomic) NSArray *currentMediaItemErrorLogs; // @synthesize currentMediaItemErrorLogs;
@property(readonly, nonatomic) NSArray *currentMediaItemAccessLogs; // @synthesize currentMediaItemAccessLogs;
@property(nonatomic) _Bool interactiveOverlayDismissable; // @synthesize interactiveOverlayDismissable;
@property(retain, nonatomic) IKAppDocument *interactiveOverlayDocument; // @synthesize interactiveOverlayDocument;
@property(retain, nonatomic) IKAppDocument *overlayDocument; // @synthesize overlayDocument;
@property(readonly, nonatomic) id <IKAppMediaItem> previousMediaItem; // @synthesize previousMediaItem;
@property(readonly, nonatomic) id <IKAppMediaItem> nextMediaItem; // @synthesize nextMediaItem;
@property(nonatomic) _Bool showsResumeMenu; // @synthesize showsResumeMenu;
@property(nonatomic) _Bool muted; // @synthesize muted;
@property(readonly, nonatomic) double scanRate; // @synthesize scanRate;
@property(readonly, nonatomic) id <IKAppMediaItem> currentMediaItem; // @synthesize currentMediaItem;
@property(readonly, nonatomic) NSDate *currentMediaItemDate; // @synthesize currentMediaItemDate;
@property(readonly, nonatomic) NSNumber *currentMediaItemDuration; // @synthesize currentMediaItemDuration;
@property(retain, nonatomic) id <IKAppPlaylist> playlist; // @synthesize playlist;
@property(readonly, nonatomic) long long state; // @synthesize state;
@property(readonly, nonatomic) IKAppPlayerBridge *bridge; // @synthesize bridge;
- (void)cleanup;
- (void)stopObservingEvent:(id)arg1;
- (void)startObservingEvent:(id)arg1 extraInfo:(id)arg2;
- (void)setElapsedTime:(double)arg1;
- (void)scan:(double)arg1;
- (void)changeToMediaAtIndex:(long long)arg1;
- (void)previous;
- (void)next;
- (void)stop;
- (void)pause;
- (void)play;
- (void)present;
- (void)transferValuesToAppPlayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

