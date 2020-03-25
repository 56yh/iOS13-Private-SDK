//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class HKSourceDataModel, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface WDSourcesListTableViewCell : UITableViewCell
{
    HKSourceDataModel *_sourceModel;
    UIImageView *_iconImage;
    UILabel *_titleLabel;
}

+ (id)defaultReuseIdentifier;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) HKSourceDataModel *sourceModel; // @synthesize sourceModel=_sourceModel;
// - (void).cxx_destruct;
- (void)_handleReturnedImage:(id)arg1 forSource:(id)arg2 fetchError:(id)arg3;
- (void)setupConstraints;
- (void)setUpSubviews;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
