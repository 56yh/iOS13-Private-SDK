//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKLayoutRule.h>

@interface NTKComplicationLayoutRule : NTKLayoutRule
{
    UIEdgeInsets _keylinePadding;
}

+ (id)layoutRuleForDevice:(id)arg1 withReferenceFrame:(CGRect)arg2 horizontalLayout:(long long)arg3 verticalLayout:(long long)arg4 keylinePadding:(UIEdgeInsets)arg5 clip:(BOOL)arg6 transform:(CGAffineTransform)arg7;
+ (id)layoutRuleForDevice:(id)arg1 withReferenceFrame:(CGRect)arg2 horizontalLayout:(long long)arg3 verticalLayout:(long long)arg4 keylinePadding:(UIEdgeInsets)arg5 clip:(BOOL)arg6;
+ (id)layoutRuleForDevice:(id)arg1 withReferenceFrame:(CGRect)arg2 horizontalLayout:(long long)arg3 verticalLayout:(long long)arg4 keylinePadding:(UIEdgeInsets)arg5;
@property(readonly, nonatomic) UIEdgeInsets keylinePadding; // @synthesize keylinePadding=_keylinePadding;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;

@end
