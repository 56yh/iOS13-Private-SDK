//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterFoundation/GKAchievementDescription.h>

@class GKGame, NSString;

@interface GKLocalizedAchievementDescription : GKAchievementDescription
{
    GKGame *_game;
    NSString *_iconImageName;
}

@property(copy) NSString *iconImageName; // @synthesize iconImageName=_iconImageName;
@property(retain) GKGame *game; // @synthesize game=_game;
- (id)imageNameForIcon;
- (id)unachievedDescription;
- (id)achievedDescription;
- (id)title;
- (id)_localizedStringFromKey:(id)arg1;
- (void)dealloc;

@end

