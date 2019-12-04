//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaServices/MSVSegmentedCodingPackage.h>

@class MPNowPlayingContentItem, NSDate, NSString, UIImage;

@interface _MPCPlaybackSessionArchive : MSVSegmentedCodingPackage
{
    MPNowPlayingContentItem *_contentItem;
    UIImage *_artworkImage;
    NSString *_identifier;
    NSDate *_lastModifiedDate;
}

+ (id)packageTypeIdentifier;
@property(readonly, copy, nonatomic) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) UIImage *artworkImage; // @synthesize artworkImage=_artworkImage;
@property(copy, nonatomic) MPNowPlayingContentItem *contentItem; // @synthesize contentItem=_contentItem;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)writeWithError:(id *)arg1;
- (_Bool)saveWithError:(id *)arg1;
- (id)description;
- (id)initWithURL:(id)arg1 identifier:(id)arg2;
- (id)initWithURL:(id)arg1;

@end

