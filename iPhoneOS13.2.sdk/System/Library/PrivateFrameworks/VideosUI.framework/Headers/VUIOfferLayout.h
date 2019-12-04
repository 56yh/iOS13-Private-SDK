//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVMLKit/TVViewLayout.h>

@class NSShadow, TVImageLayout, UIColor, VUIButtonLayout, VUIMediaTagsViewLayout, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIOfferLayout : TVViewLayout
{
    TVImageLayout *_imageLayout;
    TVImageLayout *_appIconLayout;
    TVImageLayout *_logoLayout;
    VUITextLayout *_channelNameTextLayout;
    VUITextLayout *_titleTextLayout;
    VUITextLayout *_subtitleTextLayout;
    VUITextLayout *_textLayout;
    VUITextLayout *_focusedTextLayout;
    TVImageLayout *_badgeLayout;
    VUIMediaTagsViewLayout *_tagsLayout;
    VUIButtonLayout *_versionsButtonLayout;
    NSShadow *_shadow;
    double _borderWidth;
    UIColor *_borderColor;
    struct TVCornerRadii _borderRadii;
}

+ (id)subtitleTextLayout;
+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) struct TVCornerRadii borderRadii; // @synthesize borderRadii=_borderRadii;
@property(retain, nonatomic) NSShadow *shadow; // @synthesize shadow=_shadow;
@property(retain, nonatomic) VUIButtonLayout *versionsButtonLayout; // @synthesize versionsButtonLayout=_versionsButtonLayout;
@property(retain, nonatomic) VUIMediaTagsViewLayout *tagsLayout; // @synthesize tagsLayout=_tagsLayout;
@property(retain, nonatomic) TVImageLayout *badgeLayout; // @synthesize badgeLayout=_badgeLayout;
@property(retain, nonatomic) VUITextLayout *focusedTextLayout; // @synthesize focusedTextLayout=_focusedTextLayout;
@property(retain, nonatomic) VUITextLayout *textLayout; // @synthesize textLayout=_textLayout;
@property(retain, nonatomic) VUITextLayout *subtitleTextLayout; // @synthesize subtitleTextLayout=_subtitleTextLayout;
@property(retain, nonatomic) VUITextLayout *titleTextLayout; // @synthesize titleTextLayout=_titleTextLayout;
@property(retain, nonatomic) VUITextLayout *channelNameTextLayout; // @synthesize channelNameTextLayout=_channelNameTextLayout;
@property(retain, nonatomic) TVImageLayout *logoLayout; // @synthesize logoLayout=_logoLayout;
@property(retain, nonatomic) TVImageLayout *appIconLayout; // @synthesize appIconLayout=_appIconLayout;
@property(retain, nonatomic) TVImageLayout *imageLayout; // @synthesize imageLayout=_imageLayout;
- (id)init;

@end

