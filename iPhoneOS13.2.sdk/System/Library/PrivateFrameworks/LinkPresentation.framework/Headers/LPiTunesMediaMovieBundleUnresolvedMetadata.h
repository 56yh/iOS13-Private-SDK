//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <LinkPresentation/LPiTunesMediaUnresolvedMetadata-Protocol.h>

@class LPiTunesMediaAsset, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface LPiTunesMediaMovieBundleUnresolvedMetadata : NSObject <LPiTunesMediaUnresolvedMetadata>
{
    NSString *_storeFrontIdentifier;
    NSString *_storeIdentifier;
    NSString *_name;
    NSString *_genre;
    LPiTunesMediaAsset *_artwork;
    NSArray *_offers;
}

@property(retain, nonatomic) NSArray *offers; // @synthesize offers=_offers;
@property(retain, nonatomic) LPiTunesMediaAsset *artwork; // @synthesize artwork=_artwork;
@property(copy, nonatomic) NSString *genre; // @synthesize genre=_genre;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property(copy, nonatomic) NSString *storeFrontIdentifier; // @synthesize storeFrontIdentifier=_storeFrontIdentifier;
- (id)assetsToFetch;
- (id)resolve;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

