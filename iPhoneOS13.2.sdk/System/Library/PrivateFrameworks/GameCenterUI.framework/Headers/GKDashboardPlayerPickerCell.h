//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterUI/GKDashboardPlayerCell.h>

@class NSLayoutConstraint, UIButton, UIImageView;

@interface GKDashboardPlayerPickerCell : GKDashboardPlayerCell
{
    _Bool _selectable;
    _Bool _showsLastPlayedStatusText;
    UIImageView *_selectionView;
    UIButton *_selectionButton;
    NSLayoutConstraint *_nameConstraint;
    NSLayoutConstraint *_selectionHorizontalConstraint;
    NSLayoutConstraint *_selectionVerticalConstraint;
    NSLayoutConstraint *_statusHeightConstraint;
    double _nameInitialConstant;
    double _selectionInitialHorizontalConstant;
    double _selectionInitialVerticalConstant;
    double _statusInitialConstant;
}

@property(nonatomic) double statusInitialConstant; // @synthesize statusInitialConstant=_statusInitialConstant;
@property(nonatomic) double selectionInitialVerticalConstant; // @synthesize selectionInitialVerticalConstant=_selectionInitialVerticalConstant;
@property(nonatomic) double selectionInitialHorizontalConstant; // @synthesize selectionInitialHorizontalConstant=_selectionInitialHorizontalConstant;
@property(nonatomic) double nameInitialConstant; // @synthesize nameInitialConstant=_nameInitialConstant;
@property(nonatomic) NSLayoutConstraint *statusHeightConstraint; // @synthesize statusHeightConstraint=_statusHeightConstraint;
@property(nonatomic) NSLayoutConstraint *selectionVerticalConstraint; // @synthesize selectionVerticalConstraint=_selectionVerticalConstraint;
@property(nonatomic) NSLayoutConstraint *selectionHorizontalConstraint; // @synthesize selectionHorizontalConstraint=_selectionHorizontalConstraint;
@property(nonatomic) NSLayoutConstraint *nameConstraint; // @synthesize nameConstraint=_nameConstraint;
@property(nonatomic) UIButton *selectionButton; // @synthesize selectionButton=_selectionButton;
@property(nonatomic) UIImageView *selectionView; // @synthesize selectionView=_selectionView;
@property(nonatomic) _Bool showsLastPlayedStatusText; // @synthesize showsLastPlayedStatusText=_showsLastPlayedStatusText;
@property(nonatomic, getter=isSelectable) _Bool selectable; // @synthesize selectable=_selectable;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)setSelected:(_Bool)arg1;
- (void)setStatusWithAchievementEarnedPoints:(long long)arg1 andDate:(id)arg2;
- (void)setPlayer:(id)arg1;
- (void)awakeFromNib;

@end

