//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifierEvent.h>

@class SBAppLayout;

@interface SBSwipeToKillSwitcherModifierEvent : SBSwitcherModifierEvent
{
    SBAppLayout *_appLayout;
    double _progress;
}

@property(readonly, nonatomic) double progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) SBAppLayout *appLayout; // @synthesize appLayout=_appLayout;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (long long)type;
- (id)initWithAppLayout:(id)arg1 progress:(double)arg2;

@end

