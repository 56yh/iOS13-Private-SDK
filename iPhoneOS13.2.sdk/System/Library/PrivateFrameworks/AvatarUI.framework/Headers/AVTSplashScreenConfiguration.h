//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVPlayerItem, NSString;

@interface AVTSplashScreenConfiguration : NSObject
{
    AVPlayerItem *_primaryPlayerItem;
    AVPlayerItem *_secondaryPlayerItem;
    NSString *_titleString;
    NSString *_subTitleString;
    NSString *_buttonString;
}

@property(retain, nonatomic) NSString *buttonString; // @synthesize buttonString=_buttonString;
@property(retain, nonatomic) NSString *subTitleString; // @synthesize subTitleString=_subTitleString;
@property(retain, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
@property(retain, nonatomic) AVPlayerItem *secondaryPlayerItem; // @synthesize secondaryPlayerItem=_secondaryPlayerItem;
@property(retain, nonatomic) AVPlayerItem *primaryPlayerItem; // @synthesize primaryPlayerItem=_primaryPlayerItem;

@end

