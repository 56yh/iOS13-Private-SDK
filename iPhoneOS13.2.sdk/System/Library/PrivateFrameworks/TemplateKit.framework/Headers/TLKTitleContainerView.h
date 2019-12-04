//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TemplateKit/TLKStackView.h>

@class TLKImageView, TLKLabel;

@interface TLKTitleContainerView : TLKStackView
{
    TLKLabel *_titleLabel;
    TLKLabel *_secondaryLabel;
    TLKImageView *_secondaryImageView;
}

+ (id)titleFont;
+ (id)titleFontforTitle:(id)arg1;
@property(retain, nonatomic) TLKImageView *secondaryImageView; // @synthesize secondaryImageView=_secondaryImageView;
@property(retain, nonatomic) TLKLabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(retain, nonatomic) TLKLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (id)secondaryTitleLabelString;
- (id)titleLabelString;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (void)updateResultWithTitle:(id)arg1 secondaryTitle:(id)arg2 image:(id)arg3 detached:(_Bool)arg4;
- (id)init;

@end
