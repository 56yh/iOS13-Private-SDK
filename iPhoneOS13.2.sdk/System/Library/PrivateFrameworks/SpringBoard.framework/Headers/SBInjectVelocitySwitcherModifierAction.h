//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifierAction.h>

@class SBAppLayout;

@interface SBInjectVelocitySwitcherModifierAction : SBSwitcherModifierAction
{
    SBAppLayout *_appLayout;
    struct CGPoint _velocity;
}

@property(readonly, nonatomic) SBAppLayout *appLayout; // @synthesize appLayout=_appLayout;
@property(readonly, nonatomic) struct CGPoint velocity; // @synthesize velocity=_velocity;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithVelocity:(struct CGPoint)arg1 appLayout:(id)arg2;
- (long long)type;

@end

