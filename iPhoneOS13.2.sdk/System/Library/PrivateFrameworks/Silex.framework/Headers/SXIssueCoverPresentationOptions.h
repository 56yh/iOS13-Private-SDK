//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface SXIssueCoverPresentationOptions : NSObject
{
    _Bool _videoPlaybackEnabled;
    UIColor *_parentBackgroundColor;
    struct CGSize _size;
}

@property(readonly, nonatomic) UIColor *parentBackgroundColor; // @synthesize parentBackgroundColor=_parentBackgroundColor;
@property(readonly, nonatomic) _Bool videoPlaybackEnabled; // @synthesize videoPlaybackEnabled=_videoPlaybackEnabled;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
- (id)initWithSize:(struct CGSize)arg1 videoPlaybackEnabled:(_Bool)arg2 parentBackgroundColor:(id)arg3;

@end

