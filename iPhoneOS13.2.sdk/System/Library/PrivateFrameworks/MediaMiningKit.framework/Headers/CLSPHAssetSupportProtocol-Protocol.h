//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaMiningKit/CLSInvestigationItem-Protocol.h>

@class CLSAssetFaceInformationSummary, NSData, NSSet;

@protocol CLSPHAssetSupportProtocol <CLSInvestigationItem>
@property(readonly, nonatomic) CLSAssetFaceInformationSummary *clsFaceInformationSummary;
@property(readonly, nonatomic) unsigned long long clsPeopleCount;
- (long long)highestSupportedScoringVersion;
- (short)clsInterestingAudioClassifications;
- (double)duration;
- (NSSet *)clsSceneClassifications;
- (_Bool)clsIsTragicallyBad;
- (double)clsAestheticScore;
- (double)clsExposureScore;
- (double)clsSharpnessScore;
- (unsigned long long)clsVideoFaceCount;
- (double)clsActivityScore;
- (double)clsVideoScore;
- (NSData *)clsDistanceIdentity;
- (long long)clsShareCount;
- (long long)clsPlayCount;
- (long long)clsViewCount;
- (unsigned long long)facesCount;
- (_Bool)representsBurst;
- (_Bool)isSubtype:(unsigned long long)arg1;
- (_Bool)isIncludedInCloudFeeds;
- (_Bool)hasAdjustments;
- (_Bool)isUtility;
- (_Bool)isBlurry;
- (_Bool)isTrashed;
- (_Bool)isAudio;
- (_Bool)isVideo;
- (_Bool)isPhoto;
- (_Bool)isHidden;
- (_Bool)isFavorite;
@end

