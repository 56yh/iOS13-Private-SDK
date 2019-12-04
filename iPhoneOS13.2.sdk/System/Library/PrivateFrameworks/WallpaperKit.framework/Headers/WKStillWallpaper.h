//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WallpaperKit/WKAbstractWallpaper.h>

#import <WallpaperKit/WKFileBasedWallpaper-Protocol.h>

@class NSString, NSURL;

@interface WKStillWallpaper : WKAbstractWallpaper <WKFileBasedWallpaper>
{
    NSURL *_fullsizeImageURL;
    NSURL *_thumbnailImageURL;
}

@property(copy, nonatomic) NSURL *thumbnailImageURL; // @synthesize thumbnailImageURL=_thumbnailImageURL;
@property(copy, nonatomic) NSURL *fullsizeImageURL; // @synthesize fullsizeImageURL=_fullsizeImageURL;
@property(readonly, nonatomic) double stillTimeInVideo;
@property(readonly, copy, nonatomic) NSURL *videoAssetURL;
@property(readonly, nonatomic) unsigned long long type;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(unsigned long long)arg1 name:(id)arg2 thumbnailImageURL:(id)arg3 fullsizeImageURL:(id)arg4;
- (id)initWithIdentifier:(unsigned long long)arg1 name:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) unsigned long long identifier;
@property(readonly, copy, nonatomic) NSString *name;

@end

