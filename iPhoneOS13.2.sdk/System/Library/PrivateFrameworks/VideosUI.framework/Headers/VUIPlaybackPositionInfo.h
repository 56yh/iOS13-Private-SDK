//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSNumber;

__attribute__((visibility("hidden")))
@interface VUIPlaybackPositionInfo : NSObject <NSCopying>
{
    NSNumber *_bookmarkTime;
    NSNumber *_playCount;
    NSNumber *_hasBeenPlayed;
}

@property(retain, nonatomic) NSNumber *hasBeenPlayed; // @synthesize hasBeenPlayed=_hasBeenPlayed;
@property(retain, nonatomic) NSNumber *playCount; // @synthesize playCount=_playCount;
@property(retain, nonatomic) NSNumber *bookmarkTime; // @synthesize bookmarkTime=_bookmarkTime;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

