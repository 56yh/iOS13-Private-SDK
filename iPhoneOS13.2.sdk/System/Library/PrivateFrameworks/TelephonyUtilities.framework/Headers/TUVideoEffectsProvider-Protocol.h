//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, NSString, TUVideoEffect, UIImage;

@protocol TUVideoEffectsProvider 
@property(readonly, nonatomic) NSArray *availableVideoEffects;
@property(retain, nonatomic) TUVideoEffect *currentVideoEffect;
- (UIImage *)thumbnailImageForVideoEffectName:(NSString *)arg1;
@end

