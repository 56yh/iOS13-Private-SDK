//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaServices/MSVLyricsElement.h>

@class NSArray, NSString;

@interface MSVLyricsSection : MSVLyricsElement
{
    long long _songPart;
    NSString *_songPartText;
    NSArray *_lines;
}

+ (long long)_songPartForText:(id)arg1;
@property(retain, nonatomic) NSArray *lines; // @synthesize lines=_lines;
@property(copy, nonatomic) NSString *songPartText; // @synthesize songPartText=_songPartText;
@property(nonatomic) long long songPart; // @synthesize songPart=_songPart;
- (id)description;
- (id)init;

@end

