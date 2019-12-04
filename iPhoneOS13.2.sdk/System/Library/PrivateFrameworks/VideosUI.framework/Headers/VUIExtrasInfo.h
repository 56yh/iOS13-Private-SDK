//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface VUIExtrasInfo : NSObject
{
    NSDictionary *_extrasDict;
}

@property(readonly, nonatomic) _Bool isEntitledToPlay;
@property(readonly, nonatomic) NSURL *tvAppDeeplinkURL;
@property(readonly, nonatomic) _Bool isLightTheme;
@property(readonly, nonatomic) NSString *loadingImage;
@property(retain, nonatomic) NSString *actionParams;
@property(readonly, nonatomic) NSNumber *contentRating;
@property(readonly, nonatomic) NSString *previewURLString;
@property(readonly, nonatomic) NSString *extrasURLString;
@property(readonly, nonatomic) NSString *adamID;
- (id)initWithMediaItem:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

