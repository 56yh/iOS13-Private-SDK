//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <RemoteUI/RUIHeader-Protocol.h>

@class RUILinkLabel, UIImageView, UILabel;

@interface RUIHeaderView : UIView <RUIHeader>
{
    UILabel *_headerLabel;
    RUILinkLabel *_detailHeaderLabel;
    UILabel *_subHeaderLabel;
    UIImageView *_iconView;
    int _imageAlignment;
    BOOL _isFirstSection;
    BOOL _customIconSize;
    UIEdgeInsets _margins;
}

@property(nonatomic) UIEdgeInsets margins; // @synthesize margins=_margins;
// - (void).cxx_destruct;
- (double)headerHeightForWidth:(double)arg1 inView:(id)arg2;
- (void)layoutSubviews;
- (double)_titleSubtitlePaddingInView:(id)arg1;
- (double)_imageTitlePaddingInView:(id)arg1;
- (BOOL)_hasIcon;
- (void)setSectionIsFirst:(BOOL)arg1;
- (void)setImageAlignment:(int)arg1;
- (void)setImageSize:(CGSize)arg1;
- (void)setIconImage:(id)arg1;
- (id)iconImage;
- (void)setDetailHeaderColor:(id)arg1;
- (void)setDetailText:(id)arg1 attributes:(id)arg2;
- (id)detailHeaderLabel;
- (void)setSubHeaderColor:(id)arg1;
- (void)setSubHeaderAlignment:(long long)arg1;
- (void)setSubHeaderText:(id)arg1 attributes:(id)arg2;
- (id)subHeaderLabel;
- (void)setHeaderColor:(id)arg1;
- (void)setHeaderAlignment:(long long)arg1;
- (void)setText:(id)arg1 attributes:(id)arg2;
- (id)headerLabel;
- (id)initWithAttributes:(id)arg1;
- (double)_headerOffsetInView:(id)arg1;

@end

