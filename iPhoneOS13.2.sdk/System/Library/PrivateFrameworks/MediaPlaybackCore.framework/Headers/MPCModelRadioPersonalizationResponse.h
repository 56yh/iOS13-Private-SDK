//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPModelResponse.h>

@class MPSectionedCollection, MPStoreLibraryPersonalizationResponse;

@interface MPCModelRadioPersonalizationResponse : MPModelResponse
{
    MPStoreLibraryPersonalizationResponse *_personalizationResponse;
    MPSectionedCollection *_radioStationTracks;
}

@property(copy, nonatomic) MPSectionedCollection *radioStationTracks; // @synthesize radioStationTracks=_radioStationTracks;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 personalizationResponse:(id)arg2;

// Remaining properties
@property(readonly, copy, nonatomic) MPSectionedCollection *results; // @dynamic results;

@end

