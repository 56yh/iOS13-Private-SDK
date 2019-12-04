//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLAssetContainer-Protocol.h>

@class NSArray, NSDate, NSOrderedSet, NSString, PLManagedAsset;

@interface PLSimpleAlbum : NSObject <PLAssetContainer>
{
    NSString *_title;
    NSOrderedSet *_assets;
    PLManagedAsset *_keyAsset;
    PLManagedAsset *_secondaryKeyAsset;
    PLManagedAsset *_tertiaryKeyAsset;
}

@property(retain, nonatomic) PLManagedAsset *tertiaryKeyAsset; // @synthesize tertiaryKeyAsset=_tertiaryKeyAsset;
@property(retain, nonatomic) PLManagedAsset *secondaryKeyAsset; // @synthesize secondaryKeyAsset=_secondaryKeyAsset;
@property(retain, nonatomic) PLManagedAsset *keyAsset; // @synthesize keyAsset=_keyAsset;
@property(readonly, copy, nonatomic) NSArray *localizedLocationNames;
@property(readonly, nonatomic) _Bool canShowAvalancheStacks;
@property(readonly, nonatomic) _Bool canShowComments;
- (_Bool)canPerformEditOperation:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) unsigned long long videosCount;
@property(readonly, nonatomic) unsigned long long photosCount;
@property(readonly, nonatomic) unsigned long long assetsCount;
@property(readonly, nonatomic) unsigned long long approximateCount;
@property(readonly, retain, nonatomic) NSOrderedSet *assets;
@property(readonly, copy, nonatomic) NSString *localizedTitle;
@property(readonly, retain, nonatomic) NSString *title;
@property(readonly, retain, nonatomic) NSString *uuid;
- (long long)_countOfAssetType:(short)arg1;
- (id)initWithTitle:(id)arg1 assets:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, retain, nonatomic) NSDate *endDate;
@property(readonly) NSUInteger hash;
@property(readonly, retain, nonatomic) NSDate *startDate;
@property(readonly) Class superclass;

@end

