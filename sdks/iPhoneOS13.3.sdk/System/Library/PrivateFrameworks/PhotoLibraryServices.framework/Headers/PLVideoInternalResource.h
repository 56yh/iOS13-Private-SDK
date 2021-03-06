//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLVideoResource-Protocol.h>

@protocol PLResource;

@interface PLVideoInternalResource : NSObject <PLVideoResource>
{
    id <PLResource> _backingResource;
}

@property(readonly, nonatomic) id <PLResource> backingResource; // @synthesize backingResource=_backingResource;
// - (void).cxx_destruct;
- (id)fileURLIfLocal;
- (BOOL)matchesOrExceedsQualityLevel:(unsigned int)arg1;
- (BOOL)isMediumHighQuality;
- (BOOL)isStreamable;
- (BOOL)isRemotelyAvailable;
- (BOOL)isPlayable;
- (BOOL)isLocallyGeneratable;
- (BOOL)isLocallyAvailable;
- (BOOL)isOriginalVideoComplement;
- (BOOL)isEqual:(id)arg1;
- (id)initWithBackingResource:(id)arg1;

@end

