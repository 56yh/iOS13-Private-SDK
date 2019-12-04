//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class VUIScoreboardRowLayout, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIScoreboardLayout : NSObject
{
    double _padding;
    VUITextLayout *_textLayout;
    VUIScoreboardRowLayout *_topRowLayout;
    VUIScoreboardRowLayout *_bottomRowLayout;
    struct TVCornerRadii _borderRadii;
}

+ (int)_textBlendMode;
+ (id)_textColor:(long long)arg1;
+ (id)scoreboardCLayoutWithInnerMargin:(double)arg1;
+ (id)scoreboardBLayout;
+ (id)scoreboardALayout;
@property(retain, nonatomic) VUIScoreboardRowLayout *bottomRowLayout; // @synthesize bottomRowLayout=_bottomRowLayout;
@property(retain, nonatomic) VUIScoreboardRowLayout *topRowLayout; // @synthesize topRowLayout=_topRowLayout;
@property(retain, nonatomic) VUITextLayout *textLayout; // @synthesize textLayout=_textLayout;
@property(nonatomic) double padding; // @synthesize padding=_padding;
@property(nonatomic) struct TVCornerRadii borderRadii; // @synthesize borderRadii=_borderRadii;

@end

