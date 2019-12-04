//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaRemote/MRNowPlayingArtwork.h>

@class NSData, NSString;

@interface MRNowPlayingArtworkImage : MRNowPlayingArtwork
{
    NSData *_imageData;
    NSString *_mimeType;
}

@property(readonly, copy, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(readonly, copy, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
- (id)description;
- (id)copyImageData;
- (_Bool)hasArtworkData;
- (unsigned int)type;
- (_Bool)isEqual:(id)arg1;
- (id)initWithImageData:(id)arg1 mimeType:(id)arg2;

@end

