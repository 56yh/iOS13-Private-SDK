//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/IKDOMFeature-Protocol.h>

@class IKAppContext, IKAppMediaItemBridge, IKAppPlaylistBridge, IKDOMDocument, IKJSPlayer, NSArray, NSDate, NSDictionary, NSNumber, NSString, _IKPlaceholderAppPlayer;
@protocol IKAppPlayer;

@interface IKAppPlayerBridge : NSObject <IKDOMFeature>
{
    _IKPlaceholderAppPlayer *_placeholderAppPlayer;
    _Bool _interactiveOverlayDismissable;
    _Bool _muted;
    _Bool _showsResumeMenu;
    IKAppContext *_appContext;
    NSString *_featureName;
    IKAppPlaylistBridge *_playlist;
    id <IKAppPlayer> _appPlayer;
    IKJSPlayer *_jsPlayer;
    IKDOMDocument *_overlayDocument;
    IKDOMDocument *_interactiveOverlayDocument;
    NSDictionary *_contextMenuData;
    NSDictionary *_userInfo;
}

+ (id)makeFeatureJSObjectForFeature:(id)arg1;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) _Bool showsResumeMenu; // @synthesize showsResumeMenu=_showsResumeMenu;
@property(copy, nonatomic) NSDictionary *contextMenuData; // @synthesize contextMenuData=_contextMenuData;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) _Bool interactiveOverlayDismissable; // @synthesize interactiveOverlayDismissable=_interactiveOverlayDismissable;
@property(retain, nonatomic) IKDOMDocument *interactiveOverlayDocument; // @synthesize interactiveOverlayDocument=_interactiveOverlayDocument;
@property(retain, nonatomic) IKDOMDocument *overlayDocument; // @synthesize overlayDocument=_overlayDocument;
@property(nonatomic) __weak IKJSPlayer *jsPlayer; // @synthesize jsPlayer=_jsPlayer;
@property(nonatomic) __weak id <IKAppPlayer> appPlayer; // @synthesize appPlayer=_appPlayer;
@property(retain, nonatomic) IKAppPlaylistBridge *playlist; // @synthesize playlist=_playlist;
@property(readonly, copy, nonatomic) NSString *featureName; // @synthesize featureName=_featureName;
@property(readonly, nonatomic) __weak IKAppContext *appContext; // @synthesize appContext=_appContext;
- (void)_evaluateDelegateBlockSync:(id /* block */)arg1;
- (void)dispatchEvent:(id)arg1 userInfo:(id)arg2 completion:(id /* block */)arg3;
- (void)stopObservingEvent:(id)arg1;
- (void)startObservingEvent:(id)arg1 extraInfo:(id)arg2;
@property(readonly, nonatomic) NSArray *currentMediaItemErrorLogs;
@property(readonly, nonatomic) NSArray *currentMediaItemAccessLogs;
@property(readonly, nonatomic) double scanRate;
@property(readonly, nonatomic) IKAppMediaItemBridge *previousMediaItem;
@property(readonly, nonatomic) IKAppMediaItemBridge *nextMediaItem;
@property(readonly, nonatomic) IKAppMediaItemBridge *currentMediaItem;
@property(readonly, nonatomic) NSNumber *currentMediaItemDuration;
@property(readonly, nonatomic) NSDate *currentMediaItemDate;
@property(readonly, nonatomic) long long state;
- (void)setElapsedTime:(double)arg1;
- (void)scan:(double)arg1;
- (void)changeToMediaAtIndex:(unsigned long long)arg1;
- (void)previous;
- (void)next;
- (void)stop;
- (void)pause;
- (void)present;
- (void)play;
- (void)cleanup;
- (id)initWithAppContext:(id)arg1 jsPlayer:(id)arg2;
- (id)initWithDOMNode:(id)arg1 featureName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

