//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVTUIEnvironment, NSCache;

@interface AVTStickerConfigurationProvider : NSObject
{
    NSCache *_stickerConfigurationCache;
    AVTUIEnvironment *_environment;
}

@property(retain, nonatomic) AVTUIEnvironment *environment; // @synthesize environment=_environment;
@property(retain, nonatomic) NSCache *stickerConfigurationCache; // @synthesize stickerConfigurationCache=_stickerConfigurationCache;
- (id)stickerConfigurationForAvatarRecord:(id)arg1 stickerName:(id)arg2;
- (id)stickerConfigurationsForAvatarRecord:(id)arg1;
- (id)initWithEnvironment:(id)arg1;

@end

