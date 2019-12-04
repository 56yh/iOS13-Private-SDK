//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HFWallpaperEditCollection, NAFuture;
@protocol HFHomeKitObject><HMApplicationData;

@interface HFWallpaperEditCollectionBuilder : NSObject
{
    _Bool _hkObjectNewlyCreated;
    id <HFHomeKitObject><HMApplicationData> _hkObject;
    long long _namedWallpaperCollectionType;
    NAFuture *_initialEditCollectionFuture;
    HFWallpaperEditCollection *_updatedEditCollection;
}

@property(retain, nonatomic) HFWallpaperEditCollection *updatedEditCollection; // @synthesize updatedEditCollection=_updatedEditCollection;
@property(retain, nonatomic) NAFuture *initialEditCollectionFuture; // @synthesize initialEditCollectionFuture=_initialEditCollectionFuture;
@property(nonatomic) _Bool hkObjectNewlyCreated; // @synthesize hkObjectNewlyCreated=_hkObjectNewlyCreated;
@property(nonatomic) long long namedWallpaperCollectionType; // @synthesize namedWallpaperCollectionType=_namedWallpaperCollectionType;
@property(retain, nonatomic) id <HFHomeKitObject><HMApplicationData> hkObject; // @synthesize hkObject=_hkObject;
- (id)editCollectionForWallpaper:(id)arg1 image:(id)arg2;
- (id)commitWallpaper;
- (void)setWallpaper:(id)arg1 image:(id)arg2;
- (id)wallpaperEditCollectionFuture;
- (id)description;
- (id)initWithHomeKitObject:(id)arg1 namedWallpaperCollectionType:(long long)arg2;

@end

