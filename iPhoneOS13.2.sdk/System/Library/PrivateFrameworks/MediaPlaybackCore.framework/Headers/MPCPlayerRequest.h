//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPRequest.h>

#import <MediaPlaybackCore/MPCMediaRemoteMiddlewareMetadataOperationConfiguration-Protocol.h>

@class MPCPlayerPath, MPPropertySet, NSString;

@interface MPCPlayerRequest : MPRequest <MPCMediaRemoteMiddlewareMetadataOperationConfiguration>
{
    _Bool _disablePlaybackStateValidation;
    _Bool _disablePlaybackRateValidation;
    MPCPlayerPath *_playerPath;
    MPPropertySet *_playingItemProperties;
    MPPropertySet *_queueSectionProperties;
    MPPropertySet *_queueItemProperties;
    NSString *_preferredFallbackItemRelationship;
    CDStruct_339ad95e _tracklistRange;
}

+ (Class)responseClass;
@property(copy, nonatomic) NSString *preferredFallbackItemRelationship; // @synthesize preferredFallbackItemRelationship=_preferredFallbackItemRelationship;
@property(nonatomic) _Bool disablePlaybackRateValidation; // @synthesize disablePlaybackRateValidation=_disablePlaybackRateValidation;
@property(nonatomic) _Bool disablePlaybackStateValidation; // @synthesize disablePlaybackStateValidation=_disablePlaybackStateValidation;
@property(copy, nonatomic) MPPropertySet *queueItemProperties; // @synthesize queueItemProperties=_queueItemProperties;
@property(copy, nonatomic) MPPropertySet *queueSectionProperties; // @synthesize queueSectionProperties=_queueSectionProperties;
@property(copy, nonatomic) MPPropertySet *playingItemProperties; // @synthesize playingItemProperties=_playingItemProperties;
@property(nonatomic) CDStruct_339ad95e tracklistRange; // @synthesize tracklistRange=_tracklistRange;
@property(retain, nonatomic) MPCPlayerPath *playerPath; // @synthesize playerPath=_playerPath;
- (id)_stateDumpObject;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)middlewareClasses;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

