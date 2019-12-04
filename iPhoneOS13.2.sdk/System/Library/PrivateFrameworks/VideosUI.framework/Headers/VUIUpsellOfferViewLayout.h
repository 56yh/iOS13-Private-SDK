//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVMLKit/TVViewLayout.h>

@class TVImageLayout, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIUpsellOfferViewLayout : TVViewLayout
{
    VUITextLayout *_titleTextLayout;
    VUITextLayout *_descriptionTextLayout;
    TVImageLayout *_imageLayout;
}

+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;
@property(readonly, nonatomic) TVImageLayout *imageLayout; // @synthesize imageLayout=_imageLayout;
@property(readonly, nonatomic) VUITextLayout *descriptionTextLayout; // @synthesize descriptionTextLayout=_descriptionTextLayout;
@property(readonly, nonatomic) VUITextLayout *titleTextLayout; // @synthesize titleTextLayout=_titleTextLayout;
- (void)_configureLayout;
- (double)descriptionTopMargin;
- (double)titleTopMarginPad;
- (double)titleTopMarginPhone;
- (struct UIEdgeInsets)safeAreaInsets;
- (id)init;

@end

