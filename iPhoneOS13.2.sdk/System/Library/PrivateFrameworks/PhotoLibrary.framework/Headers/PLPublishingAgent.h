//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibrary/PLDataArrayInputStreamProgressDelegate-Protocol.h>

@class NSData, NSMutableArray, NSString, PLVideoRemaker;
@protocol PLPublishingAgentDelegate;

@interface PLPublishingAgent : NSObject <PLDataArrayInputStreamProgressDelegate>
{
    id _userInfo;
    id _delegate;
    NSString *_mediaPath;
    NSData *_mediaData;
    NSString *_mimeType;
    _Bool _deleteAfterPublishing;
    double _changeRate;
    long long _currentValue;
    double _estimatedTimeRemaining;
    long long _maxValue;
    long long _normalizedCurrentValue;
    long long _normalizedMaxValue;
    float _percentComplete;
    float _remakingPercentComplete;
    float _progressMultiplier;
    NSMutableArray *_snapshotTimes;
    NSMutableArray *_snapshotValues;
    _Bool _ownerIsCamera;
    _Bool _needsRemaking;
    double _startTime;
    double _endTime;
    long long _approximateHDUploadSize;
    long long _approximateSDUploadSize;
    _Bool _mediaIsHDVideo;
    _Bool _enableHDUpload;
    _Bool _needsTrimming;
    _Bool _allowsHDOver3GUpload;
    int _selectedOption;
    PLVideoRemaker *_remaker;
    int _remakerMode;
    SEL _completionSelector;
    unsigned int _remakingWasCancelled:1;
    unsigned int _remaking:1;
    unsigned int _publishing:1;
    _Bool _shouldCancelPublish;
}

+ (_Bool)canUploadHDVideoOverCellular;
+ (id)publishingAgentForBundleNamed:(id)arg1 toPublishMedia:(id)arg2;
@property(nonatomic) _Bool shouldCancelPublish; // @synthesize shouldCancelPublish=_shouldCancelPublish;
@property(nonatomic) _Bool allowsHDOver3GUpload; // @synthesize allowsHDOver3GUpload=_allowsHDOver3GUpload;
@property(nonatomic) float progressMultiplier; // @synthesize progressMultiplier=_progressMultiplier;
@property(nonatomic) int selectedOption; // @synthesize selectedOption=_selectedOption;
@property(nonatomic) int remakerMode; // @synthesize remakerMode=_remakerMode;
@property(nonatomic) _Bool needsTrimming; // @synthesize needsTrimming=_needsTrimming;
@property(nonatomic) _Bool enableHDUpload; // @synthesize enableHDUpload=_enableHDUpload;
@property(nonatomic) _Bool mediaIsHDVideo; // @synthesize mediaIsHDVideo=_mediaIsHDVideo;
@property(nonatomic) long long approximateSDUploadSize; // @synthesize approximateSDUploadSize=_approximateSDUploadSize;
@property(nonatomic) long long approximateHDUploadSize; // @synthesize approximateHDUploadSize=_approximateHDUploadSize;
@property(nonatomic) _Bool ownerIsCamera; // @synthesize ownerIsCamera=_ownerIsCamera;
@property(nonatomic) id <PLPublishingAgentDelegate> delegate; // @synthesize delegate=_delegate;
- (void)showAlertWithError:(id)arg1;
- (int)_remakerModeForSelectedOption;
- (id)progressViewMessageDuringRemake;
- (void)videoRemaker:(id)arg1 progressDidChange:(float)arg2;
- (void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2;
- (void)_remakerDidFinish:(id)arg1;
- (void)videoRemakerDidBeginRemaking:(id)arg1;
- (void)_transcodeVideo:(id)arg1;
- (void)_cancelRemaking:(id)arg1;
- (_Bool)isRemaking;
- (void)cancelRemaking;
- (float)remakingPercentComplete;
- (float)percentComplete;
- (double)estimatedTimeRemaining;
- (void)_updateStatisticsFromSnapshots;
- (void)snapshot;
- (void)setTotalBytesWritten:(long long)arg1 totalBytes:(long long)arg2;
- (void)dataArrayInputStreamBytesWereRead:(id)arg1;
- (double)maximumVideoDuration;
- (_Bool)allowsViewingOnHost;
- (_Bool)allowsTellingFriend;
- (id)tellAFriendBody;
- (id)tellAFriendSubject;
- (id)tellAFriendURL;
- (_Bool)isVideoMedia;
- (id)mediaTitle;
- (id)mediaURL;
- (void)willDismiss;
- (void)dismiss;
- (void)presentModalSheetInViewController:(id)arg1;
- (id)serviceName;
- (void)publish;
- (void)_agentIsReadyToPublish:(id)arg1;
- (void)doneButtonClicked;
- (void)cancelButtonClicked;
- (id)navigationController;
- (void)resignPublishingSheetResponders;
- (void)_setApproximateVideoUploadSizes;
- (void)setTrimStartTime:(double)arg1 andEndTime:(double)arg2;
- (void)setPublishing:(_Bool)arg1;
- (_Bool)isPublishing;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;
- (void)setMediaData:(id)arg1;
- (id)mediaData;
- (_Bool)deleteMediaFileAfterPublishing;
- (void)setDeleteMediaFileAfterPublishing:(_Bool)arg1;
- (void)setMediaPath:(id)arg1;
- (id)mediaPath;
- (void)_setUpPublishingParams;
- (void)dealloc;
- (id)initWithMedia:(id)arg1;
- (void)_stopNetworkObservation;
- (void)_startNetworkObservation;
- (void)_networkReachabilityDidChange:(id)arg1;
@property(readonly, nonatomic) _Bool allowsCellularAccessForRequests;

@end

