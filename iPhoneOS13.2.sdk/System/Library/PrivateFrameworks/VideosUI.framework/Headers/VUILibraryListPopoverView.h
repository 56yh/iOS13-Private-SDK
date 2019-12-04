//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UICollectionView, UILabel, VUISeparatorView;

__attribute__((visibility("hidden")))
@interface VUILibraryListPopoverView : UIView
{
    UILabel *_titleLabel;
    NSString *_title;
    UICollectionView *_collectionView;
    VUISeparatorView *_separatorView;
    UIView *_titleContainerView;
}

@property(retain, nonatomic) UIView *titleContainerView; // @synthesize titleContainerView=_titleContainerView;
@property(retain, nonatomic) VUISeparatorView *separatorView; // @synthesize separatorView=_separatorView;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2;

@end

